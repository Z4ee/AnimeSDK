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

#define CLASS_1_44EC4861006F82B0_METHOD_1_199168491584A33F_OFFSET UNITYSDK_OFFSET(0x18E6D4D0)
#define CLASS_1_44EC4861006F82B0_METHOD_1_57E22D6A7003BF96_OFFSET UNITYSDK_OFFSET(0x18E8F770)
#define CLASS_1_44EC4861006F82B0_METHOD_1_659085B60C5BBBE5_OFFSET UNITYSDK_OFFSET(0x18E69730)
#define CLASS_1_44EC4861006F82B0_METHOD_1_97EBE81F1FDB8257_OFFSET UNITYSDK_OFFSET(0x18E8F800)
#define CLASS_1_44EC4861006F82B0_METHOD_1_C04BD78C1B764E94_OFFSET UNITYSDK_OFFSET(0x18E8F970)
#define CLASS_1_44EC4861006F82B0_METHOD_1_C3BD809808A74DF0_OFFSET UNITYSDK_OFFSET(0x18E8F8E0)
#define CLASS_1_44EC4861006F82B0_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x18E8F7C0)
#define CLASS_1_44EC4861006F82B0_METHOD_1_E8B9C43BD87E9A84_OFFSET UNITYSDK_OFFSET(0x18E620A0)
#define CLASS_1_44EC4861006F82B0_METHOD_1_E99B5347029721B8_OFFSET UNITYSDK_OFFSET(0x18E628C0)
#define CLASS_1_44EC4861006F82B0_METHOD_1_EF48269F439C0951_OFFSET UNITYSDK_OFFSET(0x18E8F870)
#define CLASS_1_44EC4861006F82B0__CTOR_OFFSET UNITYSDK_OFFSET(0x18E8F5D0)

inline static constexpr unsigned int Class_1_44EC4861006F82B0_TypeDefinitionIndex = 39680;

class Class_1_44EC4861006F82B0 : public ::System::Object
{
public:
	::RPG::GameCore::GlobalMarbleSkillConfig* Field_1_0; // 0x10
	::RPG::GameCore::GlobalMarbleAIConfig* Field_1_1; // 0x18
	::RPG::GameCore::GlobalMarbleBuffConfig* Field_1_2; // 0x20
	::RPG::GameCore::MarbleGameConfig* Field_1_3; // 0x28
	::System::UInt32 Field_1_4; // 0x30

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0__CTOR_OFFSET))(this, a1);
	}

	static ::System::UInt32 Method_1_57E22D6A7003BF96(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0_METHOD_1_57E22D6A7003BF96_OFFSET))(a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::RPG::GameCore::MarbleSealRow* Method_1_97EBE81F1FDB8257(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleSealRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0_METHOD_1_97EBE81F1FDB8257_OFFSET))(this, a1);
	}

	::RPG::GameCore::MarbleSealLevelConfigRow* Method_1_E99B5347029721B8(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MarbleSealLevelConfigRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0_METHOD_1_E99B5347029721B8_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*> Method_1_199168491584A33F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleMatchTitleRow*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0_METHOD_1_199168491584A33F_OFFSET))(this);
	}

	::RPG::GameCore::MarblePVPRankConfigRow* Method_1_659085B60C5BBBE5(::RPG::GameCore::MultiPlayerGameMode a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MarblePVPRankConfigRow*(*)(::PVOID, ::RPG::GameCore::MultiPlayerGameMode, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0_METHOD_1_659085B60C5BBBE5_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::MarbleMatchLevelConfigRow* Method_1_EF48269F439C0951(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleMatchLevelConfigRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0_METHOD_1_EF48269F439C0951_OFFSET))(this, a1);
	}

	::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRandomBuffRow*> Method_1_C3BD809808A74DF0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleRandomBuffRow*>(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0_METHOD_1_C3BD809808A74DF0_OFFSET))(this);
	}

	::RPG::GameCore::MarbleBuffConditionRow* Method_1_C04BD78C1B764E94(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleBuffConditionRow*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0_METHOD_1_C04BD78C1B764E94_OFFSET))(this, a1);
	}

	::RPG::GameCore::LittleGameLevelConfig* Method_1_E8B9C43BD87E9A84(::System::String* a1)
	{
		return ((::RPG::GameCore::LittleGameLevelConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_44EC4861006F82B0_METHOD_1_E8B9C43BD87E9A84_OFFSET))(this, a1);
	}
};
