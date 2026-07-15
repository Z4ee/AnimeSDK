#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseViewModel.h"

namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayStarViewModel; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C9CF0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMVIEWMODEL__INITSTARVMS_OFFSET UNITYSDK_OFFSET(0x1A4C9E10)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayTargetItemViewModel_TypeDefinitionIndex = 76428;

	class ChenLingFesGameplayTargetItemViewModel : public ::Sofa::BaseViewModel
	{
	public:
		// static const ::System::Int32 MaxStarDisplayCount = 0x3; // 0x0
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayStarViewModel*>* StarVMs; // 0x20
		::System::String* TitleStr; // 0x28
		::System::Int32 RequiredStarCount; // 0x30
		::System::Int32 WeekIndex; // 0x34
		::System::Int32 TargetScore; // 0x38
		::System::Boolean IsFinished; // 0x3C
		::System::Boolean IsEndlessModeForBoss; // 0x3D
		::System::Boolean IsEndlessMode; // 0x3E
		::System::Boolean IsCurWeek; // 0x3F
		::System::Boolean IsShowGlobalTarget; // 0x40
		::System::Int32 DayCount; // 0x44
		::System::Int32 Star; // 0x48

		::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Boolean a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Int32 a8, ::System::Boolean a9, ::System::Boolean a10, ::System::String* a11)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMVIEWMODEL__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::Void _InitStarVMs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYTARGETITEMVIEWMODEL__INITSTARVMS_OFFSET))(this);
		}
	};
}
