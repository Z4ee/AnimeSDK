#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG { class OutlinePostFXBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343_EXECUTE_OFFSET UNITYSDK_OFFSET(0xB86A120)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343_GET_KEY_OFFSET UNITYSDK_OFFSET(0xB869F40)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343__CTOR_OFFSET UNITYSDK_OFFSET(0xB868F20)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_Class_1_0E92B03EF54C2343_TypeDefinitionIndex = 47780;

	class OutlinePostFXBehavior_Class_1_0E92B03EF54C2343 : public ::System::Object
	{
	public:
		::RPG::OutlinePostFXBehavior* Field_1_0; // 0x10
		::UnityEngine::Material* Field_1_2; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_3; // 0x20
		::UnityEngine::Material* Field_1_1; // 0x28

		::System::Void _ctor(::RPG::OutlinePostFXBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::OutlinePostFXBehavior*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_0E92B03EF54C2343_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
