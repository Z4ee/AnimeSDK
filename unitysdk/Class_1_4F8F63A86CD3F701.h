#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_4F8F63A86CD3F701_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1181E660)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_7033EFB970A18315_OFFSET UNITYSDK_OFFSET(0x1181E530)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_7EC693EFA0B59E75_OFFSET UNITYSDK_OFFSET(0x1181E4A0)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1181E6C0)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_F0088C88851A7DFB_1_OFFSET UNITYSDK_OFFSET(0x1181E760)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x1181E520)
#define CLASS_1_4F8F63A86CD3F701_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x1181E700)
#define CLASS_1_4F8F63A86CD3F701__CTOR_OFFSET UNITYSDK_OFFSET(0x1181E770)

inline static constexpr unsigned int Class_1_4F8F63A86CD3F701_TypeDefinitionIndex = 66945;

class Class_1_4F8F63A86CD3F701 : public ::System::Object
{
public:
	::System::Single Field_1_3; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::System::Boolean Field_1_0; // 0x15
	::UnityEngine::Touch Field_1_6; // 0x18
	::System::Single Field_1_2; // 0x5C
	::UnityEngine::Vector2 Field_1_4; // 0x60
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
