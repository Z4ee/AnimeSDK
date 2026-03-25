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

#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17658B90)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x176589E0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x176586B0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17658980)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17658D60)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17658730)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17658DA0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17658F80)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x176593C0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x17659720)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x17658EE0)
#define RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17658E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueRoomTypeExcelTable_TypeDefinitionIndex = 13444;

	class RogueRoomTypeExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x5F90);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x5F98);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueRoomTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x5FA0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A20);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueRoomTypeExcelTable_TypeDefinitionIndex)->GetStaticField(0x3A21);
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

		static ::RPG::GameCore::RogueRoomTypeRow* GetData(::System::UInt32 RogueRoomType)
		{
			return ((::RPG::GameCore::RogueRoomTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE_GETDATA_OFFSET))(RogueRoomType);
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

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueRoomTypeRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueRoomTypeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEROOMTYPEEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
