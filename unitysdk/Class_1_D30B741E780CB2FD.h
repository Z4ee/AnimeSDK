#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/Collision2DPairState.h"
#include "unitysdk/RPG/GameCore/FixVec2.h"
#include "unitysdk/System/Object.h"

class Class_1_98133438BFCB56ED;

#define CLASS_1_D30B741E780CB2FD_CLEAR_OFFSET UNITYSDK_OFFSET(0x18B86410)
#define CLASS_1_D30B741E780CB2FD_METHOD_1_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x18B86460)
#define CLASS_1_D30B741E780CB2FD_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x18B864C0)
#define CLASS_1_D30B741E780CB2FD__CTOR_OFFSET UNITYSDK_OFFSET(0x18B86510)

inline static constexpr unsigned int Class_1_D30B741E780CB2FD_TypeDefinitionIndex = 51206;

class Class_1_D30B741E780CB2FD : public ::System::Object
{
public:
	::Class_1_98133438BFCB56ED* Field_1_0; // 0x10
	::Class_1_98133438BFCB56ED* Field_1_1; // 0x18
	::RPG::GameCore::Collision2DPairState Field_1_2; // 0x20
	::RPG::GameCore::FixVec2 Field_1_3; // 0x28
	::System::UInt64 Field_1_4; // 0x38

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
