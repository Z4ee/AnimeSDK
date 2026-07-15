#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MarbleSealSkillConfigRow; }
namespace System { class String; }

#define RPG_CLIENT_MARBLESKILL_GET_DESCPARAMS_OFFSET UNITYSDK_OFFSET(0x1A886A90)
#define RPG_CLIENT_MARBLESKILL_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1A886A20)
#define RPG_CLIENT_MARBLESKILL_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1A8868C0)
#define RPG_CLIENT_MARBLESKILL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1A886960)
#define RPG_CLIENT_MARBLESKILL_GET_ID_OFFSET UNITYSDK_OFFSET(0x1A874380)
#define RPG_CLIENT_MARBLESKILL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1A8869B0)
#define RPG_CLIENT_MARBLESKILL_GET_SKILLHINTTYPE_OFFSET UNITYSDK_OFFSET(0x1A886910)
#define RPG_CLIENT_MARBLESKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A874270)

namespace RPG::Client
{
	inline static constexpr unsigned int MarbleSkill_TypeDefinitionIndex = 62896;

	class MarbleSkill : public ::System::Object
	{
	public:
		::RPG::GameCore::MarbleSealSkillConfigRow* _Row; // 0x10

		::System::Void _ctor(::RPG::GameCore::MarbleSealSkillConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::MarbleSealSkillConfigRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MARBLESKILL__CTOR_OFFSET))(this, a1);
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
