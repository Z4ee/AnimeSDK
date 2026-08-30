#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_WAITTIMERELAYFLAMELOADED_METHOD_3_1CB1D159E0510432_OFFSET UNITYSDK_OFFSET(0x1DEC32E0)
#define RPG_GAMECORE_WAITTIMERELAYFLAMELOADED_METHOD_3_8C6F31DA7A64A4AF_OFFSET UNITYSDK_OFFSET(0x1DEC3210)
#define RPG_GAMECORE_WAITTIMERELAYFLAMELOADED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC32D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int WaitTimeRelayFlameLoaded_TypeDefinitionIndex = 21791;

	class WaitTimeRelayFlameLoaded : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMERELAYFLAMELOADED__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8C6F31DA7A64A4AF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTimeRelayFlameLoaded*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTimeRelayFlameLoaded*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMERELAYFLAMELOADED_METHOD_3_8C6F31DA7A64A4AF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1CB1D159E0510432(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::WaitTimeRelayFlameLoaded* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::WaitTimeRelayFlameLoaded*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITTIMERELAYFLAMELOADED_METHOD_3_1CB1D159E0510432_OFFSET))(a1, a2);
		}
	};
}
