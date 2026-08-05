#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class MarcelConfig; }
namespace System { class Action; }

#define CLASS_1_B2533700DCCB314A_CLASS_1_A7E19CA16009DBCC_METHOD_1_BC1A8D0E5D9058B8_OFFSET UNITYSDK_OFFSET(0x14C6E0A0)
#define CLASS_1_B2533700DCCB314A_CLASS_1_A7E19CA16009DBCC__CTOR_OFFSET UNITYSDK_OFFSET(0x14C6DDB0)

inline static constexpr unsigned int Class_1_B2533700DCCB314A_Class_1_A7E19CA16009DBCC_TypeDefinitionIndex = 90886;

class Class_1_B2533700DCCB314A_Class_1_A7E19CA16009DBCC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_CLASS_1_A7E19CA16009DBCC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BC1A8D0E5D9058B8(::MoleMole::MarcelConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MarcelConfig*))((::PBYTE)hIl2Cpp + CLASS_1_B2533700DCCB314A_CLASS_1_A7E19CA16009DBCC_METHOD_1_BC1A8D0E5D9058B8_OFFSET))(this, a1);
	}
};
