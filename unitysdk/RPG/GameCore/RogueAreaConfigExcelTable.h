#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueAreaConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x18CEDDA0)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x18CEDBF0)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x18CED8C0)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x18CEDB90)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x18CEDF20)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CED940)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x18CEDF60)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x18CEE140)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x18CEE8E0)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18CEEBF0)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x18CEE0A0)
#define RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x18CEE000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAreaConfigExcelTable_TypeDefinitionIndex = 13907;

	class RogueAreaConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueAreaConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42290);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAreaConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAreaConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueAreaConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x42298);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueAreaConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x422A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueAreaConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xED40);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueAreaConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0xED41);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAreaConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAreaConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAreaConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAreaConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueAreaConfigRow* GetData(::System::UInt32 RogueAreaID)
		{
			return ((::RPG::GameCore::RogueAreaConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_GETDATA_OFFSET))(RogueAreaID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueAreaConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAREACONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
