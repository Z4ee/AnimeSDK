#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigAnimatorShortHashName; }
namespace System { class Action; }

#define CLASS_1_F0613ED5D06BB064_CLASS_1_C81ABADE9654B8DD_METHOD_1_B44EB7C63E6778C0_OFFSET UNITYSDK_OFFSET(0x19F61140)
#define CLASS_1_F0613ED5D06BB064_CLASS_1_C81ABADE9654B8DD__CTOR_OFFSET UNITYSDK_OFFSET(0x19F61130)

inline static constexpr unsigned int Class_1_F0613ED5D06BB064_Class_1_C81ABADE9654B8DD_TypeDefinitionIndex = 47383;

class Class_1_F0613ED5D06BB064_Class_1_C81ABADE9654B8DD : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F0613ED5D06BB064_CLASS_1_C81ABADE9654B8DD__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_B44EB7C63E6778C0(::MoleMole::Config::ConfigAnimatorShortHashName* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigAnimatorShortHashName*))((::PBYTE)hIl2Cpp + CLASS_1_F0613ED5D06BB064_CLASS_1_C81ABADE9654B8DD_METHOD_1_B44EB7C63E6778C0_OFFSET))(this, a1);
	}
};
