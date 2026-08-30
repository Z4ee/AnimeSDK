#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4F54BF4C6B55D9A9;
class FiveDimRenderingItem;
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class LevelAnchorCoin40Parameter; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_17A5886A757514FA_METHOD_1_0882BA2CA10E8E8E_OFFSET UNITYSDK_OFFSET(0x15877A40)
#define CLASS_1_17A5886A757514FA__CTOR_OFFSET UNITYSDK_OFFSET(0x15877AF0)

inline static constexpr unsigned int Class_1_17A5886A757514FA_TypeDefinitionIndex = 77717;

class Class_1_17A5886A757514FA : public ::System::Object
{
public:
	::Class_1_4F54BF4C6B55D9A9* LBLEOKEHLBB; // 0x10
	::RPG::GameCore::LevelAnchorCoin40Parameter* HGCAPCENLLP; // 0x18
	::RPG::GameCore::AnchorInfo* FEEBOGKKGIG; // 0x20
	::UnityEngine::GameObject* JGOOCFAJAFF; // 0x28
	::FiveDimRenderingItem* FJCJGFGMCCP; // 0x30
	::System::Single CECJJKAFJAI; // 0x38
	::System::Single FMHACCBKEPP; // 0x3C
	::System::UInt32 NOPJJBBDMGO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17A5886A757514FA__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_0882BA2CA10E8E8E()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_17A5886A757514FA_METHOD_1_0882BA2CA10E8E8E_OFFSET))(this);
	}
};
