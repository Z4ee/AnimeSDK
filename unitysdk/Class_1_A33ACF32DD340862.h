#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_A33ACF32DD340862_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1363C810)
#define CLASS_1_A33ACF32DD340862_FROMFLX_OFFSET UNITYSDK_OFFSET(0x1363CA90)
#define CLASS_1_A33ACF32DD340862_METHOD_1_0E51239C21E29F50_OFFSET UNITYSDK_OFFSET(0x1363C870)
#define CLASS_1_A33ACF32DD340862_METHOD_1_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x1363CB10)
#define CLASS_1_A33ACF32DD340862__CTOR_OFFSET UNITYSDK_OFFSET(0x1363D0A0)

inline static constexpr unsigned int Class_1_A33ACF32DD340862_TypeDefinitionIndex = 45201;

class Class_1_A33ACF32DD340862 : public ::System::Object
{
public:
	::UnityEngine::Vector3 Field_1_2; // 0x10
	::UnityEngine::Vector3 Field_1_3; // 0x1C
	::System::Single Field_1_0; // 0x28
	::UnityEngine::Vector3 Field_1_1; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A33ACF32DD340862__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A33ACF32DD340862_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_A33ACF32DD340862_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_A33ACF32DD340862_METHOD_1_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0E51239C21E29F50(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A33ACF32DD340862_METHOD_1_0E51239C21E29F50_OFFSET))(this, a1, a2);
	}
};
