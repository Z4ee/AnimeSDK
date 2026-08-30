#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MainMissionData; }

#define CLASS_1_B28804A0334670E3_METHOD_1_0EA837295AE4519F_OFFSET UNITYSDK_OFFSET(0x1160C880)
#define CLASS_1_B28804A0334670E3_METHOD_1_A675F03C0CC8F7C7_OFFSET UNITYSDK_OFFSET(0x1160C4D0)
#define CLASS_1_B28804A0334670E3_METHOD_1_EAAC1E74F3924EA6_OFFSET UNITYSDK_OFFSET(0x1160C5B0)
#define CLASS_1_B28804A0334670E3__CTOR_OFFSET UNITYSDK_OFFSET(0x1160C9E0)

inline static constexpr unsigned int Class_1_B28804A0334670E3_TypeDefinitionIndex = 66223;

class Class_1_B28804A0334670E3 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B28804A0334670E3__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_A675F03C0CC8F7C7(::RPG::Client::MainMissionData* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MainMissionData*))((::PBYTE)hIl2Cpp + CLASS_1_B28804A0334670E3_METHOD_1_A675F03C0CC8F7C7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_EAAC1E74F3924EA6(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B28804A0334670E3_METHOD_1_EAAC1E74F3924EA6_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_0EA837295AE4519F(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B28804A0334670E3_METHOD_1_0EA837295AE4519F_OFFSET))(this, a1);
	}
};
