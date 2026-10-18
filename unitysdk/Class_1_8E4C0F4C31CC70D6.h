#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0A051985BE5779B7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_212;
class Class_1_63D18ECF87218619_1;
namespace UnityEngine { class GameObject; }

#define CLASS_1_8E4C0F4C31CC70D6_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA29710)
#define CLASS_1_8E4C0F4C31CC70D6__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA29790)

inline static constexpr unsigned int Class_1_8E4C0F4C31CC70D6_TypeDefinitionIndex = 43195;

class Class_1_8E4C0F4C31CC70D6 : public ::System::Object
{
public:
	::Struct_2_0A051985BE5779B7 NMIOHOIPNKL; // 0x10
	::Class_1_63D18ECF87218619_1* MEALLCOMFFH; // 0x40
	::Class_0_16E4307DCC419505_212* BKCDCIOHEJO; // 0x48
	::UnityEngine::GameObject* HMFEPLJKFBA; // 0x50
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
