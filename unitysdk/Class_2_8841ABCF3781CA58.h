#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_55ED6EDB8CF2C74D_Struct_2_CF1754DDA8B382D4.h"
#include "unitysdk/Foundation/SingletonDisposable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_5F780812A1FAD31A;
namespace MoleMole { class UIRigidbody; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_8841ABCF3781CA58_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11AF01D0)
#define CLASS_2_8841ABCF3781CA58_METHOD_2_4EA7AFEE5C6BD954_OFFSET UNITYSDK_OFFSET(0x11AF0690)
#define CLASS_2_8841ABCF3781CA58_METHOD_2_6A874C4C5069B404_OFFSET UNITYSDK_OFFSET(0x11AF1F20)
#define CLASS_2_8841ABCF3781CA58_METHOD_2_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0x11AF0A60)
#define CLASS_2_8841ABCF3781CA58_METHOD_2_9CC1ABFB25B4F978_OFFSET UNITYSDK_OFFSET(0x11AF3500)
#define CLASS_2_8841ABCF3781CA58_METHOD_2_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x11AF3230)
#define CLASS_2_8841ABCF3781CA58_METHOD_2_BB566FDB7154E256_OFFSET UNITYSDK_OFFSET(0x11AF1F70)
#define CLASS_2_8841ABCF3781CA58_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x11AF1D10)
#define CLASS_2_8841ABCF3781CA58_ONCREATE_OFFSET UNITYSDK_OFFSET(0x11AF0060)
#define CLASS_2_8841ABCF3781CA58__CTOR_OFFSET UNITYSDK_OFFSET(0x11AF0500)

inline static constexpr unsigned int Class_2_8841ABCF3781CA58_TypeDefinitionIndex = 79375;

class Class_2_8841ABCF3781CA58 : public ::Foundation::SingletonDisposable_1<::Class_2_8841ABCF3781CA58*>
{
public:
	::Class_1_55ED6EDB8CF2C74D_Struct_2_CF1754DDA8B382D4 Field_2_3; // 0x10
	::System::Collections::Generic::HashSet_1<::System::Int32>* Field_2_0; // 0x20
	::Class_1_5F780812A1FAD31A* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIRigidbody*>* Field_2_1; // 0x30
	::System::Single Field_2_16; // 0x38
	::System::Single Field_2_14; // 0x3C
	::UnityEngine::Quaternion Field_2_6; // 0x40
	::UnityEngine::Vector2 Field_2_13; // 0x50
	::UnityEngine::Quaternion Field_2_5; // 0x58
	::UnityEngine::Vector2 Field_2_12; // 0x68
	::UnityEngine::Vector2 Field_2_7; // 0x70
	::System::Single Field_2_17; // 0x78
	::UnityEngine::Quaternion Field_2_4; // 0x7C
	::System::Single Field_2_18; // 0x8C
	::System::Single Field_2_10; // 0x90
	::UnityEngine::Vector2 Field_2_8; // 0x94
	::UnityEngine::Vector2 Field_2_15; // 0x9C
	::System::Single Field_2_9; // 0xA4
	::System::Single Field_2_11; // 0xA8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8841ABCF3781CA58__CTOR_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8841ABCF3781CA58_ONCREATE_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8841ABCF3781CA58_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_4EA7AFEE5C6BD954(::System::Int32 a1, ::MoleMole::UIRigidbody* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIRigidbody*))((::PBYTE)hIl2Cpp + CLASS_2_8841ABCF3781CA58_METHOD_2_4EA7AFEE5C6BD954_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_6A874C4C5069B404(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_2_8841ABCF3781CA58_METHOD_2_6A874C4C5069B404_OFFSET))(this, a1);
	}

	::System::Void Method_2_BB566FDB7154E256(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8841ABCF3781CA58_METHOD_2_BB566FDB7154E256_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8841ABCF3781CA58_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_9CC1ABFB25B4F978(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_8841ABCF3781CA58_METHOD_2_9CC1ABFB25B4F978_OFFSET))(this, a1);
	}

	::System::Void Method_2_80313B77C31AD02B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8841ABCF3781CA58_METHOD_2_80313B77C31AD02B_OFFSET))(this);
	}

	::System::Void Method_2_A6544B958241856F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8841ABCF3781CA58_METHOD_2_A6544B958241856F_OFFSET))(this);
	}
};
