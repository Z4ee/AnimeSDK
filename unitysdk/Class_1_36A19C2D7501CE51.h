#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D09F4FAB9C64FEFA;
class FiveDimRenderingItem;
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class LevelAnchorCoin40Parameter; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_36A19C2D7501CE51_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x13A58580)
#define CLASS_1_36A19C2D7501CE51__CTOR_OFFSET UNITYSDK_OFFSET(0x13A58630)

inline static constexpr unsigned int Class_1_36A19C2D7501CE51_TypeDefinitionIndex = 72707;

class Class_1_36A19C2D7501CE51 : public ::System::Object
{
public:
	::FiveDimRenderingItem* Field_1_0; // 0x10
	::UnityEngine::GameObject* Field_1_1; // 0x18
	::RPG::GameCore::AnchorInfo* Field_1_2; // 0x20
	::RPG::GameCore::LevelAnchorCoin40Parameter* Field_1_3; // 0x28
	::Class_1_D09F4FAB9C64FEFA* Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Single Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36A19C2D7501CE51__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36A19C2D7501CE51_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}
};
