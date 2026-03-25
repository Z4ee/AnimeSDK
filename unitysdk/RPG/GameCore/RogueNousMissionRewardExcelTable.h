#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueNousMissionRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x17644060)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x17643EE0)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x17643BB0)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x17643E80)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x17644230)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x17643C30)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x17644270)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x17644450)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x17644690)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x176449A0)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x176443B0)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x17644310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousMissionRewardExcelTable_TypeDefinitionIndex = 13658;

	class RogueNousMissionRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMissionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E90);
		}
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMissionRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMissionRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMissionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x5E98);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMissionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x5EA0);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousMissionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x3950);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousMissionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x3951);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMissionRewardRow*>* get_dataDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMissionRewardRow*>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_GET_DATADICT_OFFSET))();
		}

		static ::System::Boolean IsDataEmpty()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_ISDATAEMPTY_OFFSET))();
		}

		static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMissionRewardRow*> GetEnumerator()
		{
			return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMissionRewardRow*>(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_GETENUMERATOR_OFFSET))();
		}

		static ::RPG::GameCore::RogueNousMissionRewardRow* GetData(::System::UInt32 MissionRewardID)
		{
			return ((::RPG::GameCore::RogueNousMissionRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_GETDATA_OFFSET))(MissionRewardID);
		}

		static ::System::Boolean IsDataLoaded()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_ISDATALOADED_OFFSET))();
		}

		static ::System::Void LoadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_LOADDATA_OFFSET))();
		}

		static ::System::Void UnloadData()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_UNLOADDATA_OFFSET))();
		}

		static ::System::Void _LoadData(::System::String* sPath)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__LOADDATA_OFFSET))(sPath);
		}

		static ::System::Void _LoadDataIncremential(::System::String* sPath, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* CacheMap, ::System::Boolean& NeedBake)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(sPath, CacheMap, NeedBake);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* mByteBuf)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(mByteBuf);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousMissionRewardRow* pItem)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousMissionRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__ADDITEM_OFFSET))(pItem);
		}
	};
}
