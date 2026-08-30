#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_3A0C0BBA21D6C677_METHOD_1_6DDBF29B36122FF8_OFFSET UNITYSDK_OFFSET(0x19FC6590)
#define CLASS_1_3A0C0BBA21D6C677__CTOR_OFFSET UNITYSDK_OFFSET(0x19FC6670)

inline static constexpr unsigned int Class_1_3A0C0BBA21D6C677_TypeDefinitionIndex = 66219;

class Class_1_3A0C0BBA21D6C677 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3A0C0BBA21D6C677__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_6DDBF29B36122FF8(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_3A0C0BBA21D6C677_METHOD_1_6DDBF29B36122FF8_OFFSET))(this, a1);
	}
};
