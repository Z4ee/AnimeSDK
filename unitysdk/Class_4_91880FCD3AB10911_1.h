#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F31596D70431331B.h"

class Class_1_EAF7984A8FAD6BE4;
namespace UnityEngine::Rendering { class CommandBuffer; }

#define CLASS_4_91880FCD3AB10911_1_METHOD_4_0E1DBFE269098939_OFFSET UNITYSDK_OFFSET(0xBD3FF10)
#define CLASS_4_91880FCD3AB10911_1_METHOD_4_2CAADC051AEB67F9_OFFSET UNITYSDK_OFFSET(0xBD3FEC0)
#define CLASS_4_91880FCD3AB10911_1_METHOD_4_49B631EF1DEFEC16_OFFSET UNITYSDK_OFFSET(0xBD3FD20)
#define CLASS_4_91880FCD3AB10911_1_METHOD_4_EBAC71FBE1837205_OFFSET UNITYSDK_OFFSET(0xBD3FC50)
#define CLASS_4_91880FCD3AB10911_1__CTOR_OFFSET UNITYSDK_OFFSET(0xBD3FFB0)
#define CLASS_4_91880FCD3AB10911_1__INIT_B__0_0_OFFSET UNITYSDK_OFFSET(0xBD3FFD0)

inline static constexpr unsigned int Class_4_91880FCD3AB10911_1_TypeDefinitionIndex = 49770;

class Class_4_91880FCD3AB10911_1 : public ::Class_3_F31596D70431331B
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_91880FCD3AB10911_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_EBAC71FBE1837205()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_91880FCD3AB10911_1_METHOD_4_EBAC71FBE1837205_OFFSET))(this);
	}

	::System::Void Method_4_49B631EF1DEFEC16(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_4_91880FCD3AB10911_1_METHOD_4_49B631EF1DEFEC16_OFFSET))(this, a1);
	}

	::System::Void Method_4_2CAADC051AEB67F9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_91880FCD3AB10911_1_METHOD_4_2CAADC051AEB67F9_OFFSET))(this);
	}

	::System::Void Method_4_0E1DBFE269098939(::UnityEngine::Rendering::CommandBuffer* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + CLASS_4_91880FCD3AB10911_1_METHOD_4_0E1DBFE269098939_OFFSET))(this, a1);
	}

	::System::Void _Init_b__0_0(::Class_1_EAF7984A8FAD6BE4* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EAF7984A8FAD6BE4*))((::PBYTE)hIl2Cpp + CLASS_4_91880FCD3AB10911_1__INIT_B__0_0_OFFSET))(this, a1);
	}
};
