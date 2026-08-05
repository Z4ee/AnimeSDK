#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigViewObjectEntityDither; }
namespace System { class Action; }

#define CLASS_1_8F83EEC31E353269_CLASS_1_DAEE7284A5C19AE9_METHOD_1_E824979B64ABBC8F_OFFSET UNITYSDK_OFFSET(0x138B9980)
#define CLASS_1_8F83EEC31E353269_CLASS_1_DAEE7284A5C19AE9__CTOR_OFFSET UNITYSDK_OFFSET(0x138B9970)

inline static constexpr unsigned int Class_1_8F83EEC31E353269_Class_1_DAEE7284A5C19AE9_TypeDefinitionIndex = 86431;

class Class_1_8F83EEC31E353269_Class_1_DAEE7284A5C19AE9 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_CLASS_1_DAEE7284A5C19AE9__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E824979B64ABBC8F(::MoleMole::Config::ConfigViewObjectEntityDither* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigViewObjectEntityDither*))((::PBYTE)hIl2Cpp + CLASS_1_8F83EEC31E353269_CLASS_1_DAEE7284A5C19AE9_METHOD_1_E824979B64ABBC8F_OFFSET))(this, a1);
	}
};
