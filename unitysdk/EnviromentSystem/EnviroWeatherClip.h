#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_METHOD_2_06D8B02BA841B626_OFFSET UNITYSDK_OFFSET(0xF907F70)
#define ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_METHOD_2_8EE0DEE68564597C_OFFSET UNITYSDK_OFFSET(0xF908020)
#define ENVIROMENTSYSTEM_ENVIROWEATHERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xF908010)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroWeatherClip_TypeDefinitionIndex = 46177;

	class EnviroWeatherClip : public ::EnviromentSystem::EnviromentClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWEATHERCLIP__CTOR_OFFSET))(this);
		}

		static ::EnviromentSystem::EnviroWeatherClip* Method_2_06D8B02BA841B626(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::EnviromentSystem::EnviroWeatherClip*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_METHOD_2_06D8B02BA841B626_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* Method_2_8EE0DEE68564597C(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_METHOD_2_8EE0DEE68564597C_OFFSET))(a1);
		}
	};
}
