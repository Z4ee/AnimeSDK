#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define ENTITAS_SAFEAERC_GET_OWNERS_OFFSET UNITYSDK_OFFSET(0x16536650)
#define ENTITAS_SAFEAERC_GET_RETAINCOUNT_OFFSET UNITYSDK_OFFSET(0x16536630)
#define ENTITAS_SAFEAERC_RELEASE_OFFSET UNITYSDK_OFFSET(0x165366F0)
#define ENTITAS_SAFEAERC_RETAIN_OFFSET UNITYSDK_OFFSET(0x16536660)
#define ENTITAS_SAFEAERC__CTOR_OFFSET UNITYSDK_OFFSET(0x16533D70)

namespace Entitas
{
	inline static constexpr unsigned int SafeAERC_TypeDefinitionIndex = 9958;

	class SafeAERC : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::Object*>* _owners; // 0x10
		::Entitas::IEntity* _entity; // 0x18

		::System::Void _ctor(::Entitas::IEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + ENTITAS_SAFEAERC__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_retainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SAFEAERC_GET_RETAINCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::HashSet_1<::System::Object*>* get_owners()
		{
			return ((::System::Collections::Generic::HashSet_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_SAFEAERC_GET_OWNERS_OFFSET))(this);
		}

		::System::Void Retain(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_SAFEAERC_RETAIN_OFFSET))(this, a1);
		}

		::System::Void Release(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_SAFEAERC_RELEASE_OFFSET))(this, a1);
		}
	};
}
