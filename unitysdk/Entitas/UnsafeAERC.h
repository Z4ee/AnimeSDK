#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENTITAS_UNSAFEAERC_GET_RETAINCOUNT_OFFSET UNITYSDK_OFFSET(0x11A883C0)
#define ENTITAS_UNSAFEAERC_RELEASE_OFFSET UNITYSDK_OFFSET(0x11A883E0)
#define ENTITAS_UNSAFEAERC_RETAIN_OFFSET UNITYSDK_OFFSET(0x11A883D0)
#define ENTITAS_UNSAFEAERC__CTOR_OFFSET UNITYSDK_OFFSET(0x11A883F0)

namespace Entitas
{
	inline static constexpr unsigned int UnsafeAERC_TypeDefinitionIndex = 9706;

	class UnsafeAERC : public ::System::Object
	{
	public:
		::System::Int32 _retainCount; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_UNSAFEAERC__CTOR_OFFSET))(this);
		}

		::System::Int32 get_retainCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENTITAS_UNSAFEAERC_GET_RETAINCOUNT_OFFSET))(this);
		}

		::System::Void Retain(::System::Object* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_UNSAFEAERC_RETAIN_OFFSET))(this, owner);
		}

		::System::Void Release(::System::Object* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_UNSAFEAERC_RELEASE_OFFSET))(this, owner);
		}
	};
}
