#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_61A5922E5046F385_4;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_ABDB3311926B458C_CLASS_1_163E01D64183BA1C_METHOD_1_8F6CC42C9A35A98E_OFFSET UNITYSDK_OFFSET(0x17736950)
#define CLASS_3_ABDB3311926B458C_CLASS_1_163E01D64183BA1C__CTOR_OFFSET UNITYSDK_OFFSET(0x17736940)

inline static constexpr unsigned int Class_3_ABDB3311926B458C_Class_1_163E01D64183BA1C_TypeDefinitionIndex = 81578;

class Class_3_ABDB3311926B458C_Class_1_163E01D64183BA1C : public ::System::Object
{
public:
	::Class_3_61A5922E5046F385_4* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABDB3311926B458C_CLASS_1_163E01D64183BA1C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8F6CC42C9A35A98E(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_ABDB3311926B458C_CLASS_1_163E01D64183BA1C_METHOD_1_8F6CC42C9A35A98E_OFFSET))(this, a1);
	}
};
