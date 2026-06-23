#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D30F5190A88A189E.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;

#define CLASS_1_714AA90574E203E0_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x15CF46C0)
#define CLASS_1_714AA90574E203E0_FROMFLX_OFFSET UNITYSDK_OFFSET(0x15CF4290)
#define CLASS_1_714AA90574E203E0_METHOD_1_1D8C60247E81BA7F_OFFSET UNITYSDK_OFFSET(0x15CF4720)
#define CLASS_1_714AA90574E203E0_METHOD_1_7493FC0605E5A625_OFFSET UNITYSDK_OFFSET(0x15CF4310)
#define CLASS_1_714AA90574E203E0__CTOR_OFFSET UNITYSDK_OFFSET(0x15CF4990)

inline static constexpr unsigned int Class_1_714AA90574E203E0_TypeDefinitionIndex = 62399;

class Class_1_714AA90574E203E0 : public ::System::Object
{
public:
	::Enum_3_D30F5190A88A189E Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714AA90574E203E0__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_714AA90574E203E0_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_714AA90574E203E0_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_1D8C60247E81BA7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_714AA90574E203E0_METHOD_1_1D8C60247E81BA7F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_7493FC0605E5A625(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_714AA90574E203E0_METHOD_1_7493FC0605E5A625_OFFSET))(this, a1);
	}
};
