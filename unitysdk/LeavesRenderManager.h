#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LeavesSystem;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define LEAVESRENDERMANAGER_DRAWLEAVESSHADOW_OFFSET UNITYSDK_OFFSET(0x1B167020)
#define LEAVESRENDERMANAGER_DRAWLEAVES_OFFSET UNITYSDK_OFFSET(0x1B166D60)
#define LEAVESRENDERMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1B166AD0)
#define LEAVESRENDERMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1B166CB0)
#define LEAVESRENDERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B1672E0)

inline static constexpr unsigned int LeavesRenderManager_TypeDefinitionIndex = 26304;

class LeavesRenderManager : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::LeavesSystem*>** StaticGet__systems()
	{
		return (::System::Collections::Generic::HashSet_1<::LeavesSystem*>**)Il2CppClass::FromTypeDefinitionIndex(LeavesRenderManager_TypeDefinitionIndex)->GetStaticField(0x20A70);
	}
	static ::System::Int32* StaticGet__leafNormalsId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LeavesRenderManager_TypeDefinitionIndex)->GetStaticField(0x54F0);
	}
	static ::System::Int32* StaticGet__leafPositionsId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LeavesRenderManager_TypeDefinitionIndex)->GetStaticField(0x54F4);
	}
	static ::System::Int32* StaticGet__leafUVsId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LeavesRenderManager_TypeDefinitionIndex)->GetStaticField(0x54F8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEAVESRENDERMANAGER__CCTOR_OFFSET))();
	}

	static ::System::Void Register(::LeavesSystem* sys)
	{
		return ((::System::Void(*)(::LeavesSystem*))((::PBYTE)hIl2Cpp + LEAVESRENDERMANAGER_REGISTER_OFFSET))(sys);
	}

	static ::System::Void Unregister(::LeavesSystem* sys)
	{
		return ((::System::Void(*)(::LeavesSystem*))((::PBYTE)hIl2Cpp + LEAVESRENDERMANAGER_UNREGISTER_OFFSET))(sys);
	}

	static ::System::Void DrawLeaves(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + LEAVESRENDERMANAGER_DRAWLEAVES_OFFSET))(cmd);
	}

	static ::System::Void DrawLeavesShadow(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + LEAVESRENDERMANAGER_DRAWLEAVESSHADOW_OFFSET))(cmd);
	}
};
