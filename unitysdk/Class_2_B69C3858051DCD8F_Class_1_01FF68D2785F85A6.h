#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_309;
namespace UnityEngine::Events { template <typename T> class UnityAction_1; }

#define CLASS_2_B69C3858051DCD8F_CLASS_1_01FF68D2785F85A6__CTOR_OFFSET UNITYSDK_OFFSET(0x10225840)

inline static constexpr unsigned int Class_2_B69C3858051DCD8F_Class_1_01FF68D2785F85A6_TypeDefinitionIndex = 56354;

class Class_2_B69C3858051DCD8F_Class_1_01FF68D2785F85A6 : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction_1<::System::Boolean>* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_309* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B69C3858051DCD8F_CLASS_1_01FF68D2785F85A6__CTOR_OFFSET))(this);
	}
};
