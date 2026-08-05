#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace System { class Action; }

#define CLASS_1_52C9583DC88D1BB8_CLASS_1_68032D5D10D1BE92_METHOD_1_029FB429D719CA73_OFFSET UNITYSDK_OFFSET(0x13C0D800)
#define CLASS_1_52C9583DC88D1BB8_CLASS_1_68032D5D10D1BE92__CTOR_OFFSET UNITYSDK_OFFSET(0x13C0D7F0)

inline static constexpr unsigned int Class_1_52C9583DC88D1BB8_Class_1_68032D5D10D1BE92_TypeDefinitionIndex = 51424;

class Class_1_52C9583DC88D1BB8_Class_1_68032D5D10D1BE92 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_CLASS_1_68032D5D10D1BE92__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_029FB429D719CA73(::MoleMole::ConfigUICoopTeam3D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D*))((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_CLASS_1_68032D5D10D1BE92_METHOD_1_029FB429D719CA73_OFFSET))(this, a1);
	}
};
