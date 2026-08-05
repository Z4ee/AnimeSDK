#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_342;
class Class_1_E22300CEB8123C9F;
namespace MoleMole::Arcade::BallPit { class BallPitParticleParamOverride; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Rendering::Universal { class TextureSheetRenderer; }

#define CLASS_1_43BD383C98B4C0C5_159__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3ECC80)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_159_TypeDefinitionIndex = 93462;

class Class_1_43BD383C98B4C0C5_159 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E22300CEB8123C9F*>* Field_1_15; // 0x10
	::Il2CppArray<::UnityEngine::ParticleSystem*>* Field_1_13; // 0x18
	::System::String* Field_1_7; // 0x20
	::Class_1_5DA2E7556103D5A3_342* Field_1_0; // 0x28
	::MoleMole::Arcade::BallPit::BallPitParticleParamOverride* Field_1_14; // 0x30
	::UnityEngine::Rendering::Universal::TextureSheetRenderer* Field_1_19; // 0x38
	::UnityEngine::GameObject* Field_1_6; // 0x40
	::System::Int32 Field_1_2; // 0x48
	::System::Int32 Field_1_1; // 0x4C
	::System::UInt32 Field_1_5; // 0x50
	::System::Boolean Field_1_10; // 0x54
	::System::Boolean Field_1_8; // 0x55
	::System::Boolean Field_1_9; // 0x56
	::System::Boolean Field_1_12; // 0x57
	::System::Single Field_1_4; // 0x58
	::System::Single Field_1_11; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_159__CTOR_OFFSET))(this);
	}
};
