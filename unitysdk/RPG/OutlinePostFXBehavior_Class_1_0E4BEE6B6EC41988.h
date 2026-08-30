#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG { class OutlinePostFXBehavior; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E4BEE6B6EC41988_EXECUTE_OFFSET UNITYSDK_OFFSET(0xE7DE090)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E4BEE6B6EC41988_GET_KEY_OFFSET UNITYSDK_OFFSET(0xE7DDEA0)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E4BEE6B6EC41988__CTOR_OFFSET UNITYSDK_OFFSET(0xE7DD7C0)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_Class_1_0E4BEE6B6EC41988_TypeDefinitionIndex = 52013;

	class OutlinePostFXBehavior_Class_1_0E4BEE6B6EC41988 : public ::System::Object
	{
	public:
		::RPG::OutlinePostFXBehavior* MIPMCEJIAMC; // 0x10
		::System::Int32 MOLMALIOKHN; // 0x18

		::System::Void _ctor(::RPG::OutlinePostFXBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::OutlinePostFXBehavior*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E4BEE6B6EC41988__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E4BEE6B6EC41988_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E4BEE6B6EC41988_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
