#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyPlayerTalkConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18B4C080)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18B4BED0)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18B4BBA0)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18B4BE70)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18B4C250)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B4BC20)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18B4C290)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18B4C470)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18B4C680)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18B4C9E0)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18B4C3D0)
#define RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18B4C330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyPlayerTalkConfigExcelTable_TypeDefinitionIndex = 11469;

	class MonopolyPlayerTalkConfigExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyPlayerTalkConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EC30);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyPlayerTalkConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyPlayerTalkConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyPlayerTalkConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EC38);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyPlayerTalkConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x3EC40);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyPlayerTalkConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE080);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyPlayerTalkConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xE081);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyPlayerTalkConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyPlayerTalkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyPlayerTalkConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyPlayerTalkConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyPlayerTalkConfigRow* GetData(::System::UInt32 ID)
		{
			return ((::RPG::GameCore::MonopolyPlayerTalkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_GETDATA_OFFSET))(ID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyPlayerTalkConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyPlayerTalkConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYPLAYERTALKCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
