#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/MultiPlayerGameMode.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GlobalMarbleAIConfig; }
namespace RPG::GameCore { class GlobalMarbleBuffConfig; }
namespace RPG::GameCore { class GlobalMarbleSkillConfig; }
namespace RPG::GameCore { class LittleGameLevelConfig; }
namespace RPG::GameCore { class MarbleBuffConditionRow; }
namespace RPG::GameCore { class MarbleGameConfig; }
namespace RPG::GameCore { class MarbleMatchLevelConfigRow; }
namespace RPG::GameCore { class MarbleMatchTitleRow; }
namespace RPG::GameCore { class MarblePVPRankConfigRow; }
namespace RPG::GameCore { class MarbleRandomBuffRow; }
namespace RPG::GameCore { class MarbleSealLevelConfigRow; }
namespace RPG::GameCore { class MarbleSealRow; }
namespace System { class String; }

#define CLASS_1_BAF87BD2507AC54B_METHOD_1_0150F6BA6BF00768_OFFSET UNITYSDK_OFFSET(0x17F62910)
#define CLASS_1_BAF87BD2507AC54B_METHOD_1_0C51D2B043267461_OFFSET UNITYSDK_OFFSET(0x17F94580)
#define CLASS_1_BAF87BD2507AC54B_METHOD_1_199168491584A33F_OFFSET UNITYSDK_OFFSET(0x17F945F0)
#define CLASS_1_BAF87BD2507AC54B_METHOD_1_57E22D6A7003BF96_OFFSET UNITYSDK_OFFSET(0x17F94480)
#define CLASS_1_BAF87BD2507AC54B_METHOD_1_759B501F59F5A6BF_OFFSET UNITYSDK_OFFSET(0x17F94680)
#define CLASS_1_BAF87BD2507AC54B_METHOD_1_AB56F19FCDD94416_OFFSET UNITYSDK_OFFSET(0x17F94510)
#define CLASS_1_BAF87BD2507AC54B_METHOD_1_C3BD809808A74DF0_OFFSET UNITYSDK_OFFSET(0x17F946F0)
#define CLASS_1_BAF87BD2507AC54B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x17F944D0)
#define CLASS_1_BAF87BD2507AC54B_METHOD_1_E7E8DA94299B26FD_OFFSET UNITYSDK_OFFSET(0x17F94780)
#define CLASS_1_BAF87BD2507AC54B_METHOD_1_E8B9C43BD87E9A84_OFFSET UNITYSDK_OFFSET(0x17F947F0)
#define CLASS_1_BAF87BD2507AC54B__CTOR_OFFSET UNITYSDK_OFFSET(0x17F622D0)

inline static constexpr unsigned int Class_1_BAF87BD2507AC54B_TypeDefinitionIndex = 38912;

class Class_1_BAF87BD2507AC54B : public ::System::Object
{
public:
	::RPG::GameCore::GlobalMarbleAIConfig* Field_1_3; // 0x10
	::RPG::GameCore::GlobalMarbleSkillConfig* Field_1_1; // 0x18
	::RPG::GameCore::GlobalMarbleBuffConfig* Field_1_2; // 0x20
	::RPG::GameCore::MarbleGameConfig* Field_1_4; // 0x28
	::System::UInt32 Field_1_0; // 0x30

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B__CTOR_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_57E22D6A7003BF96(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B_METHOD_1_57E22D6A7003BF96_OFFSET))(a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::MarbleSealRow* Method_1_AB56F19FCDD94416(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleSealRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B_METHOD_1_AB56F19FCDD94416_OFFSET))(this, a1);
	}

	::RPG::GameCore::MarbleSealLevelConfigRow* Method_1_0C51D2B043267461(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MarbleSealLevelConfigRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B_METHOD_1_0C51D2B043267461_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*> Method_1_199168491584A33F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B_METHOD_1_199168491584A33F_OFFSET))(this);
	}

	::RPG::GameCore::MarblePVPRankConfigRow* Method_1_759B501F59F5A6BF(::RPG::GameCore::MultiPlayerGameMode a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MarblePVPRankConfigRow*(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B_METHOD_1_759B501F59F5A6BF_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::MarbleMatchLevelConfigRow* Method_1_0150F6BA6BF00768(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleMatchLevelConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B_METHOD_1_0150F6BA6BF00768_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRandomBuffRow*> Method_1_C3BD809808A74DF0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRandomBuffRow*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B_METHOD_1_C3BD809808A74DF0_OFFSET))(this);
	}

	::RPG::GameCore::MarbleBuffConditionRow* Method_1_E7E8DA94299B26FD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleBuffConditionRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B_METHOD_1_E7E8DA94299B26FD_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameLevelConfig* Method_1_E8B9C43BD87E9A84(::System::String* a1)
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BAF87BD2507AC54B_METHOD_1_E8B9C43BD87E9A84_OFFSET))(this, a1);
	}
};
