#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoMouthBakedBlendShapes_LipType.h"

namespace RPG::Client { class MonoEmoAnimMouthShapeLayerController; }
namespace RPGTools::Timeline::Emotion { class EmoMouthBakedBlendShapesData; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_3DAAD14FD5AAF8C2_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA6C610)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_060F49243079A0A4_OFFSET UNITYSDK_OFFSET(0xBA6CD80)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_0AD139A96804E15E_OFFSET UNITYSDK_OFFSET(0xBA6CB80)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_0BA368DCED6D0A56_OFFSET UNITYSDK_OFFSET(0xBA6D3E0)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_19B6311C06D9EFFF_OFFSET UNITYSDK_OFFSET(0xBA6C540)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xBA6CB20)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0xBA6C520)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_69C79642B17F54D3_OFFSET UNITYSDK_OFFSET(0xBA6C530)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_7ED7C72D44E59F07_OFFSET UNITYSDK_OFFSET(0xBA6C7E0)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xBA6C6F0)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0xBA6C770)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_D4D972BF7EE430F8_OFFSET UNITYSDK_OFFSET(0xBA6C4D0)
#define CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_F9C6E2E39DD5763D_OFFSET UNITYSDK_OFFSET(0xBA6CA50)
#define CLASS_2_3DAAD14FD5AAF8C2__CTOR_OFFSET UNITYSDK_OFFSET(0xBA6D580)

inline static constexpr unsigned int Class_2_3DAAD14FD5AAF8C2_TypeDefinitionIndex = 71111;

class Class_2_3DAAD14FD5AAF8C2 : public ::RPG::Client::BehaviorBase
{
public:
	::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapesData* AMMBPPIHFBM; // 0x18
	::System::String* GPMCKOJDADG; // 0x20
	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams GKEODJGEDMB; // 0x28
	::System::Single GHHNHNKAIBK; // 0x38
	::System::Single HFJJFMBPDFD; // 0x3C
	::System::Single DDPJNLAFNAN; // 0x40
	::System::Boolean GMOBMDCCOOF; // 0x44
	::System::Boolean OFEPHLEKKCD; // 0x45
	::System::Single FDICGAEIANB; // 0x48
	::System::Single AKGLAFOODBA; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2__CTOR_OFFSET))(this);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController* Method_2_D4D972BF7EE430F8()
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_D4D972BF7EE430F8_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_69C79642B17F54D3()
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_69C79642B17F54D3_OFFSET))(this);
	}

	::System::Void Method_2_19B6311C06D9EFFF(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_19B6311C06D9EFFF_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_F9C6E2E39DD5763D(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_F9C6E2E39DD5763D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_7ED7C72D44E59F07(::System::String* a1, ::System::Boolean a2, ::System::Single a3, ::System::Single a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_7ED7C72D44E59F07_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_0AD139A96804E15E(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_0AD139A96804E15E_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_0BA368DCED6D0A56(::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType a1)
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_0BA368DCED6D0A56_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_060F49243079A0A4()
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3DAAD14FD5AAF8C2_METHOD_2_060F49243079A0A4_OFFSET))(this);
	}
};
