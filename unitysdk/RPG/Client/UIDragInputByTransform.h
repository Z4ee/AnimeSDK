#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class UIDraggableManager; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_ATTACH_OFFSET UNITYSDK_OFFSET(0xE359310)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_CREATE_OFFSET UNITYSDK_OFFSET(0xE359060)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_DETACH_OFFSET UNITYSDK_OFFSET(0xE359450)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_RPG_CLIENT_IUIDRAGINPUT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xE3594E0)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_UPDATEOFFSET_OFFSET UNITYSDK_OFFSET(0xE3592C0)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xE3590D0)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xE359050)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragInputByTransform_TypeDefinitionIndex = 72973;

	class UIDragInputByTransform : public ::System::Object
	{
	public:
		::UnityEngine::Transform* _AttachTransform; // 0x10
		::RPG::Client::UIDraggableManager* _Mgr; // 0x18
		::UnityEngine::Vector2 _Offset; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGINPUTBYTRANSFORM__CTOR_OFFSET))(this);
		}

		static ::RPG::Client::UIDragInputByTransform* Create()
		{
			return ((::RPG::Client::UIDragInputByTransform*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_CREATE_OFFSET))();
		}

		::System::Void UpdateTransform(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_UPDATETRANSFORM_OFFSET))(this, a1);
		}

		::System::Void UpdateOffset(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_UPDATEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Attach(::RPG::Client::UIDraggableManager* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDraggableManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_ATTACH_OFFSET))(this, a1);
		}

		::System::Void Detach()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_DETACH_OFFSET))(this);
		}

		::UnityEngine::Vector2 RPG_Client_IUIDragInput_GetPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_RPG_CLIENT_IUIDRAGINPUT_GETPOSITION_OFFSET))(this);
		}
	};
}
