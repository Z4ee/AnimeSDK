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

#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_DRAWHINTCONNECTION_OFFSET UNITYSDK_OFFSET(0xC539EF0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_METHOD_5_1AB9D4E0D4B0F708_OFFSET UNITYSDK_OFFSET(0xC53EF00)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_METHOD_5_808A56A256840289_OFFSET UNITYSDK_OFFSET(0xC53ECB0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ONINIT_OFFSET UNITYSDK_OFFSET(0xC537EE0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ONPUZZLEDESTROY_OFFSET UNITYSDK_OFFSET(0xC53C000)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_ROTATESUBOBJECT_OFFSET UNITYSDK_OFFSET(0xC53CEA0)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_TRIGGERHINTLINERENDERSFADEOUT_OFFSET UNITYSDK_OFFSET(0xC53D660)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT_UPDATE_OFFSET UNITYSDK_OFFSET(0xC53EC50)
#define RPG_CLIENT_PROP_DEPLOYPUZZLEHINT__CTOR_OFFSET UNITYSDK_OFFSET(0xC53F0A0)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int DeployPuzzleHint_TypeDefinitionIndex = 73053;

	class DeployPuzzleHint : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::LineRenderer*>* Field_5_0; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::UnityEngine::Transform*>* Field_5_1; // 0x20
		::RPG::Client::Prop::DeployPuzzleBoard* Field_5_2; // 0x28
		::RPG::Client::Prop::HintConfigInfo* Field_5_3; // 0x30
		::UnityEngine::Transform* Field_5_4; // 0x38
		::UnityEngine::Transform* Field_5_5; // 0x40
		::UnityEngine::Quaternion Field_5_6; // 0x48
		::System::Collections::Generic::List_1<::Class_1_DD6E273E77666B37*>* Field_5_7; // 0x58
		::System::Collections::Generic::Queue_1<::Class_1_FA5914EF545C7C05*>* Field_5_8; // 0x60

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
