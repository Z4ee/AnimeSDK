#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class SpritePresetApplier; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }

#define RPG_CLIENT_SPRITEPRESETCONTROLLER_APPLY_OFFSET UNITYSDK_OFFSET(0xA4B5260)
#define RPG_CLIENT_SPRITEPRESETCONTROLLER_TRYAPPLY_OFFSET UNITYSDK_OFFSET(0xA4B5400)
#define RPG_CLIENT_SPRITEPRESETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4B55A0)

namespace RPG::Client
{
	inline static constexpr unsigned int SpritePresetController_TypeDefinitionIndex = 56388;

	class SpritePresetController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::UI::Image* MainImage; // 0x18
		::UnityEngine::UI::RawImage* MainRawImage; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::SpritePresetApplier*>* PresetApplierList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Apply(::System::String* spriteAsbResPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETCONTROLLER_APPLY_OFFSET))(this, spriteAsbResPath);
		}

		::System::Void TryApply(::System::String* spriteAsbResPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SPRITEPRESETCONTROLLER_TRYAPPLY_OFFSET))(this, spriteAsbResPath);
		}
	};
}
