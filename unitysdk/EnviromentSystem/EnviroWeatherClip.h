#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_METHOD_2_06D8B02BA841B626_OFFSET UNITYSDK_OFFSET(0x106B6E30)
#define ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_METHOD_2_A89B5C4872F9F9B3_OFFSET UNITYSDK_OFFSET(0x106B6EE0)
#define ENVIROMENTSYSTEM_ENVIROWEATHERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x106B6ED0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroWeatherClip_TypeDefinitionIndex = 50006;

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

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* Method_2_A89B5C4872F9F9B3(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROWEATHERCLIP_METHOD_2_A89B5C4872F9F9B3_OFFSET))(a1);
		}
	};
}
