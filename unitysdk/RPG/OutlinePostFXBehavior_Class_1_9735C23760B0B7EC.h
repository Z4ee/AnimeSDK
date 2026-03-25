#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"

namespace RPG { class OutlinePostFXBehavior; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_9735C23760B0B7EC_EXECUTE_OFFSET UNITYSDK_OFFSET(0xAAFE360)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_9735C23760B0B7EC_GET_KEY_OFFSET UNITYSDK_OFFSET(0xAAFE270)
#define RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_9735C23760B0B7EC__CTOR_OFFSET UNITYSDK_OFFSET(0xAAFD670)

namespace RPG
{
	inline static constexpr unsigned int OutlinePostFXBehavior_Class_1_9735C23760B0B7EC_TypeDefinitionIndex = 41815;

	class OutlinePostFXBehavior_Class_1_9735C23760B0B7EC : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* Field_1_3; // 0x10
		::UnityEngine::Material* Field_1_1; // 0x18
		::UnityEngine::Material* Field_1_2; // 0x20
		::RPG::OutlinePostFXBehavior* Field_1_0; // 0x28

		::System::Void _ctor(::RPG::OutlinePostFXBehavior* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::OutlinePostFXBehavior*))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_9735C23760B0B7EC__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_9735C23760B0B7EC_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + RPG_OUTLINEPOSTFXBEHAVIOR_CLASS_1_9735C23760B0B7EC_EXECUTE_OFFSET))(this, a1, a2);
		}
	};
}
