#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AnimatorZoneProfiler_Active.h"
#include "unitysdk/AnimatorZoneProfiler_RowData.h"
#include "unitysdk/AnimatorZoneProfiler_ScopeDisposable.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }

#define ANIMATORZONEPROFILER_BEGIN_OFFSET UNITYSDK_OFFSET(0x106924A0)
#define ANIMATORZONEPROFILER_CLEAR_OFFSET UNITYSDK_OFFSET(0x10693190)
#define ANIMATORZONEPROFILER_END_OFFSET UNITYSDK_OFFSET(0x10692A30)
#define ANIMATORZONEPROFILER_ENSURECAPACITY_OFFSET UNITYSDK_OFFSET(0x10692180)
#define ANIMATORZONEPROFILER_GETSHORTPREFABNAME_OFFSET UNITYSDK_OFFSET(0x10692FD0)
#define ANIMATORZONEPROFILER_GET_USEANIMATORZONEPROFILER_OFFSET UNITYSDK_OFFSET(0x10693320)
#define ANIMATORZONEPROFILER_SAVEDATATOFILE_OFFSET UNITYSDK_OFFSET(0x106933E0)
#define ANIMATORZONEPROFILER_SCOPE_OFFSET UNITYSDK_OFFSET(0x10693080)
#define ANIMATORZONEPROFILER_SET_USEANIMATORZONEPROFILER_OFFSET UNITYSDK_OFFSET(0x10693380)
#define ANIMATORZONEPROFILER__CCTOR_OFFSET UNITYSDK_OFFSET(0x10694620)

inline static constexpr unsigned int AnimatorZoneProfiler_TypeDefinitionIndex = 69371;

class AnimatorZoneProfiler : public ::System::Object
{
public:
	static ::System::Object** StaticGet__rowsLock()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x2A4E0);
	}
	static ::Il2CppArray<::AnimatorZoneProfiler_RowData>** StaticGet__rows()
	{
		return (::Il2CppArray<::AnimatorZoneProfiler_RowData>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x2A4E8);
	}
	static ::System::Int32* StaticGet__rowCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x95A0);
	}
	static ::System::Single* StaticGet_SkipSmallCostThreshold()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x95A4);
	}
	static ::System::Boolean* StaticGet__useAnimatorZoneProfiler()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x95A8);
	}
	static ::System::Boolean* StaticGet_AutoSaveWhenReplay()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x95A9);
	}
	static ::System::Text::StringBuilder** StaticGet__scratch()
	{
		return (::System::Text::StringBuilder**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::Il2CppArray<::AnimatorZoneProfiler_Active>** StaticGet__stackArr()
	{
		return (::Il2CppArray<::AnimatorZoneProfiler_Active>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet__stackTop()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AnimatorZoneProfiler_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER__CCTOR_OFFSET))();
	}

	static ::System::Void EnsureCapacity(::System::Int32 rowCapacity, ::System::Int32 stackCapacity)
	{
		return ((::System::Void(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_ENSURECAPACITY_OFFSET))(rowCapacity, stackCapacity);
	}

	static ::System::Void Begin(::System::String* functionName, ::System::UInt32 entityID, ::System::String* animatorName)
	{
		return ((::System::Void(*)(::System::String*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_BEGIN_OFFSET))(functionName, entityID, animatorName);
	}

	static ::System::Void End()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_END_OFFSET))();
	}

	static ::System::String* GetShortPrefabName(::System::String* path)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_GETSHORTPREFABNAME_OFFSET))(path);
	}

	static ::AnimatorZoneProfiler_ScopeDisposable Scope(::System::String* functionName, ::System::UInt32 entityID, ::System::String* animatorName)
	{
		return ((::AnimatorZoneProfiler_ScopeDisposable(*)(::System::String*, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_SCOPE_OFFSET))(functionName, entityID, animatorName);
	}

	static ::System::Void Clear()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_CLEAR_OFFSET))();
	}

	static ::System::Boolean get_UseAnimatorZoneProfiler()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_GET_USEANIMATORZONEPROFILER_OFFSET))();
	}

	static ::System::Void set_UseAnimatorZoneProfiler(::System::Boolean value)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_SET_USEANIMATORZONEPROFILER_OFFSET))(value);
	}

	static ::System::String* SaveDataToFile(::System::String* filePrefix)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + ANIMATORZONEPROFILER_SAVEDATATOFILE_OFFSET))(filePrefix);
	}
};
