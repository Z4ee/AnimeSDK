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

#define ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_0414B7E68ABA5085_OFFSET UNITYSDK_OFFSET(0xFBA6430)
#define ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_4B0274957BFBA3A3_OFFSET UNITYSDK_OFFSET(0xFBA58A0)
#define ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_6441B51DB3E78348_OFFSET UNITYSDK_OFFSET(0xFBA6390)
#define ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_E83461C42980F950_OFFSET UNITYSDK_OFFSET(0xFBA5000)
#define ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0xFBA6060)
#define ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0xFBA4C60)

namespace EnviromentSystem
{
	inline static constexpr unsigned int EnviroLightQualityFallbackGroup_TypeDefinitionIndex = 40310;

	class EnviroLightQualityFallbackGroup : public ::EnviromentSystem::EnviroBoolProperty
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::String*>** StaticGet_PropertyGroupNameDic()
		{
			return (::System::Collections::Generic::Dictionary_2<::EnviromentSystem::EnviromentPropertiesID, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EnviroLightQualityFallbackGroup_TypeDefinitionIndex)->GetStaticField(0xEF40);
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

		::System::Void Method_3_E83461C42980F950(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_E83461C42980F950_OFFSET))(this, a1);
		}

		::System::Void Method_3_4B0274957BFBA3A3(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_4B0274957BFBA3A3_OFFSET))(this, a1);
		}

		::System::Void Method_3_6441B51DB3E78348(::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::EnviromentSystem::EnviroProperty*>*))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_6441B51DB3E78348_OFFSET))(this, P0);
		}

		::System::Void Method_3_0414B7E68ABA5085(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ENVIROMENTSYSTEM_ENVIROLIGHTQUALITYFALLBACKGROUP_METHOD_3_0414B7E68ABA5085_OFFSET))(this, P0);
		}
	};
}
