#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class GlobalDispatchData_ServerData; }
namespace System { class Action; }
namespace System::Collections { class IEnumerator; }

#define CLASS_1_714A2A6E232161AB_METHOD_1_627C7524E98F4AC5_OFFSET UNITYSDK_OFFSET(0x184D95B0)
#define CLASS_1_714A2A6E232161AB__CTOR_OFFSET UNITYSDK_OFFSET(0x184D95A0)

inline static constexpr unsigned int Class_1_714A2A6E232161AB_TypeDefinitionIndex = 69306;

class Class_1_714A2A6E232161AB : public ::System::Object
{
public:
	::System::Action* DPANHIICMLD; // 0x10
	::RPG::Client::GlobalDispatchData_ServerData* APPIHABBCGK; // 0x18
	::System::Single ACEBEKCCMEG; // 0x20

	::System::Void _ctor(::RPG::Client::GlobalDispatchData_ServerData* a1, ::System::Action* a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GlobalDispatchData_ServerData*, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_714A2A6E232161AB__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Collections::IEnumerator* Method_1_627C7524E98F4AC5()
	{
		return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_714A2A6E232161AB_METHOD_1_627C7524E98F4AC5_OFFSET))(this);
	}
};
