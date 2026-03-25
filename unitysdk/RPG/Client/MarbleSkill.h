#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarbleSealSkillConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_MARBLESKILL_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x9B21490)
#define RPG_CLIENT_MARBLESKILL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x9B21460)
#define RPG_CLIENT_MARBLESKILL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x9B213D0)
#define RPG_CLIENT_MARBLESKILL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x9B21410)
#define RPG_CLIENT_MARBLESKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0x9B213B0)
#define RPG_CLIENT_MARBLESKILL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x9B21430)
#define RPG_CLIENT_MARBLESKILL_GET_SKILLHINTTYPE_OFFSET UNITYSDK_OFFSET(0x9B213F0)
#define RPG_CLIENT_MARBLESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x9B213A0)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleSkill_TypeDefinitionIndex = 53456;

	class MarbleSkill : public ::System::Object
	{
	public:
		::RPG::GameCore::MarbleSealSkillConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::MarbleSealSkillConfigRow* row)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSealSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLESKILL__CTOR_OFFSET))(this, row);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLESKILL_GET_ID_OFFSET))(this);
		}

		::System::UInt32 get_GroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLESKILL_GET_GROUPID_OFFSET))(this);
		}

		::System::UInt32 get_SkillHintType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLESKILL_GET_SKILLHINTTYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLESKILL_GET_ICONPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLESKILL_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLESKILL_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_DescParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLESKILL_GET_DESCPARAMS_OFFSET))(this);
		}
	};
}
