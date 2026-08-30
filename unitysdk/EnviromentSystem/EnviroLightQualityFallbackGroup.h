#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EnviromentSystem/EnviroBoolProperty.h"
#include "unitysdk/EnviromentSystem/EnviromentPropertiesID.h"
#include "unitysdk/RPG/CustomRP/CustomLightQualityFilter.h"

namespace EnviromentSystem { class EnviroProperty; }
namespace EnviromentSystem { class EnviromentProfile; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_95EAF395E6F95EA4_OFFSET UNITYSDK_OFFSET(0x1531F820)
#define ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_BE94804ECFD1BEAC_OFFSET UNITYSDK_OFFSET(0x1531EE50)
#define ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x15320070)
#define ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1531E980)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroLightQualityFallbackGroup_TypeDefinitionIndex = 50048;

	class EnviroLightQualityFallbackGroup : public ::EnviromentSystem::EnviroBoolProperty
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::String*>** StaticGet_PropertyGroupNameDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroLightQualityFallbackGroup_TypeDefinitionIndex)->GetStaticField(0x64EF0);
		}
		::EnviromentSystem::EnviromentPropertiesID highProperty; // 0x60
		::EnviromentSystem::EnviromentPropertiesID middleProperty; // 0x64
		::EnviromentSystem::EnviromentPropertiesID lowProperty; // 0x68
		::RPG::CustomRP::CustomLightQualityFilter LastLightQualityFilter; // 0x6C
		::System::Boolean LastValue; // 0x70

		::System::Void _ctor(::EnviromentSystem::EnviromentProfile* a1, ::System::String* a2, ::EnviromentSystem::EnviromentPropertiesID a3, ::EnviromentSystem::EnviromentPropertiesID a4, ::EnviromentSystem::EnviromentPropertiesID a5, ::System::Boolean a6)
		{
			return ((::System::Void(*)(::PVOID, ::EnviromentSystem::EnviromentProfile*, ::System::String*, ::EnviromentSystem::EnviromentPropertiesID, ::EnviromentSystem::EnviromentPropertiesID, ::EnviromentSystem::EnviromentPropertiesID, ::System::Boolean))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP__CCTOR_OFFSET))();
		}

		::System::Void Method_3_BE94804ECFD1BEAC(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_BE94804ECFD1BEAC_OFFSET))(this, a1);
		}

		::System::Void Method_3_95EAF395E6F95EA4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_95EAF395E6F95EA4_OFFSET))(this, a1);
		}
	};
}
