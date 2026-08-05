#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_8C3769B428C0B2A2_METHOD_2_15F4E4F86182D646_OFFSET UNITYSDK_OFFSET(0x1662B250)
#define CLASS_2_8C3769B428C0B2A2_METHOD_2_502E4F13BFB605D5_OFFSET UNITYSDK_OFFSET(0x1662B360)
#define CLASS_2_8C3769B428C0B2A2__CTOR_OFFSET UNITYSDK_OFFSET(0x1662B2F0)

inline static constexpr unsigned int Class_2_8C3769B428C0B2A2_TypeDefinitionIndex = 56227;

class Class_2_8C3769B428C0B2A2 : public ::Class_1_8377BAB19A574A40
{
public:
	::UnityEngine::Transform* Field_2_1; // 0x80
	::System::Int32 Field_2_7; // 0x88
	::System::Boolean Field_2_0; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C3769B428C0B2A2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_15F4E4F86182D646()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C3769B428C0B2A2_METHOD_2_15F4E4F86182D646_OFFSET))(this);
	}

	::System::Void Method_2_502E4F13BFB605D5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8C3769B428C0B2A2_METHOD_2_502E4F13BFB605D5_OFFSET))(this);
	}
};
