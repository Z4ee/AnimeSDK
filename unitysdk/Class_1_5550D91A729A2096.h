#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"

#define CLASS_1_5550D91A729A2096__CTOR_OFFSET UNITYSDK_OFFSET(0x1709F6E0)

inline static constexpr unsigned int Class_1_5550D91A729A2096_TypeDefinitionIndex = 67076;

class Class_1_5550D91A729A2096 : public ::System::Object
{
public:
	::Il2CppArray<::UnityEngine::Bounds>* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::RPG::Client::TimeSpaceCrisscrossGroupMonoPlugin_TimeSpaceCrisscrossState Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5550D91A729A2096__CTOR_OFFSET))(this);
	}
};
