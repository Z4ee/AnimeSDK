#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class TrackInfo; }

#define MIHOYO_SDK_TRACKINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x8DD3A00)
#define MIHOYO_SDK_TRACKINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x8DD3A40)
#define MIHOYO_SDK_TRACKINFO___C___CCTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x8DD3A50)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TrackInfo___c_TypeDefinitionIndex = 42972;

	class TrackInfo___c : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::TrackInfo___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::TrackInfo___c**)Il2CppClass::FromTypeDefinitionIndex(TrackInfo___c_TypeDefinitionIndex)->GetStaticField(0x54850);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO___C__CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::TrackInfo* __cctor_b__34_0()
		{
			return ((::MiHoYo::SDK::TrackInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO___C___CCTOR_B__34_0_OFFSET))(this);
		}
	};
}
