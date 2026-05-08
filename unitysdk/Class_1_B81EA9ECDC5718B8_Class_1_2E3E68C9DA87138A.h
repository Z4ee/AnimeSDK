#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUIStoreCamera; }
namespace System { class Action; }

#define CLASS_1_B81EA9ECDC5718B8_CLASS_1_2E3E68C9DA87138A_METHOD_1_CBFD8A62C5FAEC95_OFFSET UNITYSDK_OFFSET(0x139E8860)
#define CLASS_1_B81EA9ECDC5718B8_CLASS_1_2E3E68C9DA87138A__CTOR_OFFSET UNITYSDK_OFFSET(0x139E8850)

inline static constexpr unsigned int Class_1_B81EA9ECDC5718B8_Class_1_2E3E68C9DA87138A_TypeDefinitionIndex = 38968;

class Class_1_B81EA9ECDC5718B8_Class_1_2E3E68C9DA87138A : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B81EA9ECDC5718B8_CLASS_1_2E3E68C9DA87138A__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBFD8A62C5FAEC95(::MoleMole::ConfigUIStoreCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUIStoreCamera*))((::PBYTE)hIl2Cpp + CLASS_1_B81EA9ECDC5718B8_CLASS_1_2E3E68C9DA87138A_METHOD_1_CBFD8A62C5FAEC95_OFFSET))(this, a1);
	}
};
