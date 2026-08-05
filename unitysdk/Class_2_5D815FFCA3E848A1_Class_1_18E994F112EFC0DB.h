#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MonoGamepadSpaceList; }

#define CLASS_2_5D815FFCA3E848A1_CLASS_1_18E994F112EFC0DB_METHOD_1_C91E5170F9E36EED_OFFSET UNITYSDK_OFFSET(0x16807E70)
#define CLASS_2_5D815FFCA3E848A1_CLASS_1_18E994F112EFC0DB__CTOR_OFFSET UNITYSDK_OFFSET(0x16807E60)

inline static constexpr unsigned int Class_2_5D815FFCA3E848A1_Class_1_18E994F112EFC0DB_TypeDefinitionIndex = 44534;

class Class_2_5D815FFCA3E848A1_Class_1_18E994F112EFC0DB : public ::System::Object
{
public:
	::MoleMole::MonoGamepadSpaceList* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5D815FFCA3E848A1_CLASS_1_18E994F112EFC0DB__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_C91E5170F9E36EED(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_5D815FFCA3E848A1_CLASS_1_18E994F112EFC0DB_METHOD_1_C91E5170F9E36EED_OFFSET))(this, a1);
	}
};
