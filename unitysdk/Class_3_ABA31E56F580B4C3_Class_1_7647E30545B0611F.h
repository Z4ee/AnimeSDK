#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_ABA31E56F580B4C3;
namespace MoleMole::Battle { class Entity; }

#define CLASS_3_ABA31E56F580B4C3_CLASS_1_7647E30545B0611F_METHOD_1_289F28027FF47717_OFFSET UNITYSDK_OFFSET(0x18BAAF30)
#define CLASS_3_ABA31E56F580B4C3_CLASS_1_7647E30545B0611F_METHOD_1_3E7178C5ECF017DB_OFFSET UNITYSDK_OFFSET(0x18BAB4B0)
#define CLASS_3_ABA31E56F580B4C3_CLASS_1_7647E30545B0611F_METHOD_1_D57C798061CE0522_OFFSET UNITYSDK_OFFSET(0x18BAB1A0)
#define CLASS_3_ABA31E56F580B4C3_CLASS_1_7647E30545B0611F_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x18BAB500)
#define CLASS_3_ABA31E56F580B4C3_CLASS_1_7647E30545B0611F__CTOR_OFFSET UNITYSDK_OFFSET(0x18BAAF20)

inline static constexpr unsigned int Class_3_ABA31E56F580B4C3_Class_1_7647E30545B0611F_TypeDefinitionIndex = 87074;

class Class_3_ABA31E56F580B4C3_Class_1_7647E30545B0611F : public ::System::Object
{
public:
	::Class_3_ABA31E56F580B4C3* Field_1_5; // 0x10
	::MoleMole::Battle::Entity* Field_1_6; // 0x18
	::System::Single Field_1_1; // 0x20
	::System::Boolean Field_1_7; // 0x24
	::System::Boolean Field_1_0; // 0x25
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_CLASS_1_7647E30545B0611F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_289F28027FF47717()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_CLASS_1_7647E30545B0611F_METHOD_1_289F28027FF47717_OFFSET))(this);
	}

	::System::Void Method_1_D57C798061CE0522(::MoleMole::Battle::Entity* a1, ::System::Int32 a2, ::System::Single a3, ::System::Boolean a4, ::System::Boolean a5, ::Class_3_ABA31E56F580B4C3* a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Int32, ::System::Single, ::System::Boolean, ::System::Boolean, ::Class_3_ABA31E56F580B4C3*))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_CLASS_1_7647E30545B0611F_METHOD_1_D57C798061CE0522_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_3E7178C5ECF017DB(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_CLASS_1_7647E30545B0611F_METHOD_1_3E7178C5ECF017DB_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_ABA31E56F580B4C3_CLASS_1_7647E30545B0611F_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
