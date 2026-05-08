#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_12.h"
#include "unitysdk/Enum_3_BD22AE0CEC58741C.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_3_22FDC730CC26B7BA_CLASS_1_F684A5D23099942E_METHOD_1_BD8A93D87E0B0418_OFFSET UNITYSDK_OFFSET(0xF946740)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_F684A5D23099942E__CTOR_OFFSET UNITYSDK_OFFSET(0xF946730)

inline static constexpr unsigned int Class_3_22FDC730CC26B7BA_Class_1_F684A5D23099942E_TypeDefinitionIndex = 80510;

class Class_3_22FDC730CC26B7BA_Class_1_F684A5D23099942E : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::MoleMole::Battle::Entity* Field_1_0; // 0x18
	::System::Action* Field_1_4; // 0x20
	::System::Int32 Field_1_3; // 0x28
	::Enum_3_0A3761FE34514D6C_12 Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_F684A5D23099942E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BD8A93D87E0B0418(::Enum_3_BD22AE0CEC58741C a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_BD22AE0CEC58741C))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_F684A5D23099942E_METHOD_1_BD8A93D87E0B0418_OFFSET))(this, a1);
	}
};
