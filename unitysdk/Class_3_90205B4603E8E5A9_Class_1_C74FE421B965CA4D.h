#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_90205B4603E8E5A9_Class_1_99E41AC6CD69E002;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_90205B4603E8E5A9_CLASS_1_C74FE421B965CA4D_METHOD_1_75BD73F8DD02595C_OFFSET UNITYSDK_OFFSET(0x15C88800)
#define CLASS_3_90205B4603E8E5A9_CLASS_1_C74FE421B965CA4D__CTOR_OFFSET UNITYSDK_OFFSET(0x15C887F0)

inline static constexpr unsigned int Class_3_90205B4603E8E5A9_Class_1_C74FE421B965CA4D_TypeDefinitionIndex = 45192;

class Class_3_90205B4603E8E5A9_Class_1_C74FE421B965CA4D : public ::System::Object
{
public:
	::Class_3_90205B4603E8E5A9_Class_1_99E41AC6CD69E002* Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_CLASS_1_C74FE421B965CA4D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_75BD73F8DD02595C(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_3_90205B4603E8E5A9_CLASS_1_C74FE421B965CA4D_METHOD_1_75BD73F8DD02595C_OFFSET))(this, a1);
	}
};
