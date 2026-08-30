#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DPairState.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

class Class_1_98133438BFCB56ED;

#define CLASS_1_D30B741E780CB2FD_CLEAR_OFFSET UNITYSDK_OFFSET(0x15713520)
#define CLASS_1_D30B741E780CB2FD_METHOD_1_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x15713570)
#define CLASS_1_D30B741E780CB2FD_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x157135D0)
#define CLASS_1_D30B741E780CB2FD__CTOR_OFFSET UNITYSDK_OFFSET(0x15713620)

inline static constexpr unsigned int Class_1_D30B741E780CB2FD_TypeDefinitionIndex = 53890;

class Class_1_D30B741E780CB2FD : public ::System::Object
{
public:
	::Class_1_98133438BFCB56ED* LDLGPNDLDFN; // 0x10
	::Class_1_98133438BFCB56ED* MJPCDKHPGIJ; // 0x18
	::System::UInt64 BAMHHKAPJBG; // 0x20
	::RPG::GameCore::FixVec2 OBADDJMDKIP; // 0x28
	::RPG::GameCore::Collision2DPairState MEPFOEEGBEA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D30B741E780CB2FD__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D30B741E780CB2FD_CLEAR_OFFSET))(this);
	}

	::System::Void Method_1_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D30B741E780CB2FD_METHOD_1_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D30B741E780CB2FD_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}
};
