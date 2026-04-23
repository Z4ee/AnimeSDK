#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define CLASS_1_CE374C9DB9E3FC66_CLEAR_OFFSET UNITYSDK_OFFSET(0x17EB3780)
#define CLASS_1_CE374C9DB9E3FC66_METHOD_1_3C294385BA18792B_OFFSET UNITYSDK_OFFSET(0x17EB37D0)
#define CLASS_1_CE374C9DB9E3FC66_METHOD_1_6B1C82E63C437CF1_OFFSET UNITYSDK_OFFSET(0x17EB3850)
#define CLASS_1_CE374C9DB9E3FC66__CTOR_OFFSET UNITYSDK_OFFSET(0x17EB38C0)

inline static constexpr unsigned int Class_1_CE374C9DB9E3FC66_TypeDefinitionIndex = 39079;

class Class_1_CE374C9DB9E3FC66 : public ::System::Object
{
public:
	::UnityEngine::Bounds Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE374C9DB9E3FC66__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE374C9DB9E3FC66_CLEAR_OFFSET))(this);
	}

	::System::UInt32 Method_1_3C294385BA18792B()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE374C9DB9E3FC66_METHOD_1_3C294385BA18792B_OFFSET))(this);
	}

	::UnityEngine::Bounds Method_1_6B1C82E63C437CF1()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CE374C9DB9E3FC66_METHOD_1_6B1C82E63C437CF1_OFFSET))(this);
	}
};
