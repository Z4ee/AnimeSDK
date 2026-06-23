#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define NPCCROWD_NPCWPPATHFINDERDEBUGGERDRAWSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0xD443AB0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex = 69038;

	class NPCWPPathFinderDebuggerDrawSetting : public ::System::Object
	{
	public:
		static ::System::Single* StaticGet_NodeCapsuleHalfHeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10C10);
		}
		static ::System::Single* StaticGet_NodeCapsuleRaidus()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10C14);
		}
		static ::UnityEngine::Color* StaticGet_LineColorDisable()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10C18);
		}
		static ::UnityEngine::Color* StaticGet_LineColorBack()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10C28);
		}
		static ::UnityEngine::Color* StaticGet_LineColorForward()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10C38);
		}
		static ::UnityEngine::Color* StaticGet_NodeColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10C48);
		}
		static ::UnityEngine::Color* StaticGet_NodeColorDisable()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10C58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERDEBUGGERDRAWSETTING__CCTOR_OFFSET))();
		}
	};
}
