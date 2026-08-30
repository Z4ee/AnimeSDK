#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_67E6800796FCDD9C_METHOD_1_72F08A4427685345_OFFSET UNITYSDK_OFFSET(0x188016C0)
#define CLASS_1_67E6800796FCDD9C_METHOD_1_7A6B5DD8ECCADEB6_OFFSET UNITYSDK_OFFSET(0x18801480)
#define CLASS_1_67E6800796FCDD9C_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x18801880)
#define CLASS_1_67E6800796FCDD9C__CTOR_OFFSET UNITYSDK_OFFSET(0x188016B0)

inline static constexpr unsigned int Class_1_67E6800796FCDD9C_TypeDefinitionIndex = 68216;

class Class_1_67E6800796FCDD9C : public ::System::Object
{
public:
	::System::Int32 FFNBLDFFMCN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67E6800796FCDD9C__CTOR_OFFSET))(this);
	}

	static ::Class_1_67E6800796FCDD9C* Method_1_7A6B5DD8ECCADEB6(::UnityEngine::Transform* a1)
	{
		return ((::Class_1_67E6800796FCDD9C*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_67E6800796FCDD9C_METHOD_1_7A6B5DD8ECCADEB6_OFFSET))(a1);
	}

	static ::Class_1_67E6800796FCDD9C* Method_1_72F08A4427685345(::UnityEngine::Rect a1)
	{
		return ((::Class_1_67E6800796FCDD9C*(*)(::UnityEngine::Rect))((::PBYTE)hIl2Cpp + CLASS_1_67E6800796FCDD9C_METHOD_1_72F08A4427685345_OFFSET))(a1);
	}

	::System::Void Method_1_A1ADC999CFACEB89()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67E6800796FCDD9C_METHOD_1_A1ADC999CFACEB89_OFFSET))(this);
	}
};
