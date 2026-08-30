#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EAxis.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LOOKATADDITIVECURVECONSTRAINT_METHOD_2_FD21EAFBA5FE720D_OFFSET UNITYSDK_OFFSET(0x1D213830)
#define RPG_GAMECORE_LOOKATADDITIVECURVECONSTRAINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D213BF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LookAtAdditiveCurveConstraint_TypeDefinitionIndex = 21665;

	class LookAtAdditiveCurveConstraint : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean StopTrace; // 0x10
		::System::Single Duration; // 0x14
		::System::Single BlendInTime; // 0x18
		::System::Single BlendOutTime; // 0x1C
		::RPG::GameCore::EAxis Axis; // 0x20
		::System::Int32 UseSpineNum; // 0x24
		::System::Single PitchUp; // 0x28
		::System::Single PitchDown; // 0x2C
		::System::Single YawLeft; // 0x30
		::System::Single YawRight; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKATADDITIVECURVECONSTRAINT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_FD21EAFBA5FE720D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LookAtAdditiveCurveConstraint*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LookAtAdditiveCurveConstraint*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOOKATADDITIVECURVECONSTRAINT_METHOD_2_FD21EAFBA5FE720D_OFFSET))(a1, a2);
		}
	};
}
