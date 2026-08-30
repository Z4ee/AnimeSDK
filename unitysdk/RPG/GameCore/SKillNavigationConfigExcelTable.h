#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarBaseType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SKillNavigationConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1D4BA970)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1D4BA800)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1D4BA4F0)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1D4BA7A0)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1D4BAB50)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4BA570)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4BAB90)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4BAD60)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1D4BAFE0)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D4BB380)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1D4BACC0)
#define RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1D4BAC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SKillNavigationConfigExcelTable_TypeDefinitionIndex = 13717;

	class SKillNavigationConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SKillNavigationConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SKillNavigationConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(SKillNavigationConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x16CA0);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(SKillNavigationConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x16CA8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SKillNavigationConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x16CB0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(SKillNavigationConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SKillNavigationConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x8A91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SKillNavigationConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SKillNavigationConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SKillNavigationConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SKillNavigationConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::SKillNavigationConfigRow* GetData(::RPG::GameCore::AvatarBaseType a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::SKillNavigationConfigRow*(*)(::RPG::GameCore::AvatarBaseType, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_GETDATA_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::SKillNavigationConfigRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::SKillNavigationConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLNAVIGATIONCONFIGEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
