#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/DiceCombatDiceRare.h"
#include "unitysdk/System/Object.h"

class Class_1_D311B9D517905070;
namespace RPG::Client { class DiceCombatDiceContentInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GETDICECONTENTINFOS_OFFSET UNITYSDK_OFFSET(0xA163BA0)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_CONDITIONDESC_OFFSET UNITYSDK_OFFSET(0xA164030)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_CONDITIONPARAMLIST_OFFSET UNITYSDK_OFFSET(0xA164080)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_DICEBGPATH_OFFSET UNITYSDK_OFFSET(0xA1640A0)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_DICEFIGURESICONPATH_OFFSET UNITYSDK_OFFSET(0xA1641F0)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_DICEICONPATH_OFFSET UNITYSDK_OFFSET(0xA164130)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_HASSKILLCONTENT_OFFSET UNITYSDK_OFFSET(0xA163D30)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xA163CF0)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_ISCOLLECTION_OFFSET UNITYSDK_OFFSET(0xA163D10)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xA163FE0)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xA164010)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xA164060)
#define RPG_CLIENT_DICECOMBATDICECONFIGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xA163B60)

namespace RPG::Client
{
	inline static constexpr unsigned int DiceCombatDiceConfigData_TypeDefinitionIndex = 58549;

	class DiceCombatDiceConfigData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceContentInfo*>* _DiceContentInfos; // 0x10
		::Class_1_D311B9D517905070* _Row; // 0x18

		::System::Void _ctor(::System::UInt32 id)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA__CTOR_OFFSET))(this, id);
		}

		::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceContentInfo*>* GetDiceContentInfos()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::DiceCombatDiceContentInfo*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GETDICECONTENTINFOS_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsCollection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_ISCOLLECTION_OFFSET))(this);
		}

		::System::Boolean get_HasSkillContent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_HASSKILLCONTENT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_NAME_OFFSET))(this);
		}

		::RPG::GameCore::DiceCombatDiceRare get_Rarity()
		{
			return ((::RPG::GameCore::DiceCombatDiceRare(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_RARITY_OFFSET))(this);
		}

		::RPG::Client::TextID get_ConditionDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_CONDITIONDESC_OFFSET))(this);
		}

		::System::UInt32 get_Type()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_TYPE_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ConditionParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_CONDITIONPARAMLIST_OFFSET))(this);
		}

		::System::String* get_DiceBgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_DICEBGPATH_OFFSET))(this);
		}

		::System::String* get_DiceIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_DICEICONPATH_OFFSET))(this);
		}

		::System::String* get_DiceFiguresIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBATDICECONFIGDATA_GET_DICEFIGURESICONPATH_OFFSET))(this);
		}
	};
}
