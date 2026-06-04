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

#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_GETDATA_OFFSET UNITYSDK_OFFSET(0x19BA7380)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19BA7250)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_GET_DATADICT_OFFSET UNITYSDK_OFFSET(0x19BA6F40)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_ISDATAEMPTY_OFFSET UNITYSDK_OFFSET(0x19BA71F0)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_ISDATALOADED_OFFSET UNITYSDK_OFFSET(0x19BA7510)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BA6FC0)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_UNLOADDATA_OFFSET UNITYSDK_OFFSET(0x19BA7550)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET UNITYSDK_OFFSET(0x19BA7720)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__ADDITEM_OFFSET UNITYSDK_OFFSET(0x19BA7960)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BA7C80)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET UNITYSDK_OFFSET(0x19BA7680)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__LOADDATA_OFFSET UNITYSDK_OFFSET(0x19BA75E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousMissionRewardExcelTable_TypeDefinitionIndex = 14191;

	class RogueNousMissionRewardExcelTable : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMissionRewardRow*>** StaticGet_dataDict_()
		{
			return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueNousMissionRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMissionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x46E20);
		}
		static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet__AddItemFromBinary_ActionInst()
		{
			return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMissionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x46E28);
		}
		static ::Il2CppArray<::System::String*>** StaticGet_s_PathList()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RogueNousMissionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0x46E30);
		}
		static ::System::Boolean* StaticGet_isDataLoaded()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(RogueNousMissionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xCDD0);
		}
		static ::System::Byte* StaticGet_HashIndex()
		{
			return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(RogueNousMissionRewardExcelTable_TypeDefinitionIndex)->GetStaticField(0xCDD1);
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

		static ::RPG::GameCore::RogueNousMissionRewardRow* GetData(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::RogueNousMissionRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE_GETDATA_OFFSET))(a1);
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

		static ::System::Void _LoadData(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__LOADDATA_OFFSET))(a1);
		}

		static ::System::Void _LoadDataIncremential(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__LOADDATAINCREMENTIAL_OFFSET))(a1, a2, a3);
		}

		static ::System::Void _AddItemFromBinary(::Class_1_7A22A3DBEEDD1F80* a1)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__ADDITEMFROMBINARY_OFFSET))(a1);
		}

		static ::System::Void _AddItem(::RPG::GameCore::RogueNousMissionRewardRow* a1)
		{
			return ((::System::Void(*)(::RPG::GameCore::RogueNousMissionRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDEXCELTABLE__ADDITEM_OFFSET))(a1);
		}
	};
}
