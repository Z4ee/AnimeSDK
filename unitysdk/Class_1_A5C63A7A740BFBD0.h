#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_A5C63A7A740BFBD0_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x18D42280)
#define CLASS_1_A5C63A7A740BFBD0_METHOD_1_193E00E83BC3E6E8_OFFSET UNITYSDK_OFFSET(0x18D42110)
#define CLASS_1_A5C63A7A740BFBD0_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18D421E0)
#define CLASS_1_A5C63A7A740BFBD0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18D42220)
#define CLASS_1_A5C63A7A740BFBD0__CTOR_OFFSET UNITYSDK_OFFSET(0x18D42270)

inline static constexpr unsigned int Class_1_A5C63A7A740BFBD0_TypeDefinitionIndex = 68317;

class Class_1_A5C63A7A740BFBD0 : public ::System::Object
{
public:
	::Foundation::ViewObject::ViewObjectHandle Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C63A7A740BFBD0__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_193E00E83BC3E6E8(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + CLASS_1_A5C63A7A740BFBD0_METHOD_1_193E00E83BC3E6E8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C63A7A740BFBD0_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C63A7A740BFBD0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A5C63A7A740BFBD0_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}
};
