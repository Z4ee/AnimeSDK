#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_81FF43F4A9080DC3_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x1F41B600)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_81FF43F4A9080DC3_METHOD_1_ED7FC3204065168B_OFFSET UNITYSDK_OFFSET(0x1F41B420)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_81FF43F4A9080DC3__CTOR_OFFSET UNITYSDK_OFFSET(0x1F41B410)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3_TypeDefinitionIndex = 94954;

	class UIMapSnakeBombAnimScript_Class_1_81FF43F4A9080DC3 : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* Field_1_7; // 0x10
		::UnityEngine::RectTransform* Field_1_4; // 0x18
		::UnityEngine::UI::Image* Field_1_6; // 0x20
		::System::Boolean Field_1_5; // 0x28
		::System::Int32 Field_1_0; // 0x2C
		::System::Int32 Field_1_1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_81FF43F4A9080DC3__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* Method_1_ED7FC3204065168B()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_81FF43F4A9080DC3_METHOD_1_ED7FC3204065168B_OFFSET))(this);
		}

		::System::Void Method_1_4343F372F34C05BF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UIMAPSNAKEBOMBANIMSCRIPT_CLASS_1_81FF43F4A9080DC3_METHOD_1_4343F372F34C05BF_OFFSET))(this);
		}
	};
}
