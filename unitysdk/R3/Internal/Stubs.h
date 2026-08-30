#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/R3/Result.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define R3_INTERNAL_STUBS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EFBA390)

namespace R3::Internal
{
	inline static constexpr unsigned int Stubs_TypeDefinitionIndex = 35288;

	class Stubs : public ::System::Object
	{
	public:
		static ::System::Action_1<::R3::Result>** StaticGet_HandleResult()
		{
			return (::System::Action_1<::R3::Result>**)Il2CppClass::FromTypeDefinitionIndex(Stubs_TypeDefinitionIndex)->GetStaticField(0xD40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + R3_INTERNAL_STUBS__CCTOR_OFFSET))();
		}
	};
}
