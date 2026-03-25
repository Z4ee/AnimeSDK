#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG { class OutlinePostFXBehavior; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_17F985F52886C1FB_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAAFDEE0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_17F985F52886C1FB_GET_KEY_OFFSET UNITYSDK_OFFSET(0xAAFDDF0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_17F985F52886C1FB__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFD6B0)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_Class_1_17F985F52886C1FB_TypeDefinitionIndex = 41816;

	class OutlinePostFXBehavior_Class_1_17F985F52886C1FB : public ::System::Object
	{
	public:
		::RPG::OutlinePostFXBehavior* Field_1_0; // 0x10

		::System::Void _ctor(::RPG::OutlinePostFXBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::OutlinePostFXBehavior*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_17F985F52886C1FB__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_17F985F52886C1FB_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_17F985F52886C1FB_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
