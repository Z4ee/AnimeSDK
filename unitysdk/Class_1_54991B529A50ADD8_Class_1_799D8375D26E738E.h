#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSceneSound; }
namespace System { class Action; }

#define CLASS_1_54991B529A50ADD8_CLASS_1_799D8375D26E738E_METHOD_1_1C45FD56948440C9_OFFSET UNITYSDK_OFFSET(0x18121640)
#define CLASS_1_54991B529A50ADD8_CLASS_1_799D8375D26E738E__CTOR_OFFSET UNITYSDK_OFFSET(0x18121630)

inline static constexpr unsigned int Class_1_54991B529A50ADD8_Class_1_799D8375D26E738E_TypeDefinitionIndex = 54650;

class Class_1_54991B529A50ADD8_Class_1_799D8375D26E738E : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54991B529A50ADD8_CLASS_1_799D8375D26E738E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_1C45FD56948440C9(::MoleMole::Config::ConfigSceneSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSceneSound*))((::PBYTE)hIl2Cpp + CLASS_1_54991B529A50ADD8_CLASS_1_799D8375D26E738E_METHOD_1_1C45FD56948440C9_OFFSET))(this, a1);
	}
};
