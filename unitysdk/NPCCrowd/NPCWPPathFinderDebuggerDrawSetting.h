#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

#define NPCCROWD_NPCWPPATHFINDERDEBUGGERDRAWSETTING__CCTOR_OFFSET UNITYSDK_OFFSET(0xCD517D0)

namespace NPCCrowd
{
	inline static constexpr unsigned int NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex = 74108;

	class NPCWPPathFinderDebuggerDrawSetting : public ::System::Object
	{
	public:
		static ::UnityEngine::Color* StaticGet_LineColorBack()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFFE0);
		}
		static ::UnityEngine::Color* StaticGet_LineColorForward()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0xFFF0);
		}
		static ::System::Single* StaticGet_NodeCapsuleRaidus()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10000);
		}
		static ::UnityEngine::Color* StaticGet_LineColorDisable()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10004);
		}
		static ::UnityEngine::Color* StaticGet_NodeColorDisable()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10014);
		}
		static ::System::Single* StaticGet_NodeCapsuleHalfHeight()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10024);
		}
		static ::UnityEngine::Color* StaticGet_NodeColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(NPCWPPathFinderDebuggerDrawSetting_TypeDefinitionIndex)->GetStaticField(0x10028);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_NPCWPPATHFINDERDEBUGGERDRAWSETTING__CCTOR_OFFSET))();
		}
	};
}
