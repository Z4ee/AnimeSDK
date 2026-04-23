#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2199FC36CD2C2562;

#define RPG_CLIENT_EFFECTPOINTSANIMMODULE_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0xA1B88D0)
#define RPG_CLIENT_EFFECTPOINTSANIMMODULE_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0xA1B8880)
#define RPG_CLIENT_EFFECTPOINTSANIMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0xA1B8920)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectPointsAnimModule_TypeDefinitionIndex = 65116;

	class EffectPointsAnimModule : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPOINTSANIMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_E9A575D18A0748D9(::Class_1_2199FC36CD2C2562* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPOINTSANIMMODULE_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
		}

		::System::Void Method_1_E9A575D18A0748D9_1(::Class_1_2199FC36CD2C2562* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_2199FC36CD2C2562*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPOINTSANIMMODULE_METHOD_1_E9A575D18A0748D9_1_OFFSET))(this, a1);
		}
	};
}
