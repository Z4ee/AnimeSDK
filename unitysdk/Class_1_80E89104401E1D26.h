#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_3EEDB4263A2F6FE3;

#define CLASS_1_80E89104401E1D26__CTOR_OFFSET UNITYSDK_OFFSET(0x11EE7D40)

inline static constexpr unsigned int Class_1_80E89104401E1D26_TypeDefinitionIndex = 80664;

class Class_1_80E89104401E1D26 : public ::System::Object
{
public:
	::Il2CppArray<::Class_1_3EEDB4263A2F6FE3*>* PGHEGHLPIDH; // 0x10
	::System::UInt32 EHGGOCGBBLJ; // 0x18
	::RPG::Client::TextID GBCGKDHLIKO; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_80E89104401E1D26__CTOR_OFFSET))(this);
	}
};
