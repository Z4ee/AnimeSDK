#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCCROWD_AI_NPCAIDATACONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0xF5FA160)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int NPCAIDataConstants_TypeDefinitionIndex = 59297;

	class NPCAIDataConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_AIACTION_DATA()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAIDataConstants_TypeDefinitionIndex)->GetStaticField(0x3D790);
		}
		static ::System::String** StaticGet_ATTRACTOR_TEMPLATE_DATA()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAIDataConstants_TypeDefinitionIndex)->GetStaticField(0x3D798);
		}
		static ::System::String** StaticGet_ATTRACTOR_DATA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAIDataConstants_TypeDefinitionIndex)->GetStaticField(0x3D7A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AI_NPCAIDATACONSTANTS__CCTOR_OFFSET))();
		}
	};
}
