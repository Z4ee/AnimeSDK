#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class JsonEnum; }

#define RPG_GAMECORE_RTSKILLRETURNTOKEN_METHOD_3_482FD4EAD1B2CB0F_OFFSET UNITYSDK_OFFSET(0x1D4B1430)
#define RPG_GAMECORE_RTSKILLRETURNTOKEN_METHOD_3_A47A0D2F14D26934_OFFSET UNITYSDK_OFFSET(0x1D4B13F0)
#define RPG_GAMECORE_RTSKILLRETURNTOKEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B1420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillReturnToken_TypeDefinitionIndex = 23944;

	class RtSkillReturnToken : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::JsonEnum* Token; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLRETURNTOKEN__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A47A0D2F14D26934(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillReturnToken*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillReturnToken*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLRETURNTOKEN_METHOD_3_A47A0D2F14D26934_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_482FD4EAD1B2CB0F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RtSkillReturnToken* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RtSkillReturnToken*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLRETURNTOKEN_METHOD_3_482FD4EAD1B2CB0F_OFFSET))(a1, a2);
		}
	};
}
