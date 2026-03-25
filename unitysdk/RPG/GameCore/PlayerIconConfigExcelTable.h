#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerIconConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x174DC200)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x174DC050)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x174DBD20)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x174DBFF0)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x174DC3D0)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x174DBDA0)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x174DC410)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x174DC5F0)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x174DC850)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x174DCBB0)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x174DC550)
#define RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x174DC4B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerIconConfigExcelTable_TypeDefinitionIndex = 13235;

	class PlayerIconConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x30870);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerIconConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerIconConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x30878);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(PlayerIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x30880);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(PlayerIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xFC10);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PlayerIconConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xFC11);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerIconConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerIconConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerIconConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerIconConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::PlayerIconConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::PlayerIconConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::PlayerIconConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::PlayerIconConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERICONCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
