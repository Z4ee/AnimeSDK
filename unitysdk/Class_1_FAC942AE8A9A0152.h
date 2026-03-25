#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_FD0368737CBF6F9B_7.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }

#define CLASS_1_FAC942AE8A9A0152_METHOD_1_2172D68048C9C9D5_OFFSET UNITYSDK_OFFSET(0x8BE3430)
#define CLASS_1_FAC942AE8A9A0152_METHOD_1_BF427EFFAD6F483A_OFFSET UNITYSDK_OFFSET(0x8BE33A0)
#define CLASS_1_FAC942AE8A9A0152__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE3390)

inline static constexpr unsigned int Class_1_FAC942AE8A9A0152_TypeDefinitionIndex = 54771;

class Class_1_FAC942AE8A9A0152 : public ::System::Object
{
public:
	::RPG::Client::RogueTournPersonaRoomAttributeData* Field_1_1; // 0x10
	::Struct_2_FD0368737CBF6F9B_7 Field_1_0; // 0x18

	::System::Void _ctor(::Struct_2_FD0368737CBF6F9B_7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FD0368737CBF6F9B_7))((::PBYTE)hIl2Cpp + CLASS_1_FAC942AE8A9A0152__CTOR_OFFSET))(this, a1);
	}

	::System::Object* Method_1_BF427EFFAD6F483A()
	{
		return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAC942AE8A9A0152_METHOD_1_BF427EFFAD6F483A_OFFSET))(this);
	}

	::RPG::Client::RogueTournPersonaRoomAttributeData* Method_1_2172D68048C9C9D5()
	{
		return ((::RPG::Client::RogueTournPersonaRoomAttributeData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_FAC942AE8A9A0152_METHOD_1_2172D68048C9C9D5_OFFSET))(this);
	}
};
