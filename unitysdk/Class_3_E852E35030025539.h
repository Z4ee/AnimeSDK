#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_29439DBE2B63DCF3.h"

template <typename T> class Class_4_B51FB35349ACD175;

#define CLASS_3_E852E35030025539_METHOD_3_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1562EEC0)
#define CLASS_3_E852E35030025539_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1562F220)
#define CLASS_3_E852E35030025539_METHOD_3_FBF8C3E154D7D02B_OFFSET UNITYSDK_OFFSET(0x1562EF50)
#define CLASS_3_E852E35030025539__CTOR_OFFSET UNITYSDK_OFFSET(0x1562F180)

inline static constexpr unsigned int Class_3_E852E35030025539_TypeDefinitionIndex = 64752;

class Class_3_E852E35030025539 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_B51FB35349ACD175<::MoleMole::EntityHandle>* Field_3_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E852E35030025539__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E852E35030025539_METHOD_3_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_3_FBF8C3E154D7D02B(::Struct_2_29439DBE2B63DCF3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_29439DBE2B63DCF3&))((::PBYTE)hIl2Cpp + CLASS_3_E852E35030025539_METHOD_3_FBF8C3E154D7D02B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E852E35030025539_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
