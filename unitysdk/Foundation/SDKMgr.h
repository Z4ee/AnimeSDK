#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FOUNDATION_SDKMGR_INIT_OFFSET UNITYSDK_OFFSET(0x1058F480)
#define FOUNDATION_SDKMGR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1058F4E0)
#define FOUNDATION_SDKMGR__CTOR_OFFSET UNITYSDK_OFFSET(0x1058F4D0)

namespace Foundation
{
	inline static constexpr unsigned int SDKMgr_TypeDefinitionIndex = 75147;

	class SDKMgr : public ::System::Object
	{
	public:
		static ::System::Boolean* StaticGet_isInit()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(SDKMgr_TypeDefinitionIndex)->GetStaticField(0x113E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_SDKMGR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_SDKMGR__CCTOR_OFFSET))();
		}

		static ::System::Void Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_SDKMGR_INIT_OFFSET))();
		}
	};
}
