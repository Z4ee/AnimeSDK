#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_AEDED6B377F2000F_CLASS_1_E929220755F76B53__CTOR_OFFSET UNITYSDK_OFFSET(0x18A04BB0)

inline static constexpr unsigned int Class_1_AEDED6B377F2000F_Class_1_E929220755F76B53_TypeDefinitionIndex = 34632;

class Class_1_AEDED6B377F2000F_Class_1_E929220755F76B53 : public ::System::Object
{
public:
	::RPG::MVector3 Field_1_0; // 0x10
	::RPG::MVector3 Field_1_1; // 0x1C
	::RPG::MVector3 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AEDED6B377F2000F_CLASS_1_E929220755F76B53__CTOR_OFFSET))(this);
	}
};
