#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCBlockIntroRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1C4B72B0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C4B7140)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1C4B6E30)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1C4B70E0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1C4B7440)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B6EB0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B7480)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C4B7650)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1C4B7A10)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C4B7D80)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1C4B75B0)
#define RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1C4B7510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueDLCBlockIntroExcelTable_TypeDefinitionIndex = 14199;

	class RogueDLCBlockIntroExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockIntroExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D7C0);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockIntroExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D7C8);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockIntroExcelTable_TypeDefinitionIndex)->GetStaticField(0x4D7D0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockIntroExcelTable_TypeDefinitionIndex)->GetStaticField(0xDC90);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueDLCBlockIntroExcelTable_TypeDefinitionIndex)->GetStaticField(0xDC91);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCBlockIntroRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueDLCBlockIntroRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueDLCBlockIntroRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueDLCBlockIntroRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueDLCBlockIntroRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCBLOCKINTROEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
