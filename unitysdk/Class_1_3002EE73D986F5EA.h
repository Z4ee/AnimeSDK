#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define CLASS_1_3002EE73D986F5EA_METHOD_1_B6B03E6D73CBD278_OFFSET UNITYSDK_OFFSET(0xFEEFA70)
#define CLASS_1_3002EE73D986F5EA_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xFEEFA20)
#define CLASS_1_3002EE73D986F5EA_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xFEEF9D0)
#define CLASS_1_3002EE73D986F5EA_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xFEEFA10)
#define CLASS_1_3002EE73D986F5EA__CTOR_OFFSET UNITYSDK_OFFSET(0xFEEFA60)

inline static constexpr unsigned int Class_1_3002EE73D986F5EA_TypeDefinitionIndex = 65364;

class Class_1_3002EE73D986F5EA : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3002EE73D986F5EA__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3002EE73D986F5EA_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3002EE73D986F5EA_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3002EE73D986F5EA_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_B6B03E6D73CBD278(::System::Action* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_3002EE73D986F5EA_METHOD_1_B6B03E6D73CBD278_OFFSET))(this, a1);
	}
};
