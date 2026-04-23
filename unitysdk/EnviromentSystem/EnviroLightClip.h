#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviromentClip.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_METHOD_2_3CA20E6A6D9DC6BA_OFFSET UNITYSDK_OFFSET(0xF30CEB0)
#define ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_METHOD_2_8EE0DEE68564597C_OFFSET UNITYSDK_OFFSET(0xF30CF60)
#define ENVIROMENTSYSTEM_ENVIROLIGHTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xF30CF50)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroLightClip_TypeDefinitionIndex = 46172;

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

		static ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* Method_2_8EE0DEE68564597C(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*(*)(::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTCLIP_METHOD_2_8EE0DEE68564597C_OFFSET))(a1);
		}
	};
}
