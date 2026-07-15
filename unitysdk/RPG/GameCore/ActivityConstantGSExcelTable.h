#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityConstantGSRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1AADF9C0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AADF850)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1AADF540)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1AADF7F0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1AADFB30)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AADF5C0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1AADFB70)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AADFD40)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1AADFEA0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AAE01C0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1AADFCA0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1AADFC00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityConstantGSExcelTable_TypeDefinitionIndex = 11208;

	class ActivityConstantGSExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstantGSExcelTable_TypeDefinitionIndex)->GetStaticField(0x19F80);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstantGSExcelTable_TypeDefinitionIndex)->GetStaticField(0x19F88);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstantGSRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstantGSRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstantGSExcelTable_TypeDefinitionIndex)->GetStaticField(0x19F90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityConstantGSExcelTable_TypeDefinitionIndex)->GetStaticField(0x60C0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityConstantGSExcelTable_TypeDefinitionIndex)->GetStaticField(0x60C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstantGSRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstantGSRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstantGSRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstantGSRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::ActivityConstantGSRow* GetData(::System::String* a1)
		{
			return ((::RPG::GameCore::ActivityConstantGSRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityConstantGSRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityConstantGSRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
