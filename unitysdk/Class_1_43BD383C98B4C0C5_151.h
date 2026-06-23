#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_5DA2E7556103D5A3_22;
class Class_1_E22300CEB8123C9F;
namespace MoleMole::Arcade::BallPit { class BallPitParticleParamOverride; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine::Rendering::Universal { class TextureSheetRenderer; }

#define CLASS_1_43BD383C98B4C0C5_151__CTOR_OFFSET UNITYSDK_OFFSET(0x1E58DF30)

inline static constexpr unsigned int Class_1_43BD383C98B4C0C5_151_TypeDefinitionIndex = 89373;

class Class_1_43BD383C98B4C0C5_151 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_E22300CEB8123C9F*>* Field_1_11; // 0x10
	::UnityEngine::GameObject* Field_1_4; // 0x18
	::Il2CppArray<::UnityEngine::ParticleSystem*>* Field_1_13; // 0x20
	::MoleMole::Arcade::BallPit::BallPitParticleParamOverride* Field_1_12; // 0x28
	::System::String* Field_1_3; // 0x30
	::UnityEngine::Rendering::Universal::TextureSheetRenderer* Field_1_15; // 0x38
	::Class_1_5DA2E7556103D5A3_22* Field_1_2; // 0x40
	::System::Single Field_1_7; // 0x48
	::System::UInt32 Field_1_5; // 0x4C
	::System::Boolean Field_1_8; // 0x50
	::System::Boolean Field_1_14; // 0x51
	::System::Boolean Field_1_9; // 0x52
	::System::Boolean Field_1_10; // 0x53
	::System::Int32 Field_1_1; // 0x54
	::System::Single Field_1_6; // 0x58
	::System::Int32 Field_1_0; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_43BD383C98B4C0C5_151__CTOR_OFFSET))(this);
	}
};
