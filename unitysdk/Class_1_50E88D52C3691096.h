#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_707643DB031BC10E.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_50E88D52C3691096_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1594CC70)
#define CLASS_1_50E88D52C3691096_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1594C840)
#define CLASS_1_50E88D52C3691096_METHOD_1_020D79381203C043_OFFSET UNITYSDK_OFFSET(0x1594CCD0)
#define CLASS_1_50E88D52C3691096_METHOD_1_4BAC7DCFE6BC559A_OFFSET UNITYSDK_OFFSET(0x1594D170)
#define CLASS_1_50E88D52C3691096_METHOD_1_8914C238DEA56287_OFFSET UNITYSDK_OFFSET(0x1594CEE0)
#define CLASS_1_50E88D52C3691096_METHOD_1_B9A9BCA508476E78_OFFSET UNITYSDK_OFFSET(0x1594D0D0)
#define CLASS_1_50E88D52C3691096_METHOD_1_BC82666CCE251586_OFFSET UNITYSDK_OFFSET(0x1594DCA0)
#define CLASS_1_50E88D52C3691096_METHOD_1_DF2A78D8DB25ED05_OFFSET UNITYSDK_OFFSET(0x1594D530)
#define CLASS_1_50E88D52C3691096_METHOD_1_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x1594C8C0)
#define CLASS_1_50E88D52C3691096__CTOR_OFFSET UNITYSDK_OFFSET(0x1594CED0)

inline static constexpr unsigned int Class_1_50E88D52C3691096_TypeDefinitionIndex = 56205;

class Class_1_50E88D52C3691096 : public ::System::Object
{
public:
	::Struct_2_707643DB031BC10E Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x40
	::UnityEngine::Bounds Field_1_3; // 0x48
	::System::Boolean Field_1_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50E88D52C3691096__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_50E88D52C3691096_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_50E88D52C3691096_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_8914C238DEA56287(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_50E88D52C3691096_METHOD_1_8914C238DEA56287_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_B9A9BCA508476E78(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_50E88D52C3691096_METHOD_1_B9A9BCA508476E78_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_020D79381203C043(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_50E88D52C3691096_METHOD_1_020D79381203C043_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_50E88D52C3691096_METHOD_1_DF413489329CBAF8_OFFSET))(this, a1);
	}

	::System::Void Method_1_DF2A78D8DB25ED05()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50E88D52C3691096_METHOD_1_DF2A78D8DB25ED05_OFFSET))(this);
	}

	::System::Boolean Method_1_4BAC7DCFE6BC559A(::UnityEngine::Vector3 a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_50E88D52C3691096_METHOD_1_4BAC7DCFE6BC559A_OFFSET))(this, a1, a2);
	}

	::UnityEngine::Bounds Method_1_BC82666CCE251586()
	{
		return ((::UnityEngine::Bounds(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_50E88D52C3691096_METHOD_1_BC82666CCE251586_OFFSET))(this);
	}
};
