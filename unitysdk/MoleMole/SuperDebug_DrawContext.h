#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/SuperDebug_LogModule.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_APPENDLINE_OFFSET UNITYSDK_OFFSET(0x1D2EBC20)
#define MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_CLEAR_OFFSET UNITYSDK_OFFSET(0x1D2EBBB0)
#define MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_DRAW_OFFSET UNITYSDK_OFFSET(0x1D2EBE20)
#define MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_GET_OFFSET UNITYSDK_OFFSET(0x1D2EBB70)
#define MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_WITHCOLOR_OFFSET UNITYSDK_OFFSET(0x1D2EBDB0)
#define MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_WITHWORLDPOS_OFFSET UNITYSDK_OFFSET(0x1D2EBD40)
#define MOLEMOLE_SUPERDEBUG_DRAWCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2EBE60)
#define MOLEMOLE_SUPERDEBUG_DRAWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2EBB60)

namespace MoleMole
{
	inline static constexpr unsigned int SuperDebug_DrawContext_TypeDefinitionIndex = 8062;

	class SuperDebug_DrawContext : public ::System::Object
	{
	public:
		static ::MoleMole::SuperDebug_DrawContext** StaticGet__ins()
		{
			return (::MoleMole::SuperDebug_DrawContext**)Il2CppClass::FromTypeDefinitionIndex(SuperDebug_DrawContext_TypeDefinitionIndex)->GetStaticField(0x7210);
		}
		::System::String* text; // 0x10
		::UnityEngine::Vector3 worldPos; // 0x18
		::System::Nullable_1<::UnityEngine::Color> color; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCONTEXT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCONTEXT__CCTOR_OFFSET))();
		}

		static ::MoleMole::SuperDebug_DrawContext* Get(::MoleMole::SuperDebug_LogModule type)
		{
			return ((::MoleMole::SuperDebug_DrawContext*(*)(::MoleMole::SuperDebug_LogModule))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_GET_OFFSET))(type);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_CLEAR_OFFSET))(this);
		}

		::MoleMole::SuperDebug_DrawContext* AppendLine(::System::String* text)
		{
			return ((::MoleMole::SuperDebug_DrawContext*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_APPENDLINE_OFFSET))(this, text);
		}

		::MoleMole::SuperDebug_DrawContext* WithWorldPos(::UnityEngine::Vector3 worldPos)
		{
			return ((::MoleMole::SuperDebug_DrawContext*(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_WITHWORLDPOS_OFFSET))(this, worldPos);
		}

		::MoleMole::SuperDebug_DrawContext* WithColor(::UnityEngine::Color color)
		{
			return ((::MoleMole::SuperDebug_DrawContext*(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_WITHCOLOR_OFFSET))(this, color);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SUPERDEBUG_DRAWCONTEXT_DRAW_OFFSET))(this);
		}
	};
}
