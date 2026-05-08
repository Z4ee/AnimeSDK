#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"

namespace MoleMole::Battle { class Entity; }

#define CLASS_2_91B72B3CAB5F654C_METHOD_2_15C5F59C1B6F1B75_OFFSET UNITYSDK_OFFSET(0x1079CFD0)
#define CLASS_2_91B72B3CAB5F654C_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x1079CEB0)
#define CLASS_2_91B72B3CAB5F654C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1079CF40)
#define CLASS_2_91B72B3CAB5F654C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1079CE30)
#define CLASS_2_91B72B3CAB5F654C__CTOR_OFFSET UNITYSDK_OFFSET(0x1079CEA0)

inline static constexpr unsigned int Class_2_91B72B3CAB5F654C_TypeDefinitionIndex = 43606;

class Class_2_91B72B3CAB5F654C : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x12B; // 0x0
	::MoleMole::Battle::Entity* Field_2_0; // 0x20
	::MoleMole::Battle::Entity* Field_2_1; // 0x28

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_91B72B3CAB5F654C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B72B3CAB5F654C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B72B3CAB5F654C_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_91B72B3CAB5F654C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_15C5F59C1B6F1B75(::MoleMole::Battle::Entity* a1, ::MoleMole::Battle::Entity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + CLASS_2_91B72B3CAB5F654C_METHOD_2_15C5F59C1B6F1B75_OFFSET))(this, a1, a2);
	}
};
