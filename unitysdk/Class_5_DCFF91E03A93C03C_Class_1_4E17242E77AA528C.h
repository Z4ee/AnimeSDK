#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Vector2Int.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_E9529ED64113E4E9;
class Class_5_DCFF91E03A93C03C;
namespace DG::Tweening { class TweenCallback; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_5_DCFF91E03A93C03C_CLASS_1_4E17242E77AA528C_METHOD_1_6578DBAAEB0DCDD8_1_OFFSET UNITYSDK_OFFSET(0x1256E990)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_4E17242E77AA528C_METHOD_1_6578DBAAEB0DCDD8_OFFSET UNITYSDK_OFFSET(0x1256E860)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_4E17242E77AA528C_METHOD_1_8CC9B876903EC026_OFFSET UNITYSDK_OFFSET(0x1256E870)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_4E17242E77AA528C_METHOD_1_AEF81E862B49EE52_OFFSET UNITYSDK_OFFSET(0x1256E9A0)
#define CLASS_5_DCFF91E03A93C03C_CLASS_1_4E17242E77AA528C__CTOR_OFFSET UNITYSDK_OFFSET(0x1256E850)

inline static constexpr unsigned int Class_5_DCFF91E03A93C03C_Class_1_4E17242E77AA528C_TypeDefinitionIndex = 83220;

class Class_5_DCFF91E03A93C03C_Class_1_4E17242E77AA528C : public ::System::Object
{
public:
	::DG::Tweening::TweenCallback* Field_1_5; // 0x10
	::System::Nullable_1<::System::ValueTuple_2<::System::Single, ::UnityEngine::AnimationCurve*>> Field_1_7; // 0x18
	::System::Action* Field_1_6; // 0x30
	::Class_5_DCFF91E03A93C03C* Field_1_2; // 0x38
	::System::Single Field_1_1; // 0x40
	::System::Boolean Field_1_0; // 0x44
	::System::Nullable_1<::MoleMole::Vector2Int> Field_1_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_4E17242E77AA528C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6578DBAAEB0DCDD8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_4E17242E77AA528C_METHOD_1_6578DBAAEB0DCDD8_OFFSET))(this);
	}

	::System::Void Method_1_6578DBAAEB0DCDD8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_4E17242E77AA528C_METHOD_1_6578DBAAEB0DCDD8_1_OFFSET))(this);
	}

	::System::Void Method_1_AEF81E862B49EE52(::Class_1_E9529ED64113E4E9* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_E9529ED64113E4E9*))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_4E17242E77AA528C_METHOD_1_AEF81E862B49EE52_OFFSET))(this, a1);
	}

	::System::Void Method_1_8CC9B876903EC026(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_5_DCFF91E03A93C03C_CLASS_1_4E17242E77AA528C_METHOD_1_8CC9B876903EC026_OFFSET))(this, a1);
	}
};
