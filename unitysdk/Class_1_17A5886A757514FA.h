#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A73E0FAF46E3085E;
class FiveDimRenderingItem;
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class LevelAnchorCoin40Parameter; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_17A5886A757514FA_METHOD_1_0882BA2CA10E8E8E_OFFSET UNITYSDK_OFFSET(0x16E83F10)
#define CLASS_1_17A5886A757514FA__CTOR_OFFSET UNITYSDK_OFFSET(0x16E83FC0)

inline static constexpr unsigned int Class_1_17A5886A757514FA_TypeDefinitionIndex = 74232;

class Class_1_17A5886A757514FA : public ::System::Object
{
public:
	::RPG::GameCore::AnchorInfo* Field_1_0; // 0x10
	::RPG::GameCore::LevelAnchorCoin40Parameter* Field_1_1; // 0x18
	::Class_1_A73E0FAF46E3085E* Field_1_2; // 0x20
	::FiveDimRenderingItem* Field_1_3; // 0x28
	::UnityEngine::GameObject* Field_1_4; // 0x30
	::System::UInt32 Field_1_5; // 0x38
	::System::Single Field_1_6; // 0x3C
	::System::Single Field_1_7; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17A5886A757514FA__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_0882BA2CA10E8E8E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17A5886A757514FA_METHOD_1_0882BA2CA10E8E8E_OFFSET))(this);
	}
};
