#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PAUSEPROPMOVETO_METHOD_3_1620541E8C05B24D_OFFSET UNITYSDK_OFFSET(0x1D418D20)
#define RPG_GAMECORE_PAUSEPROPMOVETO_METHOD_3_93CF52659F6E56E7_OFFSET UNITYSDK_OFFSET(0x1D418CA0)
#define RPG_GAMECORE_PAUSEPROPMOVETO__CTOR_OFFSET UNITYSDK_OFFSET(0x1D418CF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PausePropMoveTo_TypeDefinitionIndex = 21715;

	class PausePropMoveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Pause; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEPROPMOVETO__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_93CF52659F6E56E7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PausePropMoveTo*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PausePropMoveTo*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEPROPMOVETO_METHOD_3_93CF52659F6E56E7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_1620541E8C05B24D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PausePropMoveTo* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PausePropMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAUSEPROPMOVETO_METHOD_3_1620541E8C05B24D_OFFSET))(a1, a2);
		}
	};
}
