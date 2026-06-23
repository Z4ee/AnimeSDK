#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_43BD383C98B4C0C5_76;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_58DDBAFC56C73DE5_CLASS_1_803475B4C5C5536F_METHOD_1_24516B096911BF3E_OFFSET UNITYSDK_OFFSET(0x126B90C0)
#define CLASS_3_58DDBAFC56C73DE5_CLASS_1_803475B4C5C5536F__CTOR_OFFSET UNITYSDK_OFFSET(0x126B90B0)

inline static constexpr unsigned int Class_3_58DDBAFC56C73DE5_Class_1_803475B4C5C5536F_TypeDefinitionIndex = 75972;

class Class_3_58DDBAFC56C73DE5_Class_1_803475B4C5C5536F : public ::System::Object
{
public:
	::Class_1_43BD383C98B4C0C5_76* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_CLASS_1_803475B4C5C5536F__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_24516B096911BF3E(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_58DDBAFC56C73DE5_CLASS_1_803475B4C5C5536F_METHOD_1_24516B096911BF3E_OFFSET))(this, a1);
	}
};
