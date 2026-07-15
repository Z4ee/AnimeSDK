#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_4F8F63A86CD3F701_METHOD_1_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x18F92D60)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x18F92F00)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_391A84BCD9F51317_2_OFFSET UNITYSDK_OFFSET(0x18F93000)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18F92D20)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_7EC693EFA0B59E75_OFFSET UNITYSDK_OFFSET(0x18F92CA0)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18F92F60)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x18F92FA0)
#define CLASS_1_4F8F63A86CD3F701__CTOR_OFFSET UNITYSDK_OFFSET(0x18F93040)

inline static constexpr unsigned int Class_1_4F8F63A86CD3F701_TypeDefinitionIndex = 69371;

class Class_1_4F8F63A86CD3F701 : public ::System::Object
{
public:
	::UnityEngine::Vector2 Field_1_0; // 0x10
	::UnityEngine::Touch Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x5C
	::System::Boolean Field_1_3; // 0x60
	::System::Boolean Field_1_4; // 0x61
	::UnityEngine::Vector2 Field_1_5; // 0x64
	::System::Single Field_1_6; // 0x6C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7EC693EFA0B59E75(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_7EC693EFA0B59E75_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void Method_1_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_391A84BCD9F51317_1_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_391A84BCD9F51317_2_OFFSET))(this);
	}
};
