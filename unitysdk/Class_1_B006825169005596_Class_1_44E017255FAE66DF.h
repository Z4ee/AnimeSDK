#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Pet/PetSummonStateType.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B006825169005596_CLASS_1_44E017255FAE66DF__CTOR_OFFSET UNITYSDK_OFFSET(0xC295D80)

inline static constexpr unsigned int Class_1_B006825169005596_Class_1_44E017255FAE66DF_TypeDefinitionIndex = 75637;

class Class_1_B006825169005596_Class_1_44E017255FAE66DF : public ::System::Object
{
public:
	::System::String* NKLKAPHGILE; // 0x10
	::System::String* AOKHJKEIGEE; // 0x18
	::System::Boolean NGCEPPGMCJC; // 0x20
	::System::Boolean HPKLKJLBAKH; // 0x21
	::System::Boolean BBHDFDFPCNG; // 0x22
	::RPG::Client::Pet::PetSummonStateType FCGFFAJIBKA; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B006825169005596_CLASS_1_44E017255FAE66DF__CTOR_OFFSET))(this);
	}
};
