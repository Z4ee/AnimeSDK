#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_684;
class Class_0_16E4307DCC419505_685;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A05AF49AB4C19659_METHOD_1_3F968946B36E9A86_OFFSET UNITYSDK_OFFSET(0xB9EB290)
#define CLASS_1_A05AF49AB4C19659_METHOD_1_89A2ABB611014CDE_OFFSET UNITYSDK_OFFSET(0xB9EB200)
#define CLASS_1_A05AF49AB4C19659_METHOD_1_BBA49FAB086F388D_OFFSET UNITYSDK_OFFSET(0xB9EADA0)
#define CLASS_1_A05AF49AB4C19659_METHOD_1_DCF9815775F379EC_OFFSET UNITYSDK_OFFSET(0xB9EB000)
#define CLASS_1_A05AF49AB4C19659__CTOR_OFFSET UNITYSDK_OFFSET(0xB9EB410)

inline static constexpr unsigned int Class_1_A05AF49AB4C19659_TypeDefinitionIndex = 58477;

class Class_1_A05AF49AB4C19659 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AvatarPropertyType, ::Class_0_16E4307DCC419505_685*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A05AF49AB4C19659__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_BBA49FAB086F388D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A05AF49AB4C19659_METHOD_1_BBA49FAB086F388D_OFFSET))(this);
	}

	::System::Void Method_1_DCF9815775F379EC(::RPG::GameCore::AvatarPropertyType a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_1_A05AF49AB4C19659_METHOD_1_DCF9815775F379EC_OFFSET))(this, a1, a2);
	}

	::Class_0_16E4307DCC419505_684* Method_1_3F968946B36E9A86(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_684*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A05AF49AB4C19659_METHOD_1_3F968946B36E9A86_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_685* Method_1_89A2ABB611014CDE(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::Class_0_16E4307DCC419505_685*(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_A05AF49AB4C19659_METHOD_1_89A2ABB611014CDE_OFFSET))(this, a1);
	}
};
