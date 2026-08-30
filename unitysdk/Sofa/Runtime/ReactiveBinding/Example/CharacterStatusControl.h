#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl_1.h"

class Class_1_B958B3729F96B19C;
class Class_1_FF80A1ACD786CECB;
namespace RPG::Client { class LocalizedText; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Image; }
template <typename T> class Class_1_D90286A3143EECEC;

#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0xE925FF0)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL__BINDING_OFFSET UNITYSDK_OFFSET(0xE926120)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xE926D40)
#define SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL__ONHPFLASHMESSAGE_OFFSET UNITYSDK_OFFSET(0xE926B40)

namespace Sofa::Runtime::ReactiveBinding::Example
{
	inline static constexpr unsigned int CharacterStatusControl_TypeDefinitionIndex = 50359;

	class CharacterStatusControl : public ::Sofa::BaseSofaControl_1<::Class_1_B958B3729F96B19C*>
	{
	public:
		::RPG::Client::LocalizedText* _NameText; // 0x58
		::RPG::Client::LocalizedText* _LevelText; // 0x60
		::RPG::Client::LocalizedText* _HpText; // 0x68
		::UnityEngine::UI::Image* _AvatarImg; // 0x70
		::UnityEngine::UI::Image* _HpFillImg; // 0x78
		::UnityEngine::GameObject* _BattleBadge; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void _Binding(::Class_1_D90286A3143EECEC<::Class_1_B958B3729F96B19C*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D90286A3143EECEC<::Class_1_B958B3729F96B19C*>*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL__BINDING_OFFSET))(this, a1);
		}

		::System::Void _OnHpFlashMessage(::System::Object* a1, ::Class_1_FF80A1ACD786CECB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Class_1_FF80A1ACD786CECB*))((::PBYTE)hIl2Cpp + SOFA_RUNTIME_REACTIVEBINDING_EXAMPLE_CHARACTERSTATUSCONTROL__ONHPFLASHMESSAGE_OFFSET))(this, a1, a2);
		}
	};
}
