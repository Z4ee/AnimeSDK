#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_33B9A7974E8DCEC6.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
namespace System { class String; }

#define CLASS_1_09F8159A68C9F1AE_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13351310)
#define CLASS_1_09F8159A68C9F1AE_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13350890)
#define CLASS_1_09F8159A68C9F1AE_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x13350910)
#define CLASS_1_09F8159A68C9F1AE_METHOD_1_74EB498D81D84E74_OFFSET UNITYSDK_OFFSET(0x13351370)
#define CLASS_1_09F8159A68C9F1AE__CTOR_OFFSET UNITYSDK_OFFSET(0x13351740)

inline static constexpr unsigned int Class_1_09F8159A68C9F1AE_TypeDefinitionIndex = 76966;

class Class_1_09F8159A68C9F1AE : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::UnityEngine::Vector3 Field_1_4; // 0x18
	::System::Int32 Field_1_1; // 0x24
	::System::Single Field_1_3; // 0x28
	::UnityEngine::Vector3 Field_1_6; // 0x2C
	::Enum_3_33B9A7974E8DCEC6 Field_1_0; // 0x38
	::UnityEngine::Vector3 Field_1_5; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09F8159A68C9F1AE__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_09F8159A68C9F1AE_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_09F8159A68C9F1AE_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_74EB498D81D84E74(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_09F8159A68C9F1AE_METHOD_1_74EB498D81D84E74_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_09F8159A68C9F1AE_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}
};
