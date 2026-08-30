#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0A051985BE5779B7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_138;
class Class_1_63D18ECF87218619_1;
namespace UnityEngine { class GameObject; }

#define CLASS_1_8E4C0F4C31CC70D6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C4B5FD0)
#define CLASS_1_8E4C0F4C31CC70D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4B6050)

inline static constexpr unsigned int Class_1_8E4C0F4C31CC70D6_TypeDefinitionIndex = 41555;

class Class_1_8E4C0F4C31CC70D6 : public ::System::Object
{
public:
	::Class_1_63D18ECF87218619_1* MEALLCOMFFH; // 0x10
	::Class_0_16E4307DCC419505_138* BKCDCIOHEJO; // 0x18
	::UnityEngine::GameObject* HMFEPLJKFBA; // 0x20
	::Struct_2_0A051985BE5779B7 NMIOHOIPNKL; // 0x28
	::System::Boolean LGLHFIKGEAH; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E4C0F4C31CC70D6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E4C0F4C31CC70D6_CLEAR_OFFSET))(this);
	}
};
