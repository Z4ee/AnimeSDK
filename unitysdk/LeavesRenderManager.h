#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LeavesSystem;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define LEAVESRENDERMANAGER_DRAWLEAVESSHADOW_OFFSET UNITYSDK_OFFSET(0x1C5A0610)
#define LEAVESRENDERMANAGER_DRAWLEAVES_OFFSET UNITYSDK_OFFSET(0x1C5A0350)
#define LEAVESRENDERMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x1C5A00C0)
#define LEAVESRENDERMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x1C5A02A0)
#define LEAVESRENDERMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5A08D0)

inline static constexpr unsigned int LeavesRenderManager_TypeDefinitionIndex = 27775;

class LeavesRenderManager : public ::System::Object
{
public:
	static ::System::Collections::Generic::HashSet_1<::LeavesSystem*>** StaticGet__systems()
	{
		return (::System::Collections::Generic::HashSet_1<::LeavesSystem*>**)Il2CppClass::FromTypeDefinitionIndex(LeavesRenderManager_TypeDefinitionIndex)->GetStaticField(0x21C70);
	}
	static ::System::Int32* StaticGet__leafNormalsId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LeavesRenderManager_TypeDefinitionIndex)->GetStaticField(0x5360);
	}
	static ::System::Int32* StaticGet__leafUVsId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LeavesRenderManager_TypeDefinitionIndex)->GetStaticField(0x5364);
	}
	static ::System::Int32* StaticGet__leafPositionsId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(LeavesRenderManager_TypeDefinitionIndex)->GetStaticField(0x5368);
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
