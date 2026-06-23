#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigDynamicOverrideWeather; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_9CCB98C808F221F2_CLASS_1_DCF62F7BB426074C_METHOD_1_F0ADEAD3A80B43A2_OFFSET UNITYSDK_OFFSET(0x10A1F070)
#define CLASS_1_9CCB98C808F221F2_CLASS_1_DCF62F7BB426074C__CTOR_OFFSET UNITYSDK_OFFSET(0x10A1F060)

inline static constexpr unsigned int Class_1_9CCB98C808F221F2_Class_1_DCF62F7BB426074C_TypeDefinitionIndex = 75536;

class Class_1_9CCB98C808F221F2_Class_1_DCF62F7BB426074C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::MoleMole::ConfigDynamicOverrideWeather*>* Field_1_0; // 0x10
	::System::Action_1<::MoleMole::ConfigDynamicOverrideWeather*>* Field_1_3; // 0x18
	::System::Action* Field_1_2; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2_CLASS_1_DCF62F7BB426074C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F0ADEAD3A80B43A2(::MoleMole::ConfigDynamicOverrideWeather* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigDynamicOverrideWeather*))((::PBYTE)hIl2Cpp + CLASS_1_9CCB98C808F221F2_CLASS_1_DCF62F7BB426074C_METHOD_1_F0ADEAD3A80B43A2_OFFSET))(this, a1);
	}
};
