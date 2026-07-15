#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TimeRewindEntityControlMode.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE_METHOD_3_1C66369469DBC064_OFFSET UNITYSDK_OFFSET(0x1C60DF00)
#define RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE_METHOD_3_469985BB0F5D6715_OFFSET UNITYSDK_OFFSET(0x1C60DF40)
#define RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C60DF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTimeRewindEntityControlMode_TypeDefinitionIndex = 19891;

	class SetTimeRewindEntityControlMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::TimeRewindEntityControlMode ControlMode; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_1C66369469DBC064(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindEntityControlMode*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindEntityControlMode*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE_METHOD_3_1C66369469DBC064_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_469985BB0F5D6715(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetTimeRewindEntityControlMode* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetTimeRewindEntityControlMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTIMEREWINDENTITYCONTROLMODE_METHOD_3_469985BB0F5D6715_OFFSET))(a1, a2);
		}
	};
}
