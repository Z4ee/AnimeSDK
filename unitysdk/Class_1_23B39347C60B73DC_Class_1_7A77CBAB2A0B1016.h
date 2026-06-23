#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigRealtimeQTE; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_23B39347C60B73DC_CLASS_1_7A77CBAB2A0B1016_METHOD_1_D58DFB8E3F8A6374_OFFSET UNITYSDK_OFFSET(0x132FD2E0)
#define CLASS_1_23B39347C60B73DC_CLASS_1_7A77CBAB2A0B1016__CTOR_OFFSET UNITYSDK_OFFSET(0x132FD2D0)

inline static constexpr unsigned int Class_1_23B39347C60B73DC_Class_1_7A77CBAB2A0B1016_TypeDefinitionIndex = 81324;

class Class_1_23B39347C60B73DC_Class_1_7A77CBAB2A0B1016 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Config::ConfigRealtimeQTE*>* Field_1_2; // 0x10
	::System::Action* Field_1_1; // 0x18
	::System::Int32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_23B39347C60B73DC_CLASS_1_7A77CBAB2A0B1016__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D58DFB8E3F8A6374(::MoleMole::Config::ConfigRealtimeQTE* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigRealtimeQTE*))((::PBYTE)hIl2Cpp + CLASS_1_23B39347C60B73DC_CLASS_1_7A77CBAB2A0B1016_METHOD_1_D58DFB8E3F8A6374_OFFSET))(this, a1);
	}
};
