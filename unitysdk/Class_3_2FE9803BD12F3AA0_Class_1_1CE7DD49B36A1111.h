#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_3_2FE9803BD12F3AA0_CLASS_1_1CE7DD49B36A1111_METHOD_1_1B34B4422E8A6FCB_OFFSET UNITYSDK_OFFSET(0x16F5E0B0)
#define CLASS_3_2FE9803BD12F3AA0_CLASS_1_1CE7DD49B36A1111__CTOR_OFFSET UNITYSDK_OFFSET(0x16F5E0A0)

inline static constexpr unsigned int Class_3_2FE9803BD12F3AA0_Class_1_1CE7DD49B36A1111_TypeDefinitionIndex = 67386;

class Class_3_2FE9803BD12F3AA0_Class_1_1CE7DD49B36A1111 : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_CLASS_1_1CE7DD49B36A1111__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1B34B4422E8A6FCB(::Struct_2_C8629618711DF8B3& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + CLASS_3_2FE9803BD12F3AA0_CLASS_1_1CE7DD49B36A1111_METHOD_1_1B34B4422E8A6FCB_OFFSET))(this, a1);
	}
};
