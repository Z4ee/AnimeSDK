#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::FlowCanvas::Nodes { class LDSwitchSpecialEnvironment___c__DisplayClass0_0; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT___C__DISPLAYCLASS0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x10D44510)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT___C__DISPLAYCLASS0_1__INVOKE_B__0_OFFSET UNITYSDK_OFFSET(0x10D44520)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSwitchSpecialEnvironment___c__DisplayClass0_1_TypeDefinitionIndex = 73728;

	class LDSwitchSpecialEnvironment___c__DisplayClass0_1 : public ::System::Object
	{
	public:
		::System::String* path; // 0x10
		::MoleMole::FlowCanvas::Nodes::LDSwitchSpecialEnvironment___c__DisplayClass0_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT___C__DISPLAYCLASS0_1__CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0(::Foundation::AssetPath s, ::UnityEngine::GameObject* o)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSWITCHSPECIALENVIRONMENT___C__DISPLAYCLASS0_1__INVOKE_B__0_OFFSET))(this, s, o);
		}
	};
}
