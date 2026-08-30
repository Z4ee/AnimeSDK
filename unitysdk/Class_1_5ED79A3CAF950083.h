#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class TrainPartyPerformanceDefineCharacter; }
namespace System { class String; }

#define CLASS_1_5ED79A3CAF950083_METHOD_1_607F02E5155E5898_OFFSET UNITYSDK_OFFSET(0x18F2F8F0)

inline static constexpr unsigned int Class_1_5ED79A3CAF950083_TypeDefinitionIndex = 60345;

class Class_1_5ED79A3CAF950083 : public ::System::Object
{
public:
	static ::System::String* Method_1_607F02E5155E5898(::RPG::GameCore::TrainPartyPerformanceDefineCharacter* a1)
	{
		return ((::System::String*(*)(::RPG::GameCore::TrainPartyPerformanceDefineCharacter*))((::PBYTE)hIl2Cpp + CLASS_1_5ED79A3CAF950083_METHOD_1_607F02E5155E5898_OFFSET))(a1);
	}
};
