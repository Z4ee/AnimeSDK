#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_370;
class Class_0_16E4307DCC419505_379;

#define CLASS_1_2A31B907A2725B54_METHOD_1_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x138CE980)
#define CLASS_1_2A31B907A2725B54_METHOD_1_1C409C2CC83887DC_OFFSET UNITYSDK_OFFSET(0x138CE4A0)
#define CLASS_1_2A31B907A2725B54_METHOD_1_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x138CE6B0)
#define CLASS_1_2A31B907A2725B54_METHOD_1_49897F2BBAB2E7CE_OFFSET UNITYSDK_OFFSET(0x138CE880)
#define CLASS_1_2A31B907A2725B54_METHOD_1_7786DC814C2FC3BE_OFFSET UNITYSDK_OFFSET(0x138CE6A0)
#define CLASS_1_2A31B907A2725B54_METHOD_1_B732DC7FA82BA621_OFFSET UNITYSDK_OFFSET(0x138CE450)
#define CLASS_1_2A31B907A2725B54__CTOR_OFFSET UNITYSDK_OFFSET(0x138CE2F0)

inline static constexpr unsigned int Class_1_2A31B907A2725B54_TypeDefinitionIndex = 74490;

class Class_1_2A31B907A2725B54 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_370* Field_1_1; // 0x10
	::MoleMole::EntityHandle Field_1_3; // 0x18
	::Class_0_16E4307DCC419505_379* Field_1_2; // 0x28
	::System::UInt32 Field_1_0; // 0x30

	::System::Void _ctor(::Class_0_16E4307DCC419505_370* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_370*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2A31B907A2725B54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1C409C2CC83887DC(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A31B907A2725B54_METHOD_1_1C409C2CC83887DC_OFFSET))(this, a1);
	}

	::System::Void Method_1_7786DC814C2FC3BE(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2A31B907A2725B54_METHOD_1_7786DC814C2FC3BE_OFFSET))(this, a1);
	}

	::System::Void Method_1_B732DC7FA82BA621()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A31B907A2725B54_METHOD_1_B732DC7FA82BA621_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_49897F2BBAB2E7CE(::System::Single a1)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_2A31B907A2725B54_METHOD_1_49897F2BBAB2E7CE_OFFSET))(this, a1);
	}

	::System::Void Method_1_2C95AFAD0256302F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A31B907A2725B54_METHOD_1_2C95AFAD0256302F_OFFSET))(this);
	}

	::System::UInt32 Method_1_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2A31B907A2725B54_METHOD_1_02A3D10A9D535169_OFFSET))(this);
	}
};
