#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class CommonInfo; }

#define MIHOYO_SDK_COMMONINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF625C0)
#define MIHOYO_SDK_COMMONINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF62600)
#define MIHOYO_SDK_COMMONINFO___C___CCTOR_B__59_0_OFFSET UNITYSDK_OFFSET(0x1DF62610)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CommonInfo___c_TypeDefinitionIndex = 37415;

	class CommonInfo___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::CommonInfo___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::CommonInfo___c**)Il2CppClass::FromTypeDefinitionIndex(CommonInfo___c_TypeDefinitionIndex)->GetStaticField(0x29E90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::CommonInfo* __cctor_b__59_0()
		{
			return ((::MiHoYo::SDK::CommonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO___C___CCTOR_B__59_0_OFFSET))(this);
		}
	};
}
