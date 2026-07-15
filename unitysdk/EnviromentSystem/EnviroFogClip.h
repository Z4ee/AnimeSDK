#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROFOGCLIP_METHOD_2_1B0916E27D8401AA_OFFSET UNITYSDK_OFFSET(0xF1968B0)
#define ENVIROMENTSYSTEM_ENVIROFOGCLIP_METHOD_2_81F4E10A4C342CAA_OFFSET UNITYSDK_OFFSET(0xF196960)
#define ENVIROMENTSYSTEM_ENVIROFOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xF196950)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroFogClip_TypeDefinitionIndex = 47719;

	class EnviroFogClip : public ::EnviromentSystem::EnviromentClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFOGCLIP__CTOR_OFFSET))(this);
		}

		static ::EnviromentSystem::EnviroFogClip* Method_2_1B0916E27D8401AA(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::EnviromentSystem::EnviroFogClip*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFOGCLIP_METHOD_2_1B0916E27D8401AA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* Method_2_81F4E10A4C342CAA(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFOGCLIP_METHOD_2_81F4E10A4C342CAA_OFFSET))(a1);
		}
	};
}
