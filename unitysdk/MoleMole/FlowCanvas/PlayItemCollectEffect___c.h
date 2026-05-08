#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x142872E0)
#define MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14287320)
#define MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__INVOKE_B__0_0_OFFSET UNITYSDK_OFFSET(0x14287330)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int PlayItemCollectEffect___c_TypeDefinitionIndex = 61445;

	class PlayItemCollectEffect___c : public ::System::Object
	{
	public:
		static ::MoleMole::FlowCanvas::PlayItemCollectEffect___c** StaticGet___9()
		{
			return (::MoleMole::FlowCanvas::PlayItemCollectEffect___c**)Il2CppClass::FromTypeDefinitionIndex(PlayItemCollectEffect___c_TypeDefinitionIndex)->GetStaticField(0x3A4A0);
		}
		static ::System::Action** StaticGet___9__0_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PlayItemCollectEffect___c_TypeDefinitionIndex)->GetStaticField(0x3A4A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__CTOR_OFFSET))(this);
		}

		::System::Void _Invoke_b__0_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_PLAYITEMCOLLECTEFFECT___C__INVOKE_B__0_0_OFFSET))(this);
		}
	};
}
