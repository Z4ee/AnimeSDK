#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_DFBCA3F3CBEF1852;

#define RPG_CLIENT_EFFECTPOINTSANIMMODULE_METHOD_1_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x17731460)
#define RPG_CLIENT_EFFECTPOINTSANIMMODULE_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x17731410)
#define RPG_CLIENT_EFFECTPOINTSANIMMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x177314B0)

namespace RPG::Client
{
	inline static constexpr unsigned int EffectPointsAnimModule_TypeDefinitionIndex = 67468;

	class EffectPointsAnimModule : public ::System::Object
	{
	public:
		::System::Boolean Enabled; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPOINTSANIMMODULE__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_E9A575D18A0748D9(::Class_1_DFBCA3F3CBEF1852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPOINTSANIMMODULE_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
		}

		::System::Void Method_1_E9A575D18A0748D9_1(::Class_1_DFBCA3F3CBEF1852* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_DFBCA3F3CBEF1852*))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECTPOINTSANIMMODULE_METHOD_1_E9A575D18A0748D9_1_OFFSET))(this, a1);
		}
	};
}
