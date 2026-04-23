#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class UIDraggableManager; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_ATTACH_OFFSET UNITYSDK_OFFSET(0xB3E3F10)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_CREATE_OFFSET UNITYSDK_OFFSET(0xB3E3C60)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_DETACH_OFFSET UNITYSDK_OFFSET(0xB3E4050)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_RPG_CLIENT_IUIDRAGINPUT_GETPOSITION_OFFSET UNITYSDK_OFFSET(0xB3E40E0)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_UPDATEOFFSET_OFFSET UNITYSDK_OFFSET(0xB3E3EC0)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0xB3E3CD0)
#define RPG_CLIENT_UIDRAGINPUTBYTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0xB3E3C50)

namespace RPG::Client
{
	inline static constexpr unsigned int UIDragInputByTransform_TypeDefinitionIndex = 67276;

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

		::System::Void UpdateTransform(::UnityEngine::Transform* transform)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_UPDATETRANSFORM_OFFSET))(this, transform);
		}

		::System::Void UpdateOffset(::UnityEngine::Vector2 offset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_UPDATEOFFSET_OFFSET))(this, offset);
		}

		::System::Void Attach(::RPG::Client::UIDraggableManager* mgr)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIDraggableManager*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UIDRAGINPUTBYTRANSFORM_ATTACH_OFFSET))(this, mgr);
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
