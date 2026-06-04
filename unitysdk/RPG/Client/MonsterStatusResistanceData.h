#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonsterResistEntry; }
namespace System { class String; }

#define RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA_CREATE_OFFSET UNITYSDK_OFFSET(0xC19C830)
#define RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0xC19CA20)
#define RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC19CA00)
#define RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA_SET_DESC_OFFSET UNITYSDK_OFFSET(0xC19CA30)
#define RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xC19CA10)
#define RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA__CCTOR_OFFSET UNITYSDK_OFFSET(0xC19CA40)
#define RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xC19C9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonsterStatusResistanceData_TypeDefinitionIndex = 67081;

	class MonsterStatusResistanceData : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet__ResistanceThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(MonsterStatusResistanceData_TypeDefinitionIndex)->GetStaticField(0x13BD0);
		}
		// static const ::System::String* _TEXTMAP_STATUS_RESISTANCE_PREFIX; // 0x0
		::System::String* _IconPath_k__BackingField; // 0x10
		::RPG::Client::TextID _Desc_k__BackingField; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA__CCTOR_OFFSET))();
		}

		static ::RPG::Client::MonsterStatusResistanceData* Create(::RPG::GameCore::MonsterResistEntry* a1)
		{
			return ((::RPG::Client::MonsterStatusResistanceData*(*)(::RPG::GameCore::MonsterResistEntry*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA_CREATE_OFFSET))(a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA_GET_DESC_OFFSET))(this);
		}

		::System::Void set_Desc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONSTERSTATUSRESISTANCEDATA_SET_DESC_OFFSET))(this, a1);
		}
	};
}
