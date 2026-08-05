#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class MonoSurfConfig; }
namespace System { class Action; }

#define CLASS_1_F33EBDE1519D7BAD_CLASS_1_059EC0AD7126B37C_METHOD_1_423F811C8A4DD011_OFFSET UNITYSDK_OFFSET(0x11C6A1E0)
#define CLASS_1_F33EBDE1519D7BAD_CLASS_1_059EC0AD7126B37C__CTOR_OFFSET UNITYSDK_OFFSET(0x11C6A1D0)

inline static constexpr unsigned int Class_1_F33EBDE1519D7BAD_Class_1_059EC0AD7126B37C_TypeDefinitionIndex = 55543;

class Class_1_F33EBDE1519D7BAD_Class_1_059EC0AD7126B37C : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F33EBDE1519D7BAD_CLASS_1_059EC0AD7126B37C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_423F811C8A4DD011(::MoleMole::Config::MonoSurfConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::MonoSurfConfig*))((::PBYTE)hIl2Cpp + CLASS_1_F33EBDE1519D7BAD_CLASS_1_059EC0AD7126B37C_METHOD_1_423F811C8A4DD011_OFFSET))(this, a1);
	}
};
