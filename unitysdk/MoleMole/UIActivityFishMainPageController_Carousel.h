#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/System/Object.h"

class Class_2_1A39E1B51756BF41;
class Class_2_FDFE69FE7B72463B;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_CAROUSELNEXT_OFFSET UNITYSDK_OFFSET(0x181B1C40)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STARTCAROUSEL_OFFSET UNITYSDK_OFFSET(0x181B1750)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STOPCAROUSEL_OFFSET UNITYSDK_OFFSET(0x181B1950)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CAROUSELNEXT_B__16_0_OFFSET UNITYSDK_OFFSET(0x181B1F60)
#define MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CTOR_OFFSET UNITYSDK_OFFSET(0x181B1D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityFishMainPageController_Carousel_TypeDefinitionIndex = 82077;

	class UIActivityFishMainPageController_Carousel : public ::System::Object
	{
	public:
		::System::String* _fadeInClip; // 0x10
		::Class_2_1A39E1B51756BF41* _image1; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* _iconList; // 0x20
		::System::String* _fadeOutClip; // 0x28
		::Class_2_FDFE69FE7B72463B* _animation; // 0x30
		::System::Int32 _curNum; // 0x38
		::System::Single _fadeOutClipLength; // 0x3C
		::Foundation::Coroutine::CoroutineHandle _carouselHandle; // 0x40
		::Foundation::Coroutine::CoroutineHandle _waitFadeCarouselHandle; // 0x44
		::System::Single _carouselTime; // 0x48
		::System::Int32 _maxNum; // 0x4C
		::System::Single _firstCarouselTime; // 0x50
		::System::Single _fadeInClipLength; // 0x54
		::System::Boolean _isAvatar; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CTOR_OFFSET))(this);
		}

		::System::Void StartCarousel(::System::Collections::Generic::List_1<::System::String*>* iconList, ::Class_2_1A39E1B51756BF41* image, ::Class_2_FDFE69FE7B72463B* animation, ::System::Boolean isAvatar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::Class_2_1A39E1B51756BF41*, ::Class_2_FDFE69FE7B72463B*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STARTCAROUSEL_OFFSET))(this, iconList, image, animation, isAvatar);
		}

		::System::Void StopCarousel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_STOPCAROUSEL_OFFSET))(this);
		}

		::System::Void CarouselNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL_CAROUSELNEXT_OFFSET))(this);
		}

		::System::Void _CarouselNext_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYFISHMAINPAGECONTROLLER_CAROUSEL__CAROUSELNEXT_B__16_0_OFFSET))(this);
		}
	};
}
