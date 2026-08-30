#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FateEmergentBroadcastConditionType.h"
#include "unitysdk/RPG/GameCore/FateEmergentBroadcastOverrideState.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define CLASS_1_C7CA2190EE47EB08_METHOD_1_E9A2160FD348DB23_OFFSET UNITYSDK_OFFSET(0x1CB12100)
#define CLASS_1_C7CA2190EE47EB08__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB12390)

inline static constexpr unsigned int Class_1_C7CA2190EE47EB08_TypeDefinitionIndex = 11480;

class Class_1_C7CA2190EE47EB08 : public ::System::Object
{
public:
	::Il2CppArray<::System::String*>* FFCBLPDHCFO; // 0x10
	::System::String* CIMMEBGNABD; // 0x18
	::System::UInt32 PKGJBPODCOG; // 0x20
	::RPG::GameCore::FateEmergentBroadcastOverrideState BCNBKEAJDNG; // 0x24
	::RPG::GameCore::FateEmergentBroadcastConditionType LOAGIPDPLFM; // 0x28
	::RPG::Client::TextID JGAICIJPHNO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C7CA2190EE47EB08__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_1_E9A2160FD348DB23(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_1_C7CA2190EE47EB08*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_1_C7CA2190EE47EB08*&))((::PBYTE)hIl2Cpp + CLASS_1_C7CA2190EE47EB08_METHOD_1_E9A2160FD348DB23_OFFSET))(a1, a2);
	}
};
