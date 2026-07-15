#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_76B6F1FFDCA7B9C1_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x18192510)
#define CLASS_2_76B6F1FFDCA7B9C1_METHOD_2_19B91D58E02869BC_OFFSET UNITYSDK_OFFSET(0x181927C0)
#define CLASS_2_76B6F1FFDCA7B9C1_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18192780)
#define CLASS_2_76B6F1FFDCA7B9C1_METHOD_2_DAEB67F34AF80609_OFFSET UNITYSDK_OFFSET(0x18192520)
#define CLASS_2_76B6F1FFDCA7B9C1__CTOR_OFFSET UNITYSDK_OFFSET(0x181928E0)

inline static constexpr unsigned int Class_2_76B6F1FFDCA7B9C1_TypeDefinitionIndex = 53617;

class Class_2_76B6F1FFDCA7B9C1 : public ::Class_1_0FEB237AF044DA54
{
public:
	::Struct_2_9E453D160BF69F98 Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x28
	::RPG::GameCore::FixPoint Field_2_2; // 0x30
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F1FFDCA7B9C1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F1FFDCA7B9C1_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_DAEB67F34AF80609()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F1FFDCA7B9C1_METHOD_2_DAEB67F34AF80609_OFFSET))(this);
	}

	::System::Void Method_2_19B91D58E02869BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F1FFDCA7B9C1_METHOD_2_19B91D58E02869BC_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_76B6F1FFDCA7B9C1_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
