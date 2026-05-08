#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class FeverConfig; }
namespace System { class Action; }

#define CLASS_1_8E00AA9EEE182AD5_CLASS_1_8A27069159454CEE_METHOD_1_B195E25AAA6F3233_OFFSET UNITYSDK_OFFSET(0x12953980)
#define CLASS_1_8E00AA9EEE182AD5_CLASS_1_8A27069159454CEE__CTOR_OFFSET UNITYSDK_OFFSET(0x12953970)

inline static constexpr unsigned int Class_1_8E00AA9EEE182AD5_Class_1_8A27069159454CEE_TypeDefinitionIndex = 80358;

class Class_1_8E00AA9EEE182AD5_Class_1_8A27069159454CEE : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E00AA9EEE182AD5_CLASS_1_8A27069159454CEE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B195E25AAA6F3233(::MoleMole::FeverConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FeverConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8E00AA9EEE182AD5_CLASS_1_8A27069159454CEE_METHOD_1_B195E25AAA6F3233_OFFSET))(this, a1);
	}
};
