#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSetSection_Order.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/Vector2Int.h"

class Class_1_D72537470FC2F779;
namespace MoleMole::Config { class ChangeFGItem; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG_CUSTOMADDFUNCTION_OFFSET UNITYSDK_OFFSET(0x186BA470)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x186BA3B0)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG__CTOR_OFFSET UNITYSDK_OFFSET(0x186BA4E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChangeFG_TypeDefinitionIndex = 51779;

	class ConfigHollowChangeFG : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* VideoPath; // 0x18
		::UnityEngine::AnimationCurve* FadeOutCurve; // 0x20
		::UnityEngine::AnimationCurve* FadeInCurve; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::ChangeFGItem*>* ChangeFGItems; // 0x30
		::System::Single TotalDuration; // 0x38
		::MoleMole::Config::ConfigSetSection_Order ConfigOrder; // 0x3C
		::MoleMole::Vector2Int ColRow; // 0x40
		::System::Single FadeInDuration; // 0x48
		::System::Boolean Enable; // 0x4C
		::System::Boolean AutoFadeOut; // 0x4D
		::System::Boolean SelectAll; // 0x4E
		::System::Boolean UseSpecific; // 0x4F
		::MoleMole::Vector2Int StartRelativePos; // 0x50
		::System::Single FadeOutDuration; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG__CTOR_OFFSET))(this);
		}

		::Class_1_D72537470FC2F779* GetUIAnimationNode()
		{
			return ((::Class_1_D72537470FC2F779*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG_GETUIANIMATIONNODE_OFFSET))(this);
		}

		::MoleMole::Config::ChangeFGItem* CustomAddFunction()
		{
			return ((::MoleMole::Config::ChangeFGItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWCHANGEFG_CUSTOMADDFUNCTION_OFFSET))(this);
		}
	};
}
