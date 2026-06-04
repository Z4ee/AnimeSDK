#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/CharacterMeetEventSentence.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_E1B52763F52BED2C_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xAB10610)
#define CLASS_1_E1B52763F52BED2C_METHOD_1_62AC1C3E7A474596_OFFSET UNITYSDK_OFFSET(0xAB10670)
#define CLASS_1_E1B52763F52BED2C_METHOD_1_ED03344F6704FBF9_OFFSET UNITYSDK_OFFSET(0xAB0FFB0)
#define CLASS_1_E1B52763F52BED2C__CTOR_OFFSET UNITYSDK_OFFSET(0xAB10440)

inline static constexpr unsigned int Class_1_E1B52763F52BED2C_TypeDefinitionIndex = 70032;

class Class_1_E1B52763F52BED2C : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>* Field_1_0; // 0x10
	::System::Int32 Field_1_1; // 0x18

	::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence>*))((::PBYTE)hIl2Cpp + CLASS_1_E1B52763F52BED2C__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_E1B52763F52BED2C* Method_1_ED03344F6704FBF9(::System::UInt32 a1)
	{
		return ((::Class_1_E1B52763F52BED2C*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E1B52763F52BED2C_METHOD_1_ED03344F6704FBF9_OFFSET))(a1);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B52763F52BED2C_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence Method_1_62AC1C3E7A474596()
	{
		return ((::RPG::Client::ActivityIdleLive::CharacterMeetEventSentence(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E1B52763F52BED2C_METHOD_1_62AC1C3E7A474596_OFFSET))(this);
	}
};
