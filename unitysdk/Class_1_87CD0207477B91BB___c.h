#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/CharacterMeetEventSentence.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define CLASS_1_87CD0207477B91BB___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB212040)
#define CLASS_1_87CD0207477B91BB___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB212080)
#define CLASS_1_87CD0207477B91BB___C___CTOR_B__3_0_OFFSET UNITYSDK_OFFSET(0xB212090)

inline static constexpr unsigned int Class_1_87CD0207477B91BB___c_TypeDefinitionIndex = 69221;

class Class_1_87CD0207477B91BB___c : public ::System::Object
{
public:
	static ::System::Comparison_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>** StaticGet___9__3_0()
	{
		return (::System::Comparison_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87CD0207477B91BB___c_TypeDefinitionIndex)->GetStaticField(0x66D80);
	}
	static ::Class_1_87CD0207477B91BB___c** StaticGet___9()
	{
		return (::Class_1_87CD0207477B91BB___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_87CD0207477B91BB___c_TypeDefinitionIndex)->GetStaticField(0x66D88);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_87CD0207477B91BB___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87CD0207477B91BB___C__CTOR_OFFSET))(this);
	}

	::System::Int32 __ctor_b__3_0(::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence l, ::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence r)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence, ::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence))((::PBYTE)hIl2Cpp + CLASS_1_87CD0207477B91BB___C___CTOR_B__3_0_OFFSET))(this, l, r);
	}
};
