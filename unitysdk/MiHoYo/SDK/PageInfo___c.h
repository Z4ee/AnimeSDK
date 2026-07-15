#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class PageInfo; }

#define MIHOYO_SDK_PAGEINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18541530)
#define MIHOYO_SDK_PAGEINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18541570)
#define MIHOYO_SDK_PAGEINFO___C___CCTOR_B__54_0_OFFSET UNITYSDK_OFFSET(0x18541580)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int PageInfo___c_TypeDefinitionIndex = 44639;

	class PageInfo___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::PageInfo___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::PageInfo___c**)Il2CppClass::FromTypeDefinitionIndex(PageInfo___c_TypeDefinitionIndex)->GetStaticField(0x19CC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::PageInfo* __cctor_b__54_0()
		{
			return ((::MiHoYo::SDK::PageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO___C___CCTOR_B__54_0_OFFSET))(this);
		}
	};
}
