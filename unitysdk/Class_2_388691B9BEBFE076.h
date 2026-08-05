#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/Enum_3_B76E0F70078A67D5.h"
#include "unitysdk/UnityEngine/RaycastHit.h"

#define CLASS_2_388691B9BEBFE076_METHOD_2_052D5F341D228541_OFFSET UNITYSDK_OFFSET(0x124D9E30)
#define CLASS_2_388691B9BEBFE076_METHOD_2_1FFE4260A7179061_OFFSET UNITYSDK_OFFSET(0x124D9DE0)
#define CLASS_2_388691B9BEBFE076_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x124D9CC0)
#define CLASS_2_388691B9BEBFE076_METHOD_2_A1B220D6E0603256_OFFSET UNITYSDK_OFFSET(0x124D9E10)
#define CLASS_2_388691B9BEBFE076_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x124D9D50)
#define CLASS_2_388691B9BEBFE076__CCTOR_OFFSET UNITYSDK_OFFSET(0x124D9C40)
#define CLASS_2_388691B9BEBFE076__CTOR_OFFSET UNITYSDK_OFFSET(0x124D9CB0)

inline static constexpr unsigned int Class_2_388691B9BEBFE076_TypeDefinitionIndex = 83369;

class Class_2_388691B9BEBFE076 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0x90; // 0x0
	::Enum_3_B76E0F70078A67D5 Field_2_7; // 0x20
	::UnityEngine::RaycastHit Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_388691B9BEBFE076__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388691B9BEBFE076__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388691B9BEBFE076_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388691B9BEBFE076_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::UnityEngine::RaycastHit Method_2_1FFE4260A7179061()
	{
		return ((::UnityEngine::RaycastHit(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_388691B9BEBFE076_METHOD_2_1FFE4260A7179061_OFFSET))(this);
	}

	::System::Void Method_2_A1B220D6E0603256(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_388691B9BEBFE076_METHOD_2_A1B220D6E0603256_OFFSET))(this, a1);
	}

	::System::Void Method_2_052D5F341D228541(::UnityEngine::RaycastHit a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + CLASS_2_388691B9BEBFE076_METHOD_2_052D5F341D228541_OFFSET))(this, a1);
	}
};
