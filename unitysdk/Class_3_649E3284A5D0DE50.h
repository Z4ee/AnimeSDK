#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"
#include "unitysdk/UnityEngine/Vector3.h"

template <typename T> class Class_4_B51FB35349ACD175;
template <typename T> class Class_4_F91115D9A1F02F5F;

#define CLASS_3_649E3284A5D0DE50_METHOD_3_1EDDF6D2F22116E8_OFFSET UNITYSDK_OFFSET(0xF8D1CD0)
#define CLASS_3_649E3284A5D0DE50_METHOD_3_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xF8D1C00)
#define CLASS_3_649E3284A5D0DE50_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xF8D1F70)
#define CLASS_3_649E3284A5D0DE50__CTOR_OFFSET UNITYSDK_OFFSET(0xF8D1E80)

inline static constexpr unsigned int Class_3_649E3284A5D0DE50_TypeDefinitionIndex = 82900;

class Class_3_649E3284A5D0DE50 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_F91115D9A1F02F5F<::MoleMole::EntityHandle>* Field_3_0; // 0x18
	::Class_4_B51FB35349ACD175<::UnityEngine::Vector3>* Field_3_1; // 0x20

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
