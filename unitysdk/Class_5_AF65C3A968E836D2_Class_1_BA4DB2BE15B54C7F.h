#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_E9529ED64113E4E9;
class Class_5_AF65C3A968E836D2;
namespace DG::Tweening { class TweenCallback; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_AF65C3A968E836D2_CLASS_1_BA4DB2BE15B54C7F_METHOD_1_8FA611104DFAEE62_OFFSET UNITYSDK_OFFSET(0xE8A9EA0)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_BA4DB2BE15B54C7F_METHOD_1_AC50AFCF33BB0AFB_1_OFFSET UNITYSDK_OFFSET(0xE8AA3F0)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_BA4DB2BE15B54C7F_METHOD_1_AC50AFCF33BB0AFB_OFFSET UNITYSDK_OFFSET(0xE8A9E90)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_BA4DB2BE15B54C7F_METHOD_1_AEF81E862B49EE52_OFFSET UNITYSDK_OFFSET(0xE8A9FC0)
#define CLASS_5_AF65C3A968E836D2_CLASS_1_BA4DB2BE15B54C7F__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A9E80)

inline static constexpr unsigned int Class_5_AF65C3A968E836D2_Class_1_BA4DB2BE15B54C7F_TypeDefinitionIndex = 50873;

class Class_5_AF65C3A968E836D2_Class_1_BA4DB2BE15B54C7F : public ::System::Object
{
public:
	::Class_5_AF65C3A968E836D2* Field_1_1; // 0x10
	::DG::Tweening::TweenCallback* Field_1_6; // 0x18
	::System::Action* Field_1_5; // 0x20
	::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::AnimationCurve*>> Field_1_4; // 0x28
	::System::Single Field_1_2; // 0x40
	::System::Boolean Field_1_3; // 0x44
	::System::Nullable_1<::MoleMole::Vector2Int> Field_1_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_BA4DB2BE15B54C7F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_AC50AFCF33BB0AFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_BA4DB2BE15B54C7F_METHOD_1_AC50AFCF33BB0AFB_OFFSET))(this);
	}

	::System::Void Method_1_AEF81E862B49EE52(::Class_1_E9529ED64113E4E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_BA4DB2BE15B54C7F_METHOD_1_AEF81E862B49EE52_OFFSET))(this, a1);
	}

	::System::Void Method_1_AC50AFCF33BB0AFB_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_BA4DB2BE15B54C7F_METHOD_1_AC50AFCF33BB0AFB_1_OFFSET))(this);
	}

	::System::Void Method_1_8FA611104DFAEE62(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_AF65C3A968E836D2_CLASS_1_BA4DB2BE15B54C7F_METHOD_1_8FA611104DFAEE62_OFFSET))(this, a1);
	}
};
