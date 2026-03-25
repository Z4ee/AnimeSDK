#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_4F8F63A86CD3F701_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x114DF4E0)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x114DF3B0)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_7EC693EFA0B59E75_OFFSET UNITYSDK_OFFSET(0x114DF320)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x114DF540)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x114DF5E0)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x114DF3A0)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x114DF580)
#define CLASS_1_4F8F63A86CD3F701__CTOR_OFFSET UNITYSDK_OFFSET(0x114DF5F0)

inline static constexpr unsigned int Class_1_4F8F63A86CD3F701_TypeDefinitionIndex = 59550;

class Class_1_4F8F63A86CD3F701 : public ::System::Object
{
public:
	::System::Single Field_1_2; // 0x10
	::UnityEngine::Vector2 Field_1_4; // 0x14
	::System::Boolean Field_1_0; // 0x1C
	::System::Boolean Field_1_1; // 0x1D
	::UnityEngine::Touch Field_1_6; // 0x20
	::System::Single Field_1_3; // 0x64
	::UnityEngine::Vector2 Field_1_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_7EC693EFA0B59E75(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_7EC693EFA0B59E75_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_7033EFB970A18315()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_7033EFB970A18315_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_4F8F63A86CD3F701_METHOD_1_F0088C88851A7DFB_1_OFFSET))(this);
	}
};
