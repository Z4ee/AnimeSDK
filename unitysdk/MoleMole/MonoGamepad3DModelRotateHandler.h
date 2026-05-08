#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/MoleMole/MonoGamepadModule.h"

namespace MoleMole { class Mono3DModelRotateHandler; }

#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x15E4C220)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_0B1EB5C9B94BAB66_OFFSET UNITYSDK_OFFSET(0x15E4C0C0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x15E4C8D0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_AB021B10FFDC6C17_OFFSET UNITYSDK_OFFSET(0x15E4C3A0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x15E4CAF0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x15E4C880)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E4C610)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ISTEMPWORKABLE_OFFSET UNITYSDK_OFFSET(0x15E4C6B0)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ISWORKABLEINNER_OFFSET UNITYSDK_OFFSET(0x15E4C740)
#define MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15E4C7D0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepad3DModelRotateHandler_TypeDefinitionIndex = 60294;

	class MonoGamepad3DModelRotateHandler : public ::MoleMole::MonoGamepadModule
	{
	public:
		::MoleMole::Mono3DModelRotateHandler* _3dModelRotateHandler; // 0xE8
		::MoleMole::InputLogicEventType _rotateEvent; // 0xF0
		::MoleMole::InputLogicEventType _resetEvent; // 0xF4
		::System::Single _speed; // 0xF8
		::System::Single _thresholdDelta; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER__CTOR_OFFSET))(this);
		}

		::System::Boolean Method_6_0B1EB5C9B94BAB66()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_0B1EB5C9B94BAB66_OFFSET))(this);
		}

		::System::Boolean IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean Method_6_AB021B10FFDC6C17(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_AB021B10FFDC6C17_OFFSET))(this, a1);
		}

		::System::Boolean __base_IsTempWorkable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ISTEMPWORKABLE_OFFSET))(this);
		}

		::System::Boolean __base_IsWorkableInner()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ISWORKABLEINNER_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER___BASE_ONINPUTACTION_OFFSET))(this, a1);
		}

		::System::Void Method_6_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_6_97D83E4CB3B11935()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_97D83E4CB3B11935_OFFSET))(this);
		}

		::System::Void Method_6_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPAD3DMODELROTATEHANDLER_METHOD_6_CA373AA1C7054598_1_OFFSET))(this);
		}
	};
}
