#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUICoopTeam3D; }
namespace System { class Action; }

#define CLASS_1_52C9583DC88D1BB8_CLASS_1_4F26174DE5373233_METHOD_1_CAB09FDDB63B1E48_OFFSET UNITYSDK_OFFSET(0x13BA4B90)
#define CLASS_1_52C9583DC88D1BB8_CLASS_1_4F26174DE5373233__CTOR_OFFSET UNITYSDK_OFFSET(0x13BA4B80)

inline static constexpr unsigned int Class_1_52C9583DC88D1BB8_Class_1_4F26174DE5373233_TypeDefinitionIndex = 40380;

class Class_1_52C9583DC88D1BB8_Class_1_4F26174DE5373233 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_CLASS_1_4F26174DE5373233__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CAB09FDDB63B1E48(::MoleMole::ConfigUICoopTeam3D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUICoopTeam3D*))((::PBYTE)hIl2Cpp + CLASS_1_52C9583DC88D1BB8_CLASS_1_4F26174DE5373233_METHOD_1_CAB09FDDB63B1E48_OFFSET))(this, a1);
	}
};
