#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FightFestStageInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x188E23D0)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x188E2220)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x188E1EF0)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x188E21C0)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x188E2550)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x188E1F70)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x188E2590)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x188E2770)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x188E2D40)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x188E3050)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x188E26D0)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x188E2630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestStageInfoExcelTable_TypeDefinitionIndex = 12558;

	class FightFestStageInfoExcelTable : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestStageInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F250);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestStageInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F258);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(FightFestStageInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0x2F260);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FightFestStageInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xBB60);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(FightFestStageInfoExcelTable_TypeDefinitionIndex)->GetStaticField(0xBB61);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestStageInfoRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::FightFestStageInfoRow* GetData(::System::UInt32 EventID)
		{
			return ((::RPG::GameCore::FightFestStageInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_GETDATA_OFFSET))(EventID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::FightFestStageInfoRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::FightFestStageInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
