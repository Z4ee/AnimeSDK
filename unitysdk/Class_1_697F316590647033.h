#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_3_0D78EA91F90092C6_2;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class String; }

#define CLASS_1_697F316590647033_METHOD_1_68131D32DAC80789_OFFSET UNITYSDK_OFFSET(0x15EDDBB0)
#define CLASS_1_697F316590647033_METHOD_1_C563BDE29D4CE5A5_OFFSET UNITYSDK_OFFSET(0x15EDE660)
#define CLASS_1_697F316590647033__CCTOR_OFFSET UNITYSDK_OFFSET(0x15EDDB70)
#define CLASS_1_697F316590647033__CTOR_OFFSET UNITYSDK_OFFSET(0x15EDDB60)

inline static constexpr unsigned int Class_1_697F316590647033_TypeDefinitionIndex = 43877;

class Class_1_697F316590647033 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_697F316590647033_TypeDefinitionIndex)->GetStaticField(0x3B430);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_697F316590647033__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_697F316590647033__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_68131D32DAC80789(::Class_3_0D78EA91F90092C6_2* a1)
	{
		return ((::System::Void(*)(::Class_3_0D78EA91F90092C6_2*))((::PBYTE)hIl2Cpp + CLASS_1_697F316590647033_METHOD_1_68131D32DAC80789_OFFSET))(a1);
	}

	static ::System::Void Method_1_C563BDE29D4CE5A5(::MoleMole::HollowChessboard::HollowEntity* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::MoleMole::HollowChessboard::HollowEntity*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_697F316590647033_METHOD_1_C563BDE29D4CE5A5_OFFSET))(a1, a2);
	}
};
