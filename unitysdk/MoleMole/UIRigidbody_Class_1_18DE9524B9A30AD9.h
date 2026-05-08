#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIRigidbody; }

#define MOLEMOLE_UIRIGIDBODY_CLASS_1_18DE9524B9A30AD9_METHOD_1_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x13021AB0)
#define MOLEMOLE_UIRIGIDBODY_CLASS_1_18DE9524B9A30AD9_METHOD_1_CEE772DE95055C01_OFFSET UNITYSDK_OFFSET(0x13021970)
#define MOLEMOLE_UIRIGIDBODY_CLASS_1_18DE9524B9A30AD9__CTOR_OFFSET UNITYSDK_OFFSET(0x13021960)

namespace MoleMole
{
	inline static constexpr unsigned int UIRigidbody_Class_1_18DE9524B9A30AD9_TypeDefinitionIndex = 53988;

	class UIRigidbody_Class_1_18DE9524B9A30AD9 : public ::System::Object
	{
	public:
		::MoleMole::UIRigidbody* Field_1_1; // 0x10
		::System::Single Field_1_0; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_CLASS_1_18DE9524B9A30AD9__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CEE772DE95055C01(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_CLASS_1_18DE9524B9A30AD9_METHOD_1_CEE772DE95055C01_OFFSET))(this, a1);
		}

		::System::Single Method_1_5323F2DF46A044DA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIGIDBODY_CLASS_1_18DE9524B9A30AD9_METHOD_1_5323F2DF46A044DA_OFFSET))(this);
		}
	};
}
