#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftAttributeType.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftPartType.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_140;
class Class_0_16E4307DCC419505_141;

#define CLASS_1_A7D9F4180293CF4E_METHOD_1_54459CC072724593_OFFSET UNITYSDK_OFFSET(0xB5E70E0)
#define CLASS_1_A7D9F4180293CF4E_METHOD_1_7C7DF3A7CBB150DE_OFFSET UNITYSDK_OFFSET(0xB5E71A0)
#define CLASS_1_A7D9F4180293CF4E__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E72B0)

inline static constexpr unsigned int Class_1_A7D9F4180293CF4E_TypeDefinitionIndex = 80128;

class Class_1_A7D9F4180293CF4E : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A7D9F4180293CF4E__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_140* Method_1_54459CC072724593(::System::UInt32 a1, ::RPG::Client::MechCraft::MechCraftPartType a2)
	{
		return ((::Class_0_16E4307DCC419505_140*(*)(::PVOID, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + CLASS_1_A7D9F4180293CF4E_METHOD_1_54459CC072724593_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_141* Method_1_7C7DF3A7CBB150DE(::RPG::Client::MechCraft::MechCraftAttributeType a1, ::System::UInt32 a2, ::RPG::Client::MechCraft::MechCraftPartType a3)
	{
		return ((::Class_0_16E4307DCC419505_141*(*)(::PVOID, ::RPG::Client::MechCraft::MechCraftAttributeType, ::System::UInt32, ::RPG::Client::MechCraft::MechCraftPartType))((::PBYTE)hIl2Cpp + CLASS_1_A7D9F4180293CF4E_METHOD_1_7C7DF3A7CBB150DE_OFFSET))(this, a1, a2, a3);
	}
};
