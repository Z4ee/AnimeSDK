#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_0781C886C58F298A.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UIVertex.h"

class Class_1_57FDA42592C5189D;
class Class_1_A043D803AC652E6E;
namespace UnityEngine { class Transform; }

#define CLASS_5_49C1B624345C862E_CLONE_OFFSET UNITYSDK_OFFSET(0xBD21400)
#define CLASS_5_49C1B624345C862E_METHOD_5_B87A268AEC4F53B5_OFFSET UNITYSDK_OFFSET(0xBD210B0)
#define CLASS_5_49C1B624345C862E_METHOD_5_E3C126DAE78A3914_OFFSET UNITYSDK_OFFSET(0xBD21510)
#define CLASS_5_49C1B624345C862E_METHOD_5_EE4E72EE9971E0AD_OFFSET UNITYSDK_OFFSET(0xBD20EE0)
#define CLASS_5_49C1B624345C862E_REVERSE_OFFSET UNITYSDK_OFFSET(0xBD214A0)
#define CLASS_5_49C1B624345C862E_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xBD213B0)
#define CLASS_5_49C1B624345C862E__CTOR_OFFSET UNITYSDK_OFFSET(0xBD20E80)

inline static constexpr unsigned int Class_5_49C1B624345C862E_TypeDefinitionIndex = 73453;

class Class_5_49C1B624345C862E : public ::Class_4_0781C886C58F298A
{
public:
	::Il2CppArray<::UnityEngine::Color32>* LINCNIDEHJG; // 0x48

	::System::Void _ctor(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_57FDA42592C5189D*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E__CTOR_OFFSET))(this, a1, a2);
	}

	static ::Class_5_49C1B624345C862E* Method_5_EE4E72EE9971E0AD(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2, ::System::Single a3, ::UnityEngine::Color32 a4, ::UnityEngine::Color32 a5, ::UnityEngine::Color32 a6, ::UnityEngine::Color32 a7)
	{
		return ((::Class_5_49C1B624345C862E*(*)(::Class_1_57FDA42592C5189D*, ::System::UInt32, ::System::Single, ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32, ::UnityEngine::Color32))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_METHOD_5_EE4E72EE9971E0AD_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::Class_5_49C1B624345C862E* Method_5_B87A268AEC4F53B5(::Class_1_57FDA42592C5189D* a1, ::System::UInt32 a2, ::System::Single a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Int32 a9, ::System::Int32 a10, ::System::Int32 a11, ::System::Int32 a12, ::System::Int32 a13, ::System::Int32 a14, ::System::Int32 a15)
	{
		return ((::Class_5_49C1B624345C862E*(*)(::Class_1_57FDA42592C5189D*, ::System::UInt32, ::System::Single, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_METHOD_5_B87A268AEC4F53B5_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
	}

	::System::Void StartWithTarget(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_STARTWITHTARGET_OFFSET))(this, a1);
	}

	::Class_1_A043D803AC652E6E* Clone()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_CLONE_OFFSET))(this);
	}

	::Class_1_A043D803AC652E6E* Reverse()
	{
		return ((::Class_1_A043D803AC652E6E*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_REVERSE_OFFSET))(this);
	}

	::System::Void Method_5_E3C126DAE78A3914(::System::Single a1, ::Il2CppArray<::UnityEngine::UIVertex>*& a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::Il2CppArray<::UnityEngine::UIVertex>*&))((::PBYTE)hIl2Cpp + CLASS_5_49C1B624345C862E_METHOD_5_E3C126DAE78A3914_OFFSET))(this, a1, a2);
	}
};
