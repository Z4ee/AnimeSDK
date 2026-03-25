#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_0A051985BE5779B7.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_119;
class Class_1_63D18ECF87218619_1;
namespace UnityEngine { class GameObject; }

#define CLASS_1_8E4C0F4C31CC70D6_CLEAR_OFFSET UNITYSDK_OFFSET(0x167EC060)
#define CLASS_1_8E4C0F4C31CC70D6__CTOR_OFFSET UNITYSDK_OFFSET(0x167EC0E0)

inline static constexpr unsigned int Class_1_8E4C0F4C31CC70D6_TypeDefinitionIndex = 33250;

class Class_1_8E4C0F4C31CC70D6 : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_119* Field_1_3; // 0x18
	::Class_1_63D18ECF87218619_1* Field_1_2; // 0x20
	::Struct_2_0A051985BE5779B7 Field_1_4; // 0x28
	::System::Boolean Field_1_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E4C0F4C31CC70D6__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8E4C0F4C31CC70D6_CLEAR_OFFSET))(this);
	}
};
