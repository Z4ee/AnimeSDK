#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5136E14D9202F88B;
class Class_1_867B6CE75953535A;
class Class_2_9850514C0F89B91A;
namespace System { class String; }

#define CLASS_1_95093242787E3D84_EXECUTE_OFFSET UNITYSDK_OFFSET(0x115AA3F0)
#define CLASS_1_95093242787E3D84_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x115AA3B0)
#define CLASS_1_95093242787E3D84_METHOD_1_4918862571C66931_OFFSET UNITYSDK_OFFSET(0x115AAB40)
#define CLASS_1_95093242787E3D84_METHOD_1_600F21A3B717E2D0_OFFSET UNITYSDK_OFFSET(0x115AA9E0)
#define CLASS_1_95093242787E3D84__CTOR_OFFSET UNITYSDK_OFFSET(0x115AA3A0)

inline static constexpr unsigned int Class_1_95093242787E3D84_TypeDefinitionIndex = 61838;

class Class_1_95093242787E3D84 : public ::System::Object
{
public:
	// static const ::System::String* Field_1_2; // 0x0
	::Class_1_867B6CE75953535A* Field_1_0; // 0x10
	::Class_1_5136E14D9202F88B* Field_1_1; // 0x18

	::System::Void _ctor(::Class_1_867B6CE75953535A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_867B6CE75953535A*))((::PBYTE)hIl2Cpp + CLASS_1_95093242787E3D84__CTOR_OFFSET))(this, a1);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95093242787E3D84_INITIALIZE_OFFSET))(this);
	}

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_95093242787E3D84_EXECUTE_OFFSET))(this);
	}

	::System::Void Method_1_600F21A3B717E2D0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_95093242787E3D84_METHOD_1_600F21A3B717E2D0_OFFSET))(this, a1, a2);
	}

	::Class_2_9850514C0F89B91A* Method_1_4918862571C66931(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::Class_2_9850514C0F89B91A*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_95093242787E3D84_METHOD_1_4918862571C66931_OFFSET))(this, a1, a2);
	}
};
