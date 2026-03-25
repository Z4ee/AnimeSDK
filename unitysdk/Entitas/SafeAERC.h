#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ENTITAS_SAFEAERC_GET_OWNERS_OFFSET UNITYSDK_OFFSET(0x11A87240)
#define ENTITAS_SAFEAERC_GET_RETAINCOUNT_OFFSET UNITYSDK_OFFSET(0x11A87220)
#define ENTITAS_SAFEAERC_RELEASE_OFFSET UNITYSDK_OFFSET(0x11A872E0)
#define ENTITAS_SAFEAERC_RETAIN_OFFSET UNITYSDK_OFFSET(0x11A87250)
#define ENTITAS_SAFEAERC__CTOR_OFFSET UNITYSDK_OFFSET(0x11A83E30)

namespace Entitas
{
	inline static constexpr unsigned int SafeAERC_TypeDefinitionIndex = 9705;

	class SafeAERC : public ::System::Object
	{
	public:
		::Entitas::IEntity* _entity; // 0x10
		::System::Collections::Generic::HashSet_1<::System::Object*>* _owners; // 0x18

		::System::Void _ctor(::Entitas::IEntity* entity)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_SAFEAERC__CTOR_OFFSET))(this, entity);
		}

		::System::Int32 get_retainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SAFEAERC_GET_RETAINCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Object*>* get_owners()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SAFEAERC_GET_OWNERS_OFFSET))(this);
		}

		::System::Void Retain(::System::Object* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_SAFEAERC_RETAIN_OFFSET))(this, owner);
		}

		::System::Void Release(::System::Object* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_SAFEAERC_RELEASE_OFFSET))(this, owner);
		}
	};
}
