#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Predicate_1; }
namespace UnityEngine::UI { class Image; }

#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18509430)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18509470)
#define MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT___C__UPDATEQUADIMAGE_B__13_0_OFFSET UNITYSDK_OFFSET(0x18509480)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKLinkImageText___c_TypeDefinitionIndex = 44732;

	class MiHoYoSDKLinkImageText___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::UI::Image*>** StaticGet___9__13_0()
		{
			return (::System::Predicate_1<::UnityEngine::UI::Image*>**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText___c_TypeDefinitionIndex)->GetStaticField(0x10B40);
		}
		static ::MiHoYo::SDK::MiHoYoSDKLinkImageText___c** StaticGet___9()
		{
			return (::MiHoYo::SDK::MiHoYoSDKLinkImageText___c**)Il2CppClass::FromTypeDefinitionIndex(MiHoYoSDKLinkImageText___c_TypeDefinitionIndex)->GetStaticField(0x10B48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _UpdateQuadImage_b__13_0(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKLINKIMAGETEXT___C__UPDATEQUADIMAGE_B__13_0_OFFSET))(this, a1);
		}
	};
}
