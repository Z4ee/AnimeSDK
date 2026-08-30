#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define RPG_CLIENT_PIPELINECAMERAENGINE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xDAE4A90)
#define RPG_CLIENT_PIPELINECAMERAENGINE___C__CTOR_OFFSET UNITYSDK_OFFSET(0xDAE4AD0)
#define RPG_CLIENT_PIPELINECAMERAENGINE___C___ONWORLDSHIFTING_B__56_0_OFFSET UNITYSDK_OFFSET(0xDAE4AE0)

namespace RPG::Client
{
	inline static constexpr unsigned int PipelineCameraEngine___c_TypeDefinitionIndex = 69682;

	class PipelineCameraEngine___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__56_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(PipelineCameraEngine___c_TypeDefinitionIndex)->GetStaticField(0x57E70);
		}
		static ::RPG::Client::PipelineCameraEngine___c** StaticGet___9()
		{
			return (::RPG::Client::PipelineCameraEngine___c**)Il2CppClass::FromTypeDefinitionIndex(PipelineCameraEngine___c_TypeDefinitionIndex)->GetStaticField(0x57E78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE___C__CTOR_OFFSET))(this);
		}

		::System::Void __OnWorldShifting_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIPELINECAMERAENGINE___C___ONWORLDSHIFTING_B__56_0_OFFSET))(this);
		}
	};
}
