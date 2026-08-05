#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_C28A9C2FFBD9548F;
namespace MoleMole::Battle { class Entity; }

#define CLASS_2_C28A9C2FFBD9548F_CLASS_1_F5C283F7A27D7BFE_METHOD_1_8FB78484B1153B35_OFFSET UNITYSDK_OFFSET(0x15904BF0)
#define CLASS_2_C28A9C2FFBD9548F_CLASS_1_F5C283F7A27D7BFE__CTOR_OFFSET UNITYSDK_OFFSET(0x15904BE0)

inline static constexpr unsigned int Class_2_C28A9C2FFBD9548F_Class_1_F5C283F7A27D7BFE_TypeDefinitionIndex = 87847;

class Class_2_C28A9C2FFBD9548F_Class_1_F5C283F7A27D7BFE : public ::System::Object
{
public:
	::Class_2_C28A9C2FFBD9548F* Field_1_1; // 0x10
	::System::Int32 Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_CLASS_1_F5C283F7A27D7BFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8FB78484B1153B35(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_C28A9C2FFBD9548F_CLASS_1_F5C283F7A27D7BFE_METHOD_1_8FB78484B1153B35_OFFSET))(this, a1);
	}
};
