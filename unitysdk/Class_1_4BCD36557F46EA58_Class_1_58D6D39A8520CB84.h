#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_4BCD36557F46EA58;
class Class_1_BE29B49AC03370B6;
namespace System { template <typename T> class Action_1; }

#define CLASS_1_4BCD36557F46EA58_CLASS_1_58D6D39A8520CB84_METHOD_1_B38D76518A7296F5_OFFSET UNITYSDK_OFFSET(0x1131C570)
#define CLASS_1_4BCD36557F46EA58_CLASS_1_58D6D39A8520CB84__CTOR_OFFSET UNITYSDK_OFFSET(0x1131C560)

inline static constexpr unsigned int Class_1_4BCD36557F46EA58_Class_1_58D6D39A8520CB84_TypeDefinitionIndex = 88146;

class Class_1_4BCD36557F46EA58_Class_1_58D6D39A8520CB84 : public ::System::Object
{
public:
	::System::Action_1<::Class_1_BE29B49AC03370B6*>* Field_1_0; // 0x10
	::Class_1_4BCD36557F46EA58* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4BCD36557F46EA58_CLASS_1_58D6D39A8520CB84__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B38D76518A7296F5(::Class_1_BE29B49AC03370B6* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_BE29B49AC03370B6*))((::PBYTE)hIl2Cpp + CLASS_1_4BCD36557F46EA58_CLASS_1_58D6D39A8520CB84_METHOD_1_B38D76518A7296F5_OFFSET))(this, a1);
	}
};
