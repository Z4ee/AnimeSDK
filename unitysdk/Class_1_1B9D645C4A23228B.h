#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_29C0F9DD2D79B68D.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_1B9D645C4A23228B_ISCONTEXTOF_OFFSET UNITYSDK_OFFSET(0x11B09530)
#define CLASS_1_1B9D645C4A23228B_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x11B09520)
#define CLASS_1_1B9D645C4A23228B_METHOD_1_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x11B09590)
#define CLASS_1_1B9D645C4A23228B__CTOR_OFFSET UNITYSDK_OFFSET(0x11B09580)

inline static constexpr unsigned int Class_1_1B9D645C4A23228B_TypeDefinitionIndex = 50489;

class Class_1_1B9D645C4A23228B : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B9D645C4A23228B__CTOR_OFFSET))(this);
	}

	::System::Single Method_1_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1B9D645C4A23228B_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
	}

	::System::Boolean IsContextOf(::Enum_3_29C0F9DD2D79B68D a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_29C0F9DD2D79B68D))((::PBYTE)hIl2Cpp + CLASS_1_1B9D645C4A23228B_ISCONTEXTOF_OFFSET))(this, a1);
	}

	::System::Void Method_1_E7F1AECA7CFF8AAD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1B9D645C4A23228B_METHOD_1_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
	}
};
