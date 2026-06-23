#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MONO_NET_CFTYPE_GETTYPEID_OFFSET UNITYSDK_OFFSET(0x1CEBEF20)
#define MONO_NET_CFTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEBEFA0)

namespace Mono::Net
{
	inline static constexpr unsigned int CFType_TypeDefinitionIndex = 2583;

	class CFType : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_CFTYPE__CTOR_OFFSET))(this);
		}

		static ::System::IntPtr GetTypeID(::System::IntPtr typeRef)
		{
			return ((::System::IntPtr(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_NET_CFTYPE_GETTYPEID_OFFSET))(typeRef);
		}
	};
}
