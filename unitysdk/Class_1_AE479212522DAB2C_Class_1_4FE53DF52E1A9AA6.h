#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Random; }

#define CLASS_1_AE479212522DAB2C_CLASS_1_4FE53DF52E1A9AA6_METHOD_1_F4CAC87F40326EA1_OFFSET UNITYSDK_OFFSET(0x148AF7D0)
#define CLASS_1_AE479212522DAB2C_CLASS_1_4FE53DF52E1A9AA6__CTOR_OFFSET UNITYSDK_OFFSET(0x148AF7C0)

inline static constexpr unsigned int Class_1_AE479212522DAB2C_Class_1_4FE53DF52E1A9AA6_TypeDefinitionIndex = 40882;

class Class_1_AE479212522DAB2C_Class_1_4FE53DF52E1A9AA6 : public ::System::Object
{
public:
	::System::Random* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_4FE53DF52E1A9AA6__CTOR_OFFSET))(this);
	}

	::System::Int32 Method_1_F4CAC87F40326EA1(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_AE479212522DAB2C_CLASS_1_4FE53DF52E1A9AA6_METHOD_1_F4CAC87F40326EA1_OFFSET))(this, a1);
	}
};
