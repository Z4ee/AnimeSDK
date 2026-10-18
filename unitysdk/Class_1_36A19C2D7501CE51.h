#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_4F54BF4C6B55D9A9;
class FiveDimRenderingItem;
namespace RPG::GameCore { class AnchorInfo; }
namespace RPG::GameCore { class LevelAnchorCoin40Parameter; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_36A19C2D7501CE51_METHOD_1_4AB9012B5D01108B_OFFSET UNITYSDK_OFFSET(0x15B72000)
#define CLASS_1_36A19C2D7501CE51__CTOR_OFFSET UNITYSDK_OFFSET(0x15B720B0)

inline static constexpr unsigned int Class_1_36A19C2D7501CE51_TypeDefinitionIndex = 78188;

class Class_1_36A19C2D7501CE51 : public ::System::Object
{
public:
	::Class_1_4F54BF4C6B55D9A9* LBLEOKEHLBB; // 0x10
	::UnityEngine::GameObject* JGOOCFAJAFF; // 0x18
	::RPG::GameCore::AnchorInfo* FEEBOGKKGIG; // 0x20
	::RPG::GameCore::LevelAnchorCoin40Parameter* HGCAPCENLLP; // 0x28
	::FiveDimRenderingItem* FJCJGFGMCCP; // 0x30
	::System::Single CECJJKAFJAI; // 0x38
	::System::Single FMHACCBKEPP; // 0x3C
	::System::UInt32 NOPJJBBDMGO; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36A19C2D7501CE51__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_4AB9012B5D01108B()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_36A19C2D7501CE51_METHOD_1_4AB9012B5D01108B_OFFSET))(this);
	}
};
