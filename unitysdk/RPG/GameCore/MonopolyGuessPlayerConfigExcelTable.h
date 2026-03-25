#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonopolyGuessPlayerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x1743C210)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1743C060)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x1743BD30)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x1743C000)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x1743C3E0)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x1743BDB0)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x1743C420)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x1743C600)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x1743C8B0)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1743CC10)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x1743C560)
#define RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x1743C4C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGuessPlayerConfigExcelTable_TypeDefinitionIndex = 11064;

	class MonopolyGuessPlayerConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyGuessPlayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C220);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyGuessPlayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C228);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessPlayerConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessPlayerConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(MonopolyGuessPlayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x2C230);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(MonopolyGuessPlayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB00);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(MonopolyGuessPlayerConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xEB01);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessPlayerConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessPlayerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessPlayerConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonopolyGuessPlayerConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::MonopolyGuessPlayerConfigRow* GetData(::System::UInt32 GuessPlayerID)
		{
			return ((::RPG::GameCore::MonopolyGuessPlayerConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_GETDATA_OFFSET))(GuessPlayerID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::MonopolyGuessPlayerConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::MonopolyGuessPlayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONOPOLYGUESSPLAYERCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
