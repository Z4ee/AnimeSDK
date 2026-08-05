#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Touch.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::InputSystem::Controls { class ButtonControl; }

#define CLASS_1_B02B98BD7E3F6FA6_METHOD_1_72668735E82B6508_OFFSET UNITYSDK_OFFSET(0x141B6460)
#define CLASS_1_B02B98BD7E3F6FA6_METHOD_1_797B0DC3D00A8877_1_OFFSET UNITYSDK_OFFSET(0x141B6550)
#define CLASS_1_B02B98BD7E3F6FA6_METHOD_1_797B0DC3D00A8877_2_OFFSET UNITYSDK_OFFSET(0x141B65A0)
#define CLASS_1_B02B98BD7E3F6FA6_METHOD_1_797B0DC3D00A8877_OFFSET UNITYSDK_OFFSET(0x141B63D0)
#define CLASS_1_B02B98BD7E3F6FA6_METHOD_1_7DFB4B9C80198D98_OFFSET UNITYSDK_OFFSET(0x141B6420)
#define CLASS_1_B02B98BD7E3F6FA6_METHOD_1_E43EF5B4D0270B10_OFFSET UNITYSDK_OFFSET(0x141B65F0)
#define CLASS_1_B02B98BD7E3F6FA6_METHOD_1_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x141B6680)

inline static constexpr unsigned int Class_1_B02B98BD7E3F6FA6_TypeDefinitionIndex = 57610;

class Class_1_B02B98BD7E3F6FA6 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_797B0DC3D00A8877(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B02B98BD7E3F6FA6_METHOD_1_797B0DC3D00A8877_OFFSET))(a1);
	}

	static ::UnityEngine::Vector3 Method_1_7DFB4B9C80198D98()
	{
		return ((::UnityEngine::Vector3(*)())((::PBYTE)hIl2Cpp + CLASS_1_B02B98BD7E3F6FA6_METHOD_1_7DFB4B9C80198D98_OFFSET))();
	}

	static ::UnityEngine::Touch Method_1_72668735E82B6508(::System::Int32 a1)
	{
		return ((::UnityEngine::Touch(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B02B98BD7E3F6FA6_METHOD_1_72668735E82B6508_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_797B0DC3D00A8877_1(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B02B98BD7E3F6FA6_METHOD_1_797B0DC3D00A8877_1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_797B0DC3D00A8877_2(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B02B98BD7E3F6FA6_METHOD_1_797B0DC3D00A8877_2_OFFSET))(a1);
	}

	static ::UnityEngine::InputSystem::Controls::ButtonControl* Method_1_E43EF5B4D0270B10(::System::Int32 a1)
	{
		return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B02B98BD7E3F6FA6_METHOD_1_E43EF5B4D0270B10_OFFSET))(a1);
	}

	static ::System::Int32 Method_1_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CLASS_1_B02B98BD7E3F6FA6_METHOD_1_F5599B7DA8E7E53C_OFFSET))();
	}
};
