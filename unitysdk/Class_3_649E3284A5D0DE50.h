#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_2FF7D360A2F3EC48;
template <typename T> class Class_4_8D3E479B491881B3;

#define CLASS_3_649E3284A5D0DE50_METHOD_3_1EDDF6D2F22116E8_OFFSET UNITYSDK_OFFSET(0x141378E0)
#define CLASS_3_649E3284A5D0DE50_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x14137810)
#define CLASS_3_649E3284A5D0DE50_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x14137B80)
#define CLASS_3_649E3284A5D0DE50__CTOR_OFFSET UNITYSDK_OFFSET(0x14137A90)

inline static constexpr unsigned int Class_3_649E3284A5D0DE50_TypeDefinitionIndex = 67568;

class Class_3_649E3284A5D0DE50 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_8D3E479B491881B3<::UnityEngine::Vector3>* Field_3_0; // 0x18
	::Class_4_2FF7D360A2F3EC48<::MoleMole::EntityHandle>* Field_3_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_649E3284A5D0DE50__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_649E3284A5D0DE50_METHOD_3_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_3_1EDDF6D2F22116E8(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_649E3284A5D0DE50_METHOD_3_1EDDF6D2F22116E8_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_649E3284A5D0DE50_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
