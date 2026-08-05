#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"

class DamageTextBGEffect_DamageTextEffectItem;
class DamageTextBGEffect_DamageTextItem;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define DAMAGETEXTBGEFFECT_DRAWMESHES_OFFSET UNITYSDK_OFFSET(0x1DDF2BB0)
#define DAMAGETEXTBGEFFECT_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1DDF2980)
#define DAMAGETEXTBGEFFECT_INIT_OFFSET UNITYSDK_OFFSET(0x1DDF2B50)
#define DAMAGETEXTBGEFFECT_REBUILDBLOCK_OFFSET UNITYSDK_OFFSET(0x1DDF2F70)
#define DAMAGETEXTBGEFFECT_REFRESH_OFFSET UNITYSDK_OFFSET(0x1DDF2CE0)
#define DAMAGETEXTBGEFFECT_SHOWEFFECT_OFFSET UNITYSDK_OFFSET(0x1DDF3250)
#define DAMAGETEXTBGEFFECT_UPDATETRANSFORM_OFFSET UNITYSDK_OFFSET(0x1DDF2E50)
#define DAMAGETEXTBGEFFECT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF3590)
#define DAMAGETEXTBGEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF2A70)

inline static constexpr unsigned int DamageTextBGEffect_TypeDefinitionIndex = 27484;

class DamageTextBGEffect : public ::System::Object
{
public:
	static ::DamageTextBGEffect** StaticGet_m_Instance()
	{
		return (::DamageTextBGEffect**)Il2CppClass::FromTypeDefinitionIndex(DamageTextBGEffect_TypeDefinitionIndex)->GetStaticField(0x22E20);
	}
	static ::System::Int32* StaticGet__UnityDamageTextTime()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextBGEffect_TypeDefinitionIndex)->GetStaticField(0x6230);
	}
	static ::System::Int32* StaticGet__Rotation()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextBGEffect_TypeDefinitionIndex)->GetStaticField(0x6234);
	}
	static ::System::Int32* StaticGet__ColorIndex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextBGEffect_TypeDefinitionIndex)->GetStaticField(0x6238);
	}
	static ::System::Int32* StaticGet__StartTime()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DamageTextBGEffect_TypeDefinitionIndex)->GetStaticField(0x623C);
	}
	// static const ::System::Int32 MaxSize = 0x3E8; // 0x0
	::System::Collections::Generic::List_1<::DamageTextBGEffect_DamageTextItem*>* _items; // 0x10
	::UnityEngine::Mesh* mesh; // 0x18
	::Il2CppArray<::UnityEngine::Matrix4x4>* matrices; // 0x20
	::UnityEngine::Material* material; // 0x28
	::Il2CppArray<::System::Single>* rotations; // 0x30
	::Il2CppArray<::System::Single>* colorIndexes; // 0x38
	::Il2CppArray<::System::Single>* times; // 0x40
	::UnityEngine::MaterialPropertyBlock* block; // 0x48
	::System::Boolean _isDirty; // 0x50
	::System::Int32 population; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT__CCTOR_OFFSET))();
	}

	static ::DamageTextBGEffect* get_instance()
	{
		return ((::DamageTextBGEffect*(*)())((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_GET_INSTANCE_OFFSET))();
	}

	::System::Void Init(::UnityEngine::Mesh* mesh, ::UnityEngine::Material* material)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_INIT_OFFSET))(this, mesh, material);
	}

	::System::Void DrawMeshes(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Single time)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Single))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_DRAWMESHES_OFFSET))(this, cmd, time);
	}

	::DamageTextBGEffect_DamageTextEffectItem* ShowEffect(::UnityEngine::Vector3 position, ::System::Single scale, ::System::Single colorIndex)
	{
		return ((::DamageTextBGEffect_DamageTextEffectItem*(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_SHOWEFFECT_OFFSET))(this, position, scale, colorIndex);
	}

	::System::Void Refresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_REFRESH_OFFSET))(this);
	}

	::System::Void UpdateTransform()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_UPDATETRANSFORM_OFFSET))(this);
	}

	::System::Void RebuildBlock()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMAGETEXTBGEFFECT_REBUILDBLOCK_OFFSET))(this);
	}
};
