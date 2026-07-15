#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_0FEB237AF044DA54.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LogSamplerType.h"
#include "unitysdk/Struct_2_9E453D160BF69F98.h"

namespace System { class String; }

#define CLASS_2_36C03C1C7D9A365D_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x16E34120)
#define CLASS_2_36C03C1C7D9A365D_METHOD_2_7778ABE51AFDB516_OFFSET UNITYSDK_OFFSET(0x16E343F0)
#define CLASS_2_36C03C1C7D9A365D_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16E343B0)
#define CLASS_2_36C03C1C7D9A365D_METHOD_2_D460587695D41831_OFFSET UNITYSDK_OFFSET(0x16E34130)
#define CLASS_2_36C03C1C7D9A365D__CTOR_OFFSET UNITYSDK_OFFSET(0x16E34540)

inline static constexpr unsigned int Class_2_36C03C1C7D9A365D_TypeDefinitionIndex = 53627;

class Class_2_36C03C1C7D9A365D : public ::Class_1_0FEB237AF044DA54
{
public:
	::System::String* Field_2_0; // 0x10
	::Struct_2_9E453D160BF69F98 Field_2_1; // 0x18
	::RPG::GameCore::FixPoint Field_2_2; // 0x30
	::RPG::GameCore::LogSamplerType _Type_k__BackingField; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C03C1C7D9A365D__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::LogSamplerType get_Type()
	{
		return ((::RPG::GameCore::LogSamplerType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C03C1C7D9A365D_GET_TYPE_OFFSET))(this);
	}

	::System::Void Method_2_D460587695D41831()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C03C1C7D9A365D_METHOD_2_D460587695D41831_OFFSET))(this);
	}

	::System::Void Method_2_7778ABE51AFDB516()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C03C1C7D9A365D_METHOD_2_7778ABE51AFDB516_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_36C03C1C7D9A365D_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}
};
