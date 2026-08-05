#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUINewMap; }
namespace System { class Action; }

#define CLASS_1_E0A929115A175CC9_CLASS_1_9717194F0C847EEC_METHOD_1_FE21057537A667CA_OFFSET UNITYSDK_OFFSET(0x115537B0)
#define CLASS_1_E0A929115A175CC9_CLASS_1_9717194F0C847EEC__CTOR_OFFSET UNITYSDK_OFFSET(0x115537A0)

inline static constexpr unsigned int Class_1_E0A929115A175CC9_Class_1_9717194F0C847EEC_TypeDefinitionIndex = 70370;

class Class_1_E0A929115A175CC9_Class_1_9717194F0C847EEC : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E0A929115A175CC9_CLASS_1_9717194F0C847EEC__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FE21057537A667CA(::MoleMole::ConfigUINewMap* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUINewMap*))((::PBYTE)hIl2Cpp + CLASS_1_E0A929115A175CC9_CLASS_1_9717194F0C847EEC_METHOD_1_FE21057537A667CA_OFFSET))(this, a1);
	}
};
