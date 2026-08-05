#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0A3761FE34514D6C_1.h"
#include "unitysdk/Enum_3_E85E3B0D04D00533.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }

#define CLASS_3_22FDC730CC26B7BA_CLASS_1_8A35BF39612B0F0F_METHOD_1_1CF694470876332D_OFFSET UNITYSDK_OFFSET(0xF789D80)
#define CLASS_3_22FDC730CC26B7BA_CLASS_1_8A35BF39612B0F0F__CTOR_OFFSET UNITYSDK_OFFSET(0xF789D70)

inline static constexpr unsigned int Class_3_22FDC730CC26B7BA_Class_1_8A35BF39612B0F0F_TypeDefinitionIndex = 74564;

class Class_3_22FDC730CC26B7BA_Class_1_8A35BF39612B0F0F : public ::System::Object
{
public:
	::System::Action* Field_1_5; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18
	::System::Action* Field_1_0; // 0x20
	::System::Int32 Field_1_6; // 0x28
	::Enum_3_0A3761FE34514D6C_1 Field_1_7; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_8A35BF39612B0F0F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1CF694470876332D(::Enum_3_E85E3B0D04D00533 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_E85E3B0D04D00533))((::PBYTE)hIl2Cpp + CLASS_3_22FDC730CC26B7BA_CLASS_1_8A35BF39612B0F0F_METHOD_1_1CF694470876332D_OFFSET))(this, a1);
	}
};
