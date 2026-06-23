#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8377BAB19A574A40.h"

namespace UnityEngine { class Transform; }

#define CLASS_2_4F074E9FD346C2CD_METHOD_2_08A500CCFA7B1882_OFFSET UNITYSDK_OFFSET(0x13BD2740)
#define CLASS_2_4F074E9FD346C2CD_METHOD_2_96F6E9EA89A38FD1_OFFSET UNITYSDK_OFFSET(0x13BD2630)
#define CLASS_2_4F074E9FD346C2CD__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD26D0)

inline static constexpr unsigned int Class_2_4F074E9FD346C2CD_TypeDefinitionIndex = 45528;

class Class_2_4F074E9FD346C2CD : public ::Class_1_8377BAB19A574A40
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x80
	::System::Int32 Field_2_2; // 0x88
	::System::Boolean Field_2_1; // 0x8C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F074E9FD346C2CD__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_96F6E9EA89A38FD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F074E9FD346C2CD_METHOD_2_96F6E9EA89A38FD1_OFFSET))(this);
	}

	::System::Void Method_2_08A500CCFA7B1882()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4F074E9FD346C2CD_METHOD_2_08A500CCFA7B1882_OFFSET))(this);
	}
};
