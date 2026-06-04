#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETISOMETRICROADLINKERENABLE_METHOD_3_353126AB50C268EA_OFFSET UNITYSDK_OFFSET(0x19C52A90)
#define RPG_GAMECORE_SETISOMETRICROADLINKERENABLE_METHOD_3_C89AC4E5FA033109_OFFSET UNITYSDK_OFFSET(0x19C52BE0)
#define RPG_GAMECORE_SETISOMETRICROADLINKERENABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x19C52B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetIsometricRoadLinkerEnable_TypeDefinitionIndex = 20981;

	class SetIsometricRoadLinkerEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETISOMETRICROADLINKERENABLE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_353126AB50C268EA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIsometricRoadLinkerEnable*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIsometricRoadLinkerEnable*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETISOMETRICROADLINKERENABLE_METHOD_3_353126AB50C268EA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C89AC4E5FA033109(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::SetIsometricRoadLinkerEnable* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::SetIsometricRoadLinkerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETISOMETRICROADLINKERENABLE_METHOD_3_C89AC4E5FA033109_OFFSET))(a1, a2);
		}
	};
}
