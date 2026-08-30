#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_7.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }

#define CLASS_1_FAC942AE8A9A0152_METHOD_1_258410A5439A4E0C_OFFSET UNITYSDK_OFFSET(0x179B7CC0)
#define CLASS_1_FAC942AE8A9A0152_METHOD_1_BF427EFFAD6F483A_OFFSET UNITYSDK_OFFSET(0x179B7C30)
#define CLASS_1_FAC942AE8A9A0152__CTOR_OFFSET UNITYSDK_OFFSET(0x179B7C20)

inline static constexpr unsigned int Class_1_FAC942AE8A9A0152_TypeDefinitionIndex = 67254;

class Class_1_FAC942AE8A9A0152 : public ::System::Object
{
public:
	::RPG::Client::RogueTournPersonaRoomAttributeData* KJIFEBHBEFE; // 0x10
	::Struct_2_FD0368737CBF6F9B_7 LNPLJMDCPEP; // 0x18

	::System::Void _ctor(::Struct_2_FD0368737CBF6F9B_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD0368737CBF6F9B_7))((::PBYTE)hIl2Cpp + CLASS_1_FAC942AE8A9A0152__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_BF427EFFAD6F483A()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAC942AE8A9A0152_METHOD_1_BF427EFFAD6F483A_OFFSET))(this);
	}

	::RPG::Client::RogueTournPersonaRoomAttributeData* Method_1_258410A5439A4E0C()
	{
		return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAC942AE8A9A0152_METHOD_1_258410A5439A4E0C_OFFSET))(this);
	}
};
