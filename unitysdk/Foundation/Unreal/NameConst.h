#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

#define FOUNDATION_UNREAL_NAMECONST__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B383930)

namespace Foundation::Unreal
{
	inline static constexpr unsigned int NameConst_TypeDefinitionIndex = 8869;

	class NameConst : public ::System::Object
	{
	public:
		static ::System::TimeSpan* StaticGet_AcquireLockTimeout()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(NameConst_TypeDefinitionIndex)->GetStaticField(0x3CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_UNREAL_NAMECONST__CCTOR_OFFSET))();
		}
	};
}
