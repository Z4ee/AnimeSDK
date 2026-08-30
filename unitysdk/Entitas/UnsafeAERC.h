#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ENTITAS_UNSAFEAERC_GET_RETAINCOUNT_OFFSET UNITYSDK_OFFSET(0x1EECE830)
#define ENTITAS_UNSAFEAERC_RELEASE_OFFSET UNITYSDK_OFFSET(0x1EECE850)
#define ENTITAS_UNSAFEAERC_RETAIN_OFFSET UNITYSDK_OFFSET(0x1EECE840)
#define ENTITAS_UNSAFEAERC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EECE860)

namespace Entitas
{
	inline static constexpr unsigned int UnsafeAERC_TypeDefinitionIndex = 9959;

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

		::System::Void Retain(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_UNSAFEAERC_RETAIN_OFFSET))(this, a1);
		}

		::System::Void Release(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENTITAS_UNSAFEAERC_RELEASE_OFFSET))(this, a1);
		}
	};
}
