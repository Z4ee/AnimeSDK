#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/RPG/Client/MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams.h"
#include "unitysdk/RPGTools/Timeline/Emotion/EmoMouthBakedBlendShapes_LipType.h"

namespace RPG::Client { class MonoEmoAnimMouthShapeLayerController; }
namespace RPGTools::Timeline::Emotion { class EmoMouthBakedBlendShapesData; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }

#define CLASS_2_9F14CFB55CC61F60_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B55230)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_0BA368DCED6D0A56_OFFSET UNITYSDK_OFFSET(0x8B55FF0)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8B556D0)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x8B55150)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_602B796CAD5DBEDB_OFFSET UNITYSDK_OFFSET(0x8B55730)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_69C79642B17F54D3_OFFSET UNITYSDK_OFFSET(0x8B55160)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x8B56190)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_9B6DEC35FA10262D_OFFSET UNITYSDK_OFFSET(0x8B553F0)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x8B55300)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_A5FD6FF4A4D69ED8_OFFSET UNITYSDK_OFFSET(0x8B55170)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_B16E7C9CDB65012D_OFFSET UNITYSDK_OFFSET(0x8B55920)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x8B55380)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_D708583EF41CA6B8_OFFSET UNITYSDK_OFFSET(0x8B55610)
#define CLASS_2_9F14CFB55CC61F60_METHOD_2_E1BE71E2F5541313_OFFSET UNITYSDK_OFFSET(0x8B55100)
#define CLASS_2_9F14CFB55CC61F60__CTOR_OFFSET UNITYSDK_OFFSET(0x8B56180)
#define CLASS_2_9F14CFB55CC61F60___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8B56200)

inline static constexpr unsigned int Class_2_9F14CFB55CC61F60_TypeDefinitionIndex = 58281;

class Class_2_9F14CFB55CC61F60 : public ::RPG::Client::BehaviorBase
{
public:
	::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapesData* Field_2_0; // 0x18
	::System::String* Field_2_6; // 0x20
	::System::Boolean Field_2_8; // 0x28
	::System::Single Field_2_3; // 0x2C
	::System::Single Field_2_4; // 0x30
	::System::Single Field_2_5; // 0x34
	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Field_2_7; // 0x38
	::System::Single Field_2_2; // 0x48
	::System::Single Field_2_1; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60__CTOR_OFFSET))(this);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController* Method_2_E1BE71E2F5541313()
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_E1BE71E2F5541313_OFFSET))(this);
	}

	::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_5323F2DF46A044DA_OFFSET))(this);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_69C79642B17F54D3()
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_69C79642B17F54D3_OFFSET))(this);
	}

	::System::Void Method_2_A5FD6FF4A4D69ED8(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_A5FD6FF4A4D69ED8_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_D708583EF41CA6B8(::System::UInt32 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_D708583EF41CA6B8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_9B6DEC35FA10262D(::System::String* a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_9B6DEC35FA10262D_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_602B796CAD5DBEDB(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_602B796CAD5DBEDB_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_0BA368DCED6D0A56(::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType a1)
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID, ::RPGTools::Timeline::Emotion::EmoMouthBakedBlendShapes_LipType))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_0BA368DCED6D0A56_OFFSET))(this, a1);
	}

	::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams Method_2_B16E7C9CDB65012D()
	{
		return ((::RPG::Client::MonoEmoAnimMouthShapeLayerController_AnimMouthShapeParams(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_B16E7C9CDB65012D_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}

	::System::Void __iFixBaseProxy_Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9F14CFB55CC61F60___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
	}
};
