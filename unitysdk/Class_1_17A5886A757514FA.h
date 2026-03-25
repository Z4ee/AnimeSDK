#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_D09F4FAB9C64FEFA;
class FiveDimRenderingItem;
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class LevelAnchorCoin40Parameter; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_17A5886A757514FA_METHOD_1_0882BA2CA10E8E8E_OFFSET UNITYSDK_OFFSET(0x99E31C0)
#define CLASS_1_17A5886A757514FA__CTOR_OFFSET UNITYSDK_OFFSET(0x99E3270)

inline static constexpr unsigned int Class_1_17A5886A757514FA_TypeDefinitionIndex = 63640;

class Class_1_17A5886A757514FA : public ::System::Object
{
public:
	::FiveDimRenderingItem* Field_1_1; // 0x10
	::UnityEngine::GameObject* Field_1_0; // 0x18
	::RPG::GameCore::LevelAnchorCoin40Parameter* Field_1_3; // 0x20
	::RPG::GameCore::AnchorInfo* Field_1_2; // 0x28
	::Class_1_D09F4FAB9C64FEFA* Field_1_7; // 0x30
	::System::Single Field_1_5; // 0x38
	::System::Single Field_1_4; // 0x3C
	::System::UInt32 Field_1_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17A5886A757514FA__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_0882BA2CA10E8E8E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17A5886A757514FA_METHOD_1_0882BA2CA10E8E8E_OFFSET))(this);
	}
};
