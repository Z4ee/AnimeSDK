#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_9530BF2CE3882F72_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x10B27CD0)
#define CLASS_2_9530BF2CE3882F72_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x10B27DE0)
#define CLASS_2_9530BF2CE3882F72__CTOR_OFFSET UNITYSDK_OFFSET(0x10B27D70)

inline static constexpr unsigned int Class_2_9530BF2CE3882F72_TypeDefinitionIndex = 66454;

class Class_2_9530BF2CE3882F72 : public ::Class_1_8377BAB19A574A40
{
public:
	::UnityEngine::Transform* Field_2_3; // 0x80
	::System::Boolean Field_2_1; // 0x88
	::System::Int32 Field_2_0; // 0x8C
	::System::Single Field_2_2; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9530BF2CE3882F72__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9530BF2CE3882F72_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9530BF2CE3882F72_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
