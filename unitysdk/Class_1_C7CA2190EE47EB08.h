#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateEmergentBroadcastConditionType.h"
#include "unitysdk/RPG/GameCore/FateEmergentBroadcastOverrideState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_C7CA2190EE47EB08_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x182279D0)
#define CLASS_1_C7CA2190EE47EB08__CTOR_OFFSET UNITYSDK_OFFSET(0x18227C70)

inline static constexpr unsigned int Class_1_C7CA2190EE47EB08_TypeDefinitionIndex = 10992;

class Class_1_C7CA2190EE47EB08 : public ::System::Object
{
public:
	::System::String* Field_1_2; // 0x10
	::Il2CppArray<::System::String*>* Field_1_5; // 0x18
	::RPG::Client::TextID Field_1_1; // 0x20
	::System::UInt32 Field_1_0; // 0x30
	::RPG::GameCore::FateEmergentBroadcastConditionType Field_1_4; // 0x34
	::RPG::GameCore::FateEmergentBroadcastOverrideState Field_1_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7CA2190EE47EB08__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C7CA2190EE47EB08*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C7CA2190EE47EB08*&))((::PBYTE)hIl2Cpp + CLASS_1_C7CA2190EE47EB08_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
