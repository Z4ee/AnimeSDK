#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_2_A99F83DAD2431A0F_METHOD_2_EA43393AE02D68B1_OFFSET UNITYSDK_OFFSET(0x1D091810)
#define CLASS_2_A99F83DAD2431A0F__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0919B0)

inline static constexpr unsigned int Class_2_A99F83DAD2431A0F_TypeDefinitionIndex = 22611;

class Class_2_A99F83DAD2431A0F : public ::RPG::GameCore::JsonConfig
{
public:
	::System::String* JGHAOCCGGPD; // 0x10
	::RPG::MVector3 BNGJDBHHMFO; // 0x18
	::System::Single LAJKDIGIBOF; // 0x24
	::RPG::MVector3 PPAEKJBDKAD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A99F83DAD2431A0F__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_2_EA43393AE02D68B1(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_2_A99F83DAD2431A0F*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_2_A99F83DAD2431A0F*&))((::PBYTE)hIl2Cpp + CLASS_2_A99F83DAD2431A0F_METHOD_2_EA43393AE02D68B1_OFFSET))(a1, a2);
	}
};
