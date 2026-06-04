#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROSKYCLIP_METHOD_2_13F352EA7D5A7CC3_OFFSET UNITYSDK_OFFSET(0x135B68E0)
#define ENVIROMENTSYSTEM_ENVIROSKYCLIP_METHOD_2_8971B5B55B3856C5_OFFSET UNITYSDK_OFFSET(0x135B6990)
#define ENVIROMENTSYSTEM_ENVIROSKYCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x135B6980)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroSkyClip_TypeDefinitionIndex = 46759;

	class EnviroSkyClip : public ::EnviromentSystem::EnviromentClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSKYCLIP__CTOR_OFFSET))(this);
		}

		static ::EnviromentSystem::EnviroSkyClip* Method_2_13F352EA7D5A7CC3(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::EnviromentSystem::EnviroSkyClip*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSKYCLIP_METHOD_2_13F352EA7D5A7CC3_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* Method_2_8971B5B55B3856C5(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROSKYCLIP_METHOD_2_8971B5B55B3856C5_OFFSET))(a1);
		}
	};
}
