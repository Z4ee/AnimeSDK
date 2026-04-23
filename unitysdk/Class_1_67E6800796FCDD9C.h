#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"

namespace UnityEngine { class Transform; }

#define CLASS_1_67E6800796FCDD9C_METHOD_1_72F08A4427685345_OFFSET UNITYSDK_OFFSET(0x11E1AB60)
#define CLASS_1_67E6800796FCDD9C_METHOD_1_9ADDACEB5F3BA8D6_OFFSET UNITYSDK_OFFSET(0x11E1A980)
#define CLASS_1_67E6800796FCDD9C_METHOD_1_A1ADC999CFACEB89_OFFSET UNITYSDK_OFFSET(0x11E1AD20)
#define CLASS_1_67E6800796FCDD9C__CTOR_OFFSET UNITYSDK_OFFSET(0x11E1AB50)

inline static constexpr unsigned int Class_1_67E6800796FCDD9C_TypeDefinitionIndex = 62904;

class Class_1_67E6800796FCDD9C : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_67E6800796FCDD9C__CTOR_OFFSET))(this);
	}

	static ::Class_1_67E6800796FCDD9C* Method_1_9ADDACEB5F3BA8D6(::UnityEngine::Transform* a1)
	{
		return ((::Class_1_67E6800796FCDD9C*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_67E6800796FCDD9C_METHOD_1_9ADDACEB5F3BA8D6_OFFSET))(a1);
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
