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

#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x186064E0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18606330)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18606000)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x186062D0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18606690)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18606080)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x186066D0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x186068B0)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18606A10)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18606D20)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18606810)
#define RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18606770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityConstantGSExcelTable_TypeDefinitionIndex = 11060;

	class ActivityConstantGSExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstantGSRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityConstantGSRow*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstantGSExcelTable_TypeDefinitionIndex)->GetStaticField(0x6C40);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstantGSExcelTable_TypeDefinitionIndex)->GetStaticField(0x6C48);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(ActivityConstantGSExcelTable_TypeDefinitionIndex)->GetStaticField(0x6C50);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ActivityConstantGSExcelTable_TypeDefinitionIndex)->GetStaticField(0x3280);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(ActivityConstantGSExcelTable_TypeDefinitionIndex)->GetStaticField(0x3281);
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

		static ::RPG::GameCore::ActivityConstantGSRow* GetData(::System::String* ConstValueName)
		{
			return ((::RPG::GameCore::ActivityConstantGSRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE_GETDATA_OFFSET))(ConstValueName);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::ActivityConstantGSRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::ActivityConstantGSRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYCONSTANTGSEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
