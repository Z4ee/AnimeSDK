#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class RelicItemData; }
namespace RPG::Client::RelicSmartSuit { class RelicSmartSuitCalculationResultData; }
namespace RPG::GameCore { class AvatarRelicRecommendRow; }

#define CLASS_1_180D7AE5A90D9AF1_METHOD_1_2EDD5A4482AE20C6_OFFSET UNITYSDK_OFFSET(0x14325BB0)
#define CLASS_1_180D7AE5A90D9AF1_METHOD_1_559942BB18F3537A_OFFSET UNITYSDK_OFFSET(0x143258E0)
#define CLASS_1_180D7AE5A90D9AF1_METHOD_1_60579DB1AF063E8C_OFFSET UNITYSDK_OFFSET(0x14325970)
#define CLASS_1_180D7AE5A90D9AF1_METHOD_1_C51FDF05180E75AF_OFFSET UNITYSDK_OFFSET(0x14325870)
#define CLASS_1_180D7AE5A90D9AF1__CTOR_OFFSET UNITYSDK_OFFSET(0x14325960)

inline static constexpr unsigned int Class_1_180D7AE5A90D9AF1_TypeDefinitionIndex = 62537;

class Class_1_180D7AE5A90D9AF1 : public ::System::Object
{
public:
	::RPG::AvatarSystem::IAvatar* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_180D7AE5A90D9AF1__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::AvatarRelicRecommendRow* Method_1_C51FDF05180E75AF()
	{
		return ((::RPG::GameCore::AvatarRelicRecommendRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_180D7AE5A90D9AF1_METHOD_1_C51FDF05180E75AF_OFFSET))(this);
	}

	static ::Class_1_180D7AE5A90D9AF1* Method_1_559942BB18F3537A(::RPG::AvatarSystem::IAvatar* a1)
	{
		return ((::Class_1_180D7AE5A90D9AF1*(*)(::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + CLASS_1_180D7AE5A90D9AF1_METHOD_1_559942BB18F3537A_OFFSET))(a1);
	}

	::System::UInt32 Method_1_60579DB1AF063E8C(::RPG::Client::RelicItemData* a1)
	{
		return ((::System::UInt32(*)(::PVOID, ::RPG::Client::RelicItemData*))((::PBYTE)hIl2Cpp + CLASS_1_180D7AE5A90D9AF1_METHOD_1_60579DB1AF063E8C_OFFSET))(this, a1);
	}

	::System::Void Method_1_2EDD5A4482AE20C6(::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::RelicSmartSuit::RelicSmartSuitCalculationResultData*))((::PBYTE)hIl2Cpp + CLASS_1_180D7AE5A90D9AF1_METHOD_1_2EDD5A4482AE20C6_OFFSET))(this, a1);
	}
};
