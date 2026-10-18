#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_855;
class Class_0_16E4307DCC419505_856;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A05AF49AB4C19659_METHOD_1_3F968946B36E9A86_OFFSET UNITYSDK_OFFSET(0xCF67430)
#define CLASS_1_A05AF49AB4C19659_METHOD_1_89A2ABB611014CDE_OFFSET UNITYSDK_OFFSET(0xCF673A0)
#define CLASS_1_A05AF49AB4C19659_METHOD_1_CBDC22058B67F0FE_OFFSET UNITYSDK_OFFSET(0xCF66E60)
#define CLASS_1_A05AF49AB4C19659_METHOD_1_DCF9815775F379EC_OFFSET UNITYSDK_OFFSET(0xCF67140)
#define CLASS_1_A05AF49AB4C19659__CTOR_OFFSET UNITYSDK_OFFSET(0xCF675B0)

inline static constexpr unsigned int Class_1_A05AF49AB4C19659_TypeDefinitionIndex = 62510;

class Class_1_A05AF49AB4C19659 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_0_16E4307DCC419505_856*>* IAFNNMFIMOI; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A05AF49AB4C19659__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CBDC22058B67F0FE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A05AF49AB4C19659_METHOD_1_CBDC22058B67F0FE_OFFSET))(this);
	}

	::System::Void Method_1_DCF9815775F379EC(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A05AF49AB4C19659_METHOD_1_DCF9815775F379EC_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_855* Method_1_3F968946B36E9A86(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_855*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A05AF49AB4C19659_METHOD_1_3F968946B36E9A86_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_856* Method_1_89A2ABB611014CDE(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_856*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A05AF49AB4C19659_METHOD_1_89A2ABB611014CDE_OFFSET))(this, a1);
	}
};
