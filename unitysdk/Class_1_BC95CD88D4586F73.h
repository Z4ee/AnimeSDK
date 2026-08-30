#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EventType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_BC95CD88D4586F73_GETEVENTTYPE_OFFSET UNITYSDK_OFFSET(0x158F34C0)
#define CLASS_1_BC95CD88D4586F73_GETSOURCERUNTIMEID_OFFSET UNITYSDK_OFFSET(0x158F3470)
#define CLASS_1_BC95CD88D4586F73__CTOR_OFFSET UNITYSDK_OFFSET(0x158F3460)

inline static constexpr unsigned int Class_1_BC95CD88D4586F73_TypeDefinitionIndex = 56813;

class Class_1_BC95CD88D4586F73 : public ::System::Object
{
public:
	::System::String* IEMJLAKHBJJ; // 0x10
	::System::String* EALNBEBALJM; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73__CTOR_OFFSET))(this, a1, a2);
	}

	::System::UInt32 GetSourceRuntimeID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73_GETSOURCERUNTIMEID_OFFSET))(this);
	}

	::RPG::GameCore::EventType GetEventType()
	{
		return ((::RPG::GameCore::EventType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BC95CD88D4586F73_GETEVENTTYPE_OFFSET))(this);
	}
};
