#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_DD6E273E77666B37;
class Class_1_FA5914EF545C7C05;
namespace RPG::Client::Prop { class DeployPuzzleBoard; }
namespace RPG::Client::Prop { class HintConfigInfo; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_DRAWHINTCONNECTION_OFFSET UNITYSDK_OFFSET(0xDC44ED0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_METHOD_5_1AB9D4E0D4B0F708_OFFSET UNITYSDK_OFFSET(0xDC49D40)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_METHOD_5_808A56A256840289_OFFSET UNITYSDK_OFFSET(0xDC49AF0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ONINIT_OFFSET UNITYSDK_OFFSET(0xDC42EC0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ONPUZZLEDESTROY_OFFSET UNITYSDK_OFFSET(0xDC47000)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ROTATESUBOBJECT_OFFSET UNITYSDK_OFFSET(0xDC47EA0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_TRIGGERHINTLINERENDERSFADEOUT_OFFSET UNITYSDK_OFFSET(0xDC48660)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_UPDATE_OFFSET UNITYSDK_OFFSET(0xDC49A90)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT__CTOR_OFFSET UNITYSDK_OFFSET(0xDC49EE0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleHint_TypeDefinitionIndex = 78064;

	class DeployPuzzleHint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::LineRenderer*>* FBBAFAEDBFL; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Transform*>* BGIGOGIHBON; // 0x20
		::RPG::Client::Prop::DeployPuzzleBoard* MIPPNCGOJNM; // 0x28
		::RPG::Client::Prop::HintConfigInfo* PHLBPINNAKH; // 0x30
		::UnityEngine::Transform* BAPGEGKBLIE; // 0x38
		::UnityEngine::Transform* PODLIODJFLJ; // 0x40
		::UnityEngine::Quaternion POLIJKHBFJM; // 0x48
		::System::Collections::Generic::List_1<::Class_1_DD6E273E77666B37*>* GNBNCNDMEGP; // 0x58
		::System::Collections::Generic::Queue_1<::Class_1_FA5914EF545C7C05*>* EEOAJODBOHM; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT__CTOR_OFFSET))(this);
		}

		::System::Void OnInit(::RPG::Client::Prop::DeployPuzzleBoard* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DeployPuzzleBoard*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ONINIT_OFFSET))(this, a1);
		}

		::System::Void DrawHintConnection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_DRAWHINTCONNECTION_OFFSET))(this);
		}

		::System::Void OnPuzzleDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ONPUZZLEDESTROY_OFFSET))(this);
		}

		::System::Void RotateSubObject(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ROTATESUBOBJECT_OFFSET))(this, a1);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_UPDATE_OFFSET))(this);
		}

		::System::Void Method_5_1AB9D4E0D4B0F708(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_METHOD_5_1AB9D4E0D4B0F708_OFFSET))(this, a1);
		}

		::System::Void Method_5_808A56A256840289(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_METHOD_5_808A56A256840289_OFFSET))(this, a1);
		}

		::System::Void TriggerHintLineRendersFadeout(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_TRIGGERHINTLINERENDERSFADEOUT_OFFSET))(this, a1, a2);
		}
	};
}
