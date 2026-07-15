#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/CharacterMeetEventSentence.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_E1B52763F52BED2C___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x15055AA0)
#define CLASS_1_E1B52763F52BED2C___C__CTOR_OFFSET UNITYSDK_OFFSET(0x15055AE0)
#define CLASS_1_E1B52763F52BED2C___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0x15055AF0)

inline static constexpr unsigned int Class_1_E1B52763F52BED2C___c_TypeDefinitionIndex = 71556;

class Class_1_E1B52763F52BED2C___c : public ::System::Object
{
public:
	static ::Class_1_E1B52763F52BED2C___c** StaticGet___9()
	{
		return (::Class_1_E1B52763F52BED2C___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1B52763F52BED2C___c_TypeDefinitionIndex)->GetStaticField(0x68DC0);
	}
	static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E1B52763F52BED2C___c_TypeDefinitionIndex)->GetStaticField(0x68DC8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E1B52763F52BED2C___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B52763F52BED2C___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__3_0(::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence a1, ::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence, ::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence))((::PBYTE)hIl2Cpp + CLASS_1_E1B52763F52BED2C___C___CTOR_B__3_0_OFFSET))(this, a1, a2);
	}
};
