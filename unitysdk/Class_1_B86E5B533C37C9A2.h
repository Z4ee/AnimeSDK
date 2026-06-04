#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_2_5436AF4270279182;
class Class_3_97041AE90E3B2214;
namespace RPG::Client { class VirtualCursorSimulateTouchActionWrapper; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define CLASS_1_B86E5B533C37C9A2_EXECUTE_OFFSET UNITYSDK_OFFSET(0x137694B0)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_00DC6C482249EA10_OFFSET UNITYSDK_OFFSET(0x137697C0)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_06F38768260E973C_OFFSET UNITYSDK_OFFSET(0x13769530)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1376AE50)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_23F0308C0AC7B833_OFFSET UNITYSDK_OFFSET(0x1376A780)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_49B8153CFD5162A1_OFFSET UNITYSDK_OFFSET(0x1376A5D0)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_5225617AE7948A03_OFFSET UNITYSDK_OFFSET(0x1376A960)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_65DCE21F154236CC_OFFSET UNITYSDK_OFFSET(0x13769F00)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_96FAC2A4E1D5B4D2_1_OFFSET UNITYSDK_OFFSET(0x1376A160)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_96FAC2A4E1D5B4D2_OFFSET UNITYSDK_OFFSET(0x1376A0A0)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_A4F31A90D3DD82B7_1_OFFSET UNITYSDK_OFFSET(0x13769DC0)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_A4F31A90D3DD82B7_OFFSET UNITYSDK_OFFSET(0x13769C80)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_A91086AED8314DB5_OFFSET UNITYSDK_OFFSET(0x13769C30)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_B36FFC55D6D55CBF_OFFSET UNITYSDK_OFFSET(0x1376A630)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_B5C4FD5BAAB2273E_OFFSET UNITYSDK_OFFSET(0x1376AC40)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x1376A700)
#define CLASS_1_B86E5B533C37C9A2_METHOD_1_DC55CFF2DCF45E33_OFFSET UNITYSDK_OFFSET(0x1376A220)
#define CLASS_1_B86E5B533C37C9A2_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x13769B90)
#define CLASS_1_B86E5B533C37C9A2__CTOR_OFFSET UNITYSDK_OFFSET(0x137692F0)

inline static constexpr unsigned int Class_1_B86E5B533C37C9A2_TypeDefinitionIndex = 72298;

class Class_1_B86E5B533C37C9A2 : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0
	// static const ::System::Single Field_1_1; // 0x0
	::Class_3_97041AE90E3B2214* Field_1_2; // 0x10
	::Class_2_5436AF4270279182* Field_1_3; // 0x18
	::Class_2_5436AF4270279182* Field_1_4; // 0x20
	::Class_2_5436AF4270279182* Field_1_5; // 0x28
	::UnityEngine::Vector3 Field_1_6; // 0x30
	::System::Boolean Field_1_7; // 0x3C
	::System::Boolean Field_1_8; // 0x3D
	::System::Single Field_1_9; // 0x40

	::System::Void _ctor(::Class_3_97041AE90E3B2214* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_97041AE90E3B2214*))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2__CTOR_OFFSET))(this, a1);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_EXECUTE_OFFSET))(this);
	}

	::System::Void TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_TEARDOWN_OFFSET))(this);
	}

	::System::Void Method_1_A91086AED8314DB5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_A91086AED8314DB5_OFFSET))(this);
	}

	::System::Void Method_1_06F38768260E973C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_06F38768260E973C_OFFSET))(this);
	}

	::System::Void Method_1_DC55CFF2DCF45E33(::RPG::Client::VirtualCursorSimulateTouchActionWrapper* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::EventSystems::PointerEventData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_DC55CFF2DCF45E33_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_B36FFC55D6D55CBF(::RPG::Client::VirtualCursorSimulateTouchActionWrapper* a1, ::UnityEngine::GameObject* a2, ::UnityEngine::EventSystems::PointerEventData* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::VirtualCursorSimulateTouchActionWrapper*, ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_B36FFC55D6D55CBF_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_00DC6C482249EA10()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_00DC6C482249EA10_OFFSET))(this);
	}

	::System::Boolean Method_1_23F0308C0AC7B833(::System::Boolean a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_23F0308C0AC7B833_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5225617AE7948A03(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_5225617AE7948A03_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_1_B5C4FD5BAAB2273E(::System::Boolean a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_B5C4FD5BAAB2273E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_49B8153CFD5162A1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_49B8153CFD5162A1_OFFSET))(this);
	}

	::Class_2_5436AF4270279182* Method_1_65DCE21F154236CC()
	{
		return ((::Class_2_5436AF4270279182*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_65DCE21F154236CC_OFFSET))(this);
	}

	::System::Void Method_1_96FAC2A4E1D5B4D2(::System::Boolean a1, ::Class_2_5436AF4270279182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_96FAC2A4E1D5B4D2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_96FAC2A4E1D5B4D2_1(::System::Boolean a1, ::Class_2_5436AF4270279182* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_96FAC2A4E1D5B4D2_1_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_A4F31A90D3DD82B7(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_A4F31A90D3DD82B7_OFFSET))(this, a1);
	}

	::System::Void Method_1_A4F31A90D3DD82B7_1(::Class_2_5436AF4270279182* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_5436AF4270279182*))((::PBYTE)hIl2Cpp + CLASS_1_B86E5B533C37C9A2_METHOD_1_A4F31A90D3DD82B7_1_OFFSET))(this, a1);
	}
};
