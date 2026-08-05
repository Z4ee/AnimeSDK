#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FeverConfig; }
namespace System { class Action; }

#define CLASS_1_8E00AA9EEE182AD5_CLASS_1_73765E3A2FC114D8_METHOD_1_D7F0F891A7EBFF6E_OFFSET UNITYSDK_OFFSET(0x17E9EF60)
#define CLASS_1_8E00AA9EEE182AD5_CLASS_1_73765E3A2FC114D8__CTOR_OFFSET UNITYSDK_OFFSET(0x17E9EF50)

inline static constexpr unsigned int Class_1_8E00AA9EEE182AD5_Class_1_73765E3A2FC114D8_TypeDefinitionIndex = 80777;

class Class_1_8E00AA9EEE182AD5_Class_1_73765E3A2FC114D8 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E00AA9EEE182AD5_CLASS_1_73765E3A2FC114D8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D7F0F891A7EBFF6E(::MoleMole::FeverConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FeverConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8E00AA9EEE182AD5_CLASS_1_73765E3A2FC114D8_METHOD_1_D7F0F891A7EBFF6E_OFFSET))(this, a1);
	}
};
