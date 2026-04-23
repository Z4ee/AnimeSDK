#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/CharacterMeetEventSentence.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_87CD0207477B91BB_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xB211F20)
#define CLASS_1_87CD0207477B91BB_METHOD_1_3173F8C7BDE5C6E4_OFFSET UNITYSDK_OFFSET(0xB2118F0)
#define CLASS_1_87CD0207477B91BB_METHOD_1_ECD31FE757D17A58_OFFSET UNITYSDK_OFFSET(0xB211F80)
#define CLASS_1_87CD0207477B91BB__CTOR_OFFSET UNITYSDK_OFFSET(0xB211D80)

inline static constexpr unsigned int Class_1_87CD0207477B91BB_TypeDefinitionIndex = 69220;

class Class_1_87CD0207477B91BB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>*))((::PBYTE)hIl2Cpp + CLASS_1_87CD0207477B91BB__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_87CD0207477B91BB* Method_1_3173F8C7BDE5C6E4(::System::UInt32 a1)
	{
		return ((::Class_1_87CD0207477B91BB*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_87CD0207477B91BB_METHOD_1_3173F8C7BDE5C6E4_OFFSET))(a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87CD0207477B91BB_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence Method_1_ECD31FE757D17A58()
	{
		return ((::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_87CD0207477B91BB_METHOD_1_ECD31FE757D17A58_OFFSET))(this);
	}
};
