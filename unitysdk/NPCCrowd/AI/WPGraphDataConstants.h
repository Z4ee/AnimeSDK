#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_AI_WPGRAPHDATACONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0xF4E89E0)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int WPGraphDataConstants_TypeDefinitionIndex = 72661;

	class WPGraphDataConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_GLOBAL_NPC_POPULATION_CONFIG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WPGraphDataConstants_TypeDefinitionIndex)->GetStaticField(0x40C20);
		}
		static ::System::String** StaticGet_GLOBAL_NPC_POOL_CONFIG()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WPGraphDataConstants_TypeDefinitionIndex)->GetStaticField(0x40C28);
		}
		static ::System::String** StaticGet_MAIN_CITY_SECTION_DATA()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(WPGraphDataConstants_TypeDefinitionIndex)->GetStaticField(0x40C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_WPGRAPHDATACONSTANTS__CCTOR_OFFSET))();
		}
	};
}
