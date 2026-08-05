#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_CEC393DDA7BD65D6.h"
#include "unitysdk/MoleMole/Arcade/BallsRace/BrEntityType.h"
#include "unitysdk/Struct_2_4930D2C214CA4F0A.h"
#include "unitysdk/Struct_2_642E45C6B0A5D00A.h"
#include "unitysdk/Struct_2_98E26EC29C4FAB94.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/Struct_2_FBDDDFB807AE5AF5.h"
#include "unitysdk/System/ValueTuple_3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_88D8B6F46ADD4B5A;
class Class_1_EDECBB3B4D362847;
class Class_3_01B4CC30216C9ABE_1;
class Class_4_6B5E197F92845903;
class Class_4_C3281F1010689A02;
class Class_4_D02C44FA813EDE0B;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine::Rendering::Universal::Internal { class Mach25ObjectInstancing; }

#define CLASS_3_8325972026A2B014_METHOD_3_00CF90939841E387_OFFSET UNITYSDK_OFFSET(0x1E69F580)
#define CLASS_3_8325972026A2B014_METHOD_3_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x1E6A1A00)
#define CLASS_3_8325972026A2B014_METHOD_3_291D7B2E61C2FAEE_OFFSET UNITYSDK_OFFSET(0x1E69E840)
#define CLASS_3_8325972026A2B014_METHOD_3_327B657776861CA3_OFFSET UNITYSDK_OFFSET(0x1E69F070)
#define CLASS_3_8325972026A2B014_METHOD_3_4BD9E95D1AEEBF9B_OFFSET UNITYSDK_OFFSET(0x1E69C4B0)
#define CLASS_3_8325972026A2B014_METHOD_3_51F2B897ACF469BD_OFFSET UNITYSDK_OFFSET(0x1E6A1900)
#define CLASS_3_8325972026A2B014_METHOD_3_5596A39D4479DE72_OFFSET UNITYSDK_OFFSET(0x1E6A1110)
#define CLASS_3_8325972026A2B014_METHOD_3_585F9C6EF5BC90C0_OFFSET UNITYSDK_OFFSET(0x1E69C710)
#define CLASS_3_8325972026A2B014_METHOD_3_6364F169742D5A6D_OFFSET UNITYSDK_OFFSET(0x1E69F380)
#define CLASS_3_8325972026A2B014_METHOD_3_93F1FB7E45D17182_OFFSET UNITYSDK_OFFSET(0x1E69C250)
#define CLASS_3_8325972026A2B014_METHOD_3_96189EDEF38976A6_OFFSET UNITYSDK_OFFSET(0x1E69D3F0)
#define CLASS_3_8325972026A2B014_METHOD_3_9F5FF55B2290E4A4_OFFSET UNITYSDK_OFFSET(0x1E69DD30)
#define CLASS_3_8325972026A2B014_METHOD_3_C10BF158F2861604_OFFSET UNITYSDK_OFFSET(0x1E6A1780)
#define CLASS_3_8325972026A2B014_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1E6A1AA0)
#define CLASS_3_8325972026A2B014_METHOD_3_CC4DC8FB65DC8FF4_OFFSET UNITYSDK_OFFSET(0x1E6A0F00)
#define CLASS_3_8325972026A2B014_METHOD_3_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x1E69C680)
#define CLASS_3_8325972026A2B014_METHOD_3_E9A575D18A0748D9_1_OFFSET UNITYSDK_OFFSET(0x1E6A16F0)
#define CLASS_3_8325972026A2B014_METHOD_3_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x1E6A0E70)
#define CLASS_3_8325972026A2B014__CTOR_OFFSET UNITYSDK_OFFSET(0x1E69EE00)

inline static constexpr unsigned int Class_3_8325972026A2B014_TypeDefinitionIndex = 93403;

class Class_3_8325972026A2B014 : public ::Class_2_CEC393DDA7BD65D6
{
public:
	::Class_3_01B4CC30216C9ABE_1* Field_3_7; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::MoleMole::Arcade::BallsRace::BrEntityType, ::Class_4_C3281F1010689A02*, ::Class_4_D02C44FA813EDE0B*>>*>* Field_3_19; // 0x30
	::Class_1_88D8B6F46ADD4B5A* Field_3_17; // 0x38
	::UnityEngine::Rendering::Universal::Internal::Mach25ObjectInstancing* Field_3_12; // 0x40
	::System::Collections::Generic::List_1<::System::UInt32>* Field_3_11; // 0x48
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* Field_3_18; // 0x50
	::Class_4_D02C44FA813EDE0B* Field_3_15; // 0x58
	::Class_4_D02C44FA813EDE0B* Field_3_6; // 0x60
	::Class_4_6B5E197F92845903* Field_3_0; // 0x68
	::System::UInt64 Field_3_9; // 0x70
	::System::Single Field_3_14; // 0x78
	::System::Single Field_3_8; // 0x7C
	::System::Boolean Field_3_10; // 0x80
	::UnityEngine::Quaternion Field_3_5; // 0x84
	::System::Single Field_3_13; // 0x94
	::Struct_2_E614D3B245F96744_1 Field_3_16; // 0x98
	::System::Single Field_3_4; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_93F1FB7E45D17182(::Class_1_EDECBB3B4D362847* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EDECBB3B4D362847*))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_93F1FB7E45D17182_OFFSET))(this, a1);
	}

	::System::Void Method_3_4BD9E95D1AEEBF9B(::Class_1_EDECBB3B4D362847* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EDECBB3B4D362847*))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_4BD9E95D1AEEBF9B_OFFSET))(this, a1);
	}

	::System::Void Method_3_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_3_585F9C6EF5BC90C0(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_585F9C6EF5BC90C0_OFFSET))(this, a1);
	}

	::System::Void Method_3_327B657776861CA3(::Struct_2_642E45C6B0A5D00A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_642E45C6B0A5D00A))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_327B657776861CA3_OFFSET))(this, a1);
	}

	::System::Single Method_3_6364F169742D5A6D(::UnityEngine::AnimationCurve* a1, ::UnityEngine::AnimationCurve* a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_6364F169742D5A6D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_00CF90939841E387(::Class_4_C3281F1010689A02* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C3281F1010689A02*))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_00CF90939841E387_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9(::Class_1_EDECBB3B4D362847* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EDECBB3B4D362847*))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_3_CC4DC8FB65DC8FF4(::Struct_2_98E26EC29C4FAB94 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_98E26EC29C4FAB94))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_CC4DC8FB65DC8FF4_OFFSET))(this, a1);
	}

	::System::Void Method_3_E9A575D18A0748D9_1(::Class_1_EDECBB3B4D362847* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EDECBB3B4D362847*))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_E9A575D18A0748D9_1_OFFSET))(this, a1);
	}

	::System::Void Method_3_C10BF158F2861604(::Struct_2_4930D2C214CA4F0A a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_4930D2C214CA4F0A))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_C10BF158F2861604_OFFSET))(this, a1);
	}

	::System::Void Method_3_51F2B897ACF469BD(::Struct_2_FBDDDFB807AE5AF5 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FBDDDFB807AE5AF5))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_51F2B897ACF469BD_OFFSET))(this, a1);
	}

	::System::Void Method_3_96189EDEF38976A6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_96189EDEF38976A6_OFFSET))(this);
	}

	::System::Void Method_3_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_3_291D7B2E61C2FAEE(::Class_4_D02C44FA813EDE0B* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D02C44FA813EDE0B*))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_291D7B2E61C2FAEE_OFFSET))(this, a1);
	}

	::System::Void Method_3_5596A39D4479DE72(::Class_4_C3281F1010689A02* a1, ::System::UInt64 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C3281F1010689A02*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_5596A39D4479DE72_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_3_9F5FF55B2290E4A4(::Class_4_C3281F1010689A02* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_C3281F1010689A02*))((::PBYTE)hIl2Cpp + CLASS_3_8325972026A2B014_METHOD_3_9F5FF55B2290E4A4_OFFSET))(this, a1);
	}
};
