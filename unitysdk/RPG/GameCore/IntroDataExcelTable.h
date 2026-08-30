#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IntroDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_INTRODATAEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D1AEA00)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D1AE890)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D1AE580)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D1AE830)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D1AEB50)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1AE600)
#define RPG_GAMECORE_INTRODATAEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1AEB90)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D1AED60)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D1AF030)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D1AF350)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D1AECC0)
#define RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D1AEC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IntroDataExcelTable_TypeDefinitionIndex = 13723;

	class IntroDataExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(IntroDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F6C0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(IntroDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F6C8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(IntroDataExcelTable_TypeDefinitionIndex)->GetStaticField(0x3F6D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(IntroDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xF4C0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(IntroDataExcelTable_TypeDefinitionIndex)->GetStaticField(0xF4C1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IntroDataRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::IntroDataRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::IntroDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::IntroDataRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::IntroDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTRODATAEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
