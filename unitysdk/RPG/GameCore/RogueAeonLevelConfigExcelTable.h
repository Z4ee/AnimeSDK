#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueAeonLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x175DF6B0)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x175DF500)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x175DF1D0)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x175DF4A0)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x175DF8C0)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x175DF250)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x175DF900)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x175DFAE0)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x175DFEC0)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x175E0270)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x175DFA40)
#define RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x175DF9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueAeonLevelConfigExcelTable_TypeDefinitionIndex = 13571;

	class RogueAeonLevelConfigExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonLevelConfigRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonLevelConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueAeonLevelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34790);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueAeonLevelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x34798);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueAeonLevelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x347A0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueAeonLevelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10610);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueAeonLevelConfigExcelTable_TypeDefinitionIndex)->GetStaticField(0x10611);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonLevelConfigRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonLevelConfigRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueAeonLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueAeonLevelConfigRow* GetData(::System::UInt32 RogueAeonID, ::System::UInt32 AeonStoryID)
		{
			return ((::RPG::GameCore::RogueAeonLevelConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_GETDATA_OFFSET))(RogueAeonID, AeonStoryID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueAeonLevelConfigRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueAeonLevelConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEAEONLEVELCONFIGEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
