#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_B2EEC16D55B70B34_METHOD_1_E99CC0A8960ECB9F_OFFSET UNITYSDK_OFFSET(0x8954090)
#define CLASS_1_B2EEC16D55B70B34__CTOR_OFFSET UNITYSDK_OFFSET(0x8954140)

inline static constexpr unsigned int Class_1_B2EEC16D55B70B34_TypeDefinitionIndex = 53793;

class Class_1_B2EEC16D55B70B34 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B2EEC16D55B70B34__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_E99CC0A8960ECB9F(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_B2EEC16D55B70B34_METHOD_1_E99CC0A8960ECB9F_OFFSET))(this, a1);
	}
};
