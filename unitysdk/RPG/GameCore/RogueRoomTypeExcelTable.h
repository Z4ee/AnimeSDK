#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueRoomTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19BBAAA0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BBA930)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19BBA620)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19BBA8D0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19BBAC30)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BBA6A0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19BBAC70)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BBAE40)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19BBB280)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BBB5F0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19BBADA0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BBAD00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueRoomTypeExcelTable_TypeDefinitionIndex = 13983;

	class RogueRoomTypeExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x472A0);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x472A8);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x472B0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xCF30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0xCF31);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueRoomTypeRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueRoomTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETDATA_OFFSET))(a1);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueRoomTypeRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueRoomTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
