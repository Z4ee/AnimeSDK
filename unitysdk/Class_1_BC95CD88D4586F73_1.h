#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BC95CD88D4586F73_1_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x8C241C0)
#define CLASS_1_BC95CD88D4586F73_1_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x8C24170)
#define CLASS_1_BC95CD88D4586F73_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8C24160)

inline static constexpr unsigned int Class_1_BC95CD88D4586F73_1_TypeDefinitionIndex = 45533;

class Class_1_BC95CD88D4586F73_1 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73_1_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73_1_GETEVENTTYPE_OFFSET))(this);
	}
};
