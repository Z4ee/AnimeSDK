#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_267;
class Class_3_70FF81FD8A684DFF;
class Class_3_757A5862D4BBEE41;
namespace MoleMole::Battle { class Entity; }

#define CLASS_1_778677335B8ADC35_CLASS_1_006A692C714F2F14_METHOD_1_7744894CEC41BF06_OFFSET UNITYSDK_OFFSET(0xF606DE0)
#define CLASS_1_778677335B8ADC35_CLASS_1_006A692C714F2F14_METHOD_1_8DF4953C131A0338_OFFSET UNITYSDK_OFFSET(0xF6065F0)
#define CLASS_1_778677335B8ADC35_CLASS_1_006A692C714F2F14__CTOR_OFFSET UNITYSDK_OFFSET(0xF6065E0)

inline static constexpr unsigned int Class_1_778677335B8ADC35_Class_1_006A692C714F2F14_TypeDefinitionIndex = 77664;

class Class_1_778677335B8ADC35_Class_1_006A692C714F2F14 : public ::System::Object
{
public:
	::Class_3_757A5862D4BBEE41* Field_1_0; // 0x10
	::MoleMole::Battle::Entity* Field_1_1; // 0x18
	::Class_3_70FF81FD8A684DFF* Field_1_2; // 0x20
	::Class_0_16E4307DCC419505_267* Field_1_4; // 0x28
	::UnityEngine::Vector3 Field_1_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_CLASS_1_006A692C714F2F14__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_8DF4953C131A0338(::Class_0_16E4307DCC419505_267* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_267*))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_CLASS_1_006A692C714F2F14_METHOD_1_8DF4953C131A0338_OFFSET))(this, a1);
	}

	::System::Void Method_1_7744894CEC41BF06()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_778677335B8ADC35_CLASS_1_006A692C714F2F14_METHOD_1_7744894CEC41BF06_OFFSET))(this);
	}
};
