#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROFOGCLIP_METHOD_2_1B0916E27D8401AA_OFFSET UNITYSDK_OFFSET(0xF300E20)
#define ENVIROMENTSYSTEM_ENVIROFOGCLIP_METHOD_2_6AA875EA08DEE2B3_OFFSET UNITYSDK_OFFSET(0xF300ED0)
#define ENVIROMENTSYSTEM_ENVIROFOGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xF300EC0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroFogClip_TypeDefinitionIndex = 46171;

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

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* Method_2_6AA875EA08DEE2B3(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROFOGCLIP_METHOD_2_6AA875EA08DEE2B3_OFFSET))(a1);
		}
	};
}
