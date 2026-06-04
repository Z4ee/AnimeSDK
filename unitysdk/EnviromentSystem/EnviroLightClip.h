#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_METHOD_2_3CA20E6A6D9DC6BA_OFFSET UNITYSDK_OFFSET(0x13596BD0)
#define ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_METHOD_2_81F4E10A4C342CAA_OFFSET UNITYSDK_OFFSET(0x13596C80)
#define ENVIROMENTSYSTEM_ENVIROLIGHTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x13596C70)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroLightClip_TypeDefinitionIndex = 46755;

	class EnviroLightClip : public ::EnviromentSystem::EnviromentClip
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTCLIP__CTOR_OFFSET))(this);
		}

		static ::EnviromentSystem::EnviroLightClip* Method_2_3CA20E6A6D9DC6BA(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::EnviromentSystem::EnviroLightClip*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_METHOD_2_3CA20E6A6D9DC6BA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* Method_2_81F4E10A4C342CAA(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_METHOD_2_81F4E10A4C342CAA_OFFSET))(a1);
		}
	};
}
