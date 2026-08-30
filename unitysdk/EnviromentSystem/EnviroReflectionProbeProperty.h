#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroAssetProperty.h"
#include "unitysdk/EnviromentSystem/EnviroReflectionProbeProperty_EnviroReflectionProbe.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x106AE250)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_61929A3103595552_OFFSET UNITYSDK_OFFSET(0x106AFB50)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_7BFD8B75F101C6D3_OFFSET UNITYSDK_OFFSET(0x106ADEE0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_86A9E8386FA23FF4_OFFSET UNITYSDK_OFFSET(0x106AEEC0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_8DC652D916C182B2_OFFSET UNITYSDK_OFFSET(0x106AF3E0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0x106B00E0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_A27DC2C5A103933A_OFFSET UNITYSDK_OFFSET(0x106AFF10)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_DCCE11FE949CAADF_OFFSET UNITYSDK_OFFSET(0x106AFCF0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_DF3C54A5ADEABAF1_OFFSET UNITYSDK_OFFSET(0x106B0220)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_F762974E778A9B95_OFFSET UNITYSDK_OFFSET(0x106AE8B0)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x106ADA20)
#define ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x106A27C0)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroReflectionProbeProperty_TypeDefinitionIndex = 50049;

	class EnviroReflectionProbeProperty : public ::EnviromentSystem::EnviroAssetProperty
	{
	public:
		::System::Collections::Generic::List_1<::EnviromentSystem::EnviroReflectionProbeProperty_EnviroReflectionProbe>* m_ReflectionProbes; // 0x50

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::EnviromentSystem::EnviroReflectionProbeProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroReflectionProbeProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY__CTOR_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_7BFD8B75F101C6D3(::EnviromentSystem::EnviroReflectionProbeProperty* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EnviromentSystem::EnviroReflectionProbeProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_7BFD8B75F101C6D3_OFFSET))(this, a1);
		}

		::System::Void Method_3_4857357D5C1BFCE8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_4857357D5C1BFCE8_OFFSET))(this);
		}

		::System::Void Method_3_F762974E778A9B95(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_F762974E778A9B95_OFFSET))(this, a1);
		}

		::System::Void Method_3_86A9E8386FA23FF4(::EnviromentSystem::EnviroProperty* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviroProperty*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_86A9E8386FA23FF4_OFFSET))(this, a1);
		}

		::System::Void Method_3_61929A3103595552()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_61929A3103595552_OFFSET))(this);
		}

		::System::Void Method_3_DCCE11FE949CAADF(::System::Collections::Generic::List_1<::System::String*>*& a1, ::System::Collections::Generic::List_1<::System::Type*>*& a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*&, ::System::Collections::Generic::List_1<::System::Type*>*&))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_DCCE11FE949CAADF_OFFSET))(this, a1, a2);
		}

		::System::Void Method_3_A27DC2C5A103933A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_A27DC2C5A103933A_OFFSET))(this);
		}

		::System::Void Method_3_9D455FE4693966A8()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_9D455FE4693966A8_OFFSET))(this);
		}

		::System::Void Method_3_8DC652D916C182B2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_8DC652D916C182B2_OFFSET))(this);
		}

		::System::Void Method_3_DF3C54A5ADEABAF1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROREFLECTIONPROBEPROPERTY_METHOD_3_DF3C54A5ADEABAF1_OFFSET))(this);
		}
	};
}
