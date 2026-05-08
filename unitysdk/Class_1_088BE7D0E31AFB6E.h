#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class TrafficLightWallConfig;
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_088BE7D0E31AFB6E_METHOD_1_00C6C68A7187F01B_OFFSET UNITYSDK_OFFSET(0x16DFE270)
#define CLASS_1_088BE7D0E31AFB6E_METHOD_1_0E3D8071A5930FA8_1_OFFSET UNITYSDK_OFFSET(0x16DFE4E0)
#define CLASS_1_088BE7D0E31AFB6E_METHOD_1_0E3D8071A5930FA8_OFFSET UNITYSDK_OFFSET(0x16DFDE40)
#define CLASS_1_088BE7D0E31AFB6E_METHOD_1_19D21DC63CFC45D5_OFFSET UNITYSDK_OFFSET(0x16DFEAF0)
#define CLASS_1_088BE7D0E31AFB6E_METHOD_1_7E1BADD1D133FA1C_1_OFFSET UNITYSDK_OFFSET(0x16DFE910)
#define CLASS_1_088BE7D0E31AFB6E_METHOD_1_7E1BADD1D133FA1C_OFFSET UNITYSDK_OFFSET(0x16DFE300)
#define CLASS_1_088BE7D0E31AFB6E_METHOD_1_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x16DFDA40)
#define CLASS_1_088BE7D0E31AFB6E__CTOR_OFFSET UNITYSDK_OFFSET(0x16DFD970)

inline static constexpr unsigned int Class_1_088BE7D0E31AFB6E_TypeDefinitionIndex = 45234;

class Class_1_088BE7D0E31AFB6E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_2; // 0x10
	::TrafficLightWallConfig* Field_1_5; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* Field_1_3; // 0x20
	::TrafficLightWallConfig* Field_1_4; // 0x28
	::System::Int32 Field_1_0; // 0x30
	::System::Int32 Field_1_1; // 0x34

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_088BE7D0E31AFB6E__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_1_9E38127F40B34F1F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088BE7D0E31AFB6E_METHOD_1_9E38127F40B34F1F_OFFSET))(this);
	}

	::System::Void Method_1_0E3D8071A5930FA8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088BE7D0E31AFB6E_METHOD_1_0E3D8071A5930FA8_OFFSET))(this);
	}

	::System::Void Method_1_7E1BADD1D133FA1C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088BE7D0E31AFB6E_METHOD_1_7E1BADD1D133FA1C_OFFSET))(this);
	}

	::System::Void Method_1_0E3D8071A5930FA8_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088BE7D0E31AFB6E_METHOD_1_0E3D8071A5930FA8_1_OFFSET))(this);
	}

	::System::Void Method_1_7E1BADD1D133FA1C_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_088BE7D0E31AFB6E_METHOD_1_7E1BADD1D133FA1C_1_OFFSET))(this);
	}

	::System::Void Method_1_00C6C68A7187F01B(::MoleMole::Battle::Entity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_1_088BE7D0E31AFB6E_METHOD_1_00C6C68A7187F01B_OFFSET))(this, a1);
	}

	::System::Void Method_1_19D21DC63CFC45D5(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_088BE7D0E31AFB6E_METHOD_1_19D21DC63CFC45D5_OFFSET))(this, a1);
	}
};
