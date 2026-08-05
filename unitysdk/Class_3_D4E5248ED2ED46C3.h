#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_D4E5248ED2ED46C3_METHOD_3_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x1DE89350)
#define CLASS_3_D4E5248ED2ED46C3_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1DE89750)
#define CLASS_3_D4E5248ED2ED46C3_METHOD_3_D37C77CA65DB1760_OFFSET UNITYSDK_OFFSET(0x1DE89490)
#define CLASS_3_D4E5248ED2ED46C3__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE89630)

inline static constexpr unsigned int Class_3_D4E5248ED2ED46C3_TypeDefinitionIndex = 59593;

class Class_3_D4E5248ED2ED46C3 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_7; // 0x18
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_0; // 0x20
	::Class_4_8D3E479B491881B3<::System::Single>* Field_3_6; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4E5248ED2ED46C3__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4E5248ED2ED46C3_METHOD_3_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_3_D37C77CA65DB1760(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_D4E5248ED2ED46C3_METHOD_3_D37C77CA65DB1760_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_D4E5248ED2ED46C3_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
