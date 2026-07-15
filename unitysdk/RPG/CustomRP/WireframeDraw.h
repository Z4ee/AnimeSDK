#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/MeshShape.h"
#include "unitysdk/RPG/CustomRP/WireframeDraw_ShapeIndex.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::CustomRP { class MeshLineData; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Transform; }

#define RPG_CUSTOMRP_WIREFRAMEDRAW_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x1D138FF0)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_BEGINADDDATA_OFFSET UNITYSDK_OFFSET(0x1D138FB0)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_DRAW_OFFSET UNITYSDK_OFFSET(0x1D139500)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_ENDADDDATA_OFFSET UNITYSDK_OFFSET(0x1D139320)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1D139A20)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_INIT_OFFSET UNITYSDK_OFFSET(0x1D138B90)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x1D139A30)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_UNINIT_OFFSET UNITYSDK_OFFSET(0x1D138E00)
#define RPG_CUSTOMRP_WIREFRAMEDRAW__CACHEINDEX_OFFSET UNITYSDK_OFFSET(0x1D139A40)
#define RPG_CUSTOMRP_WIREFRAMEDRAW__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D139CC0)
#define RPG_CUSTOMRP_WIREFRAMEDRAW__CLEARCOLLIDERDATA_OFFSET UNITYSDK_OFFSET(0x1D138EE0)
#define RPG_CUSTOMRP_WIREFRAMEDRAW__CONVERTMESH2LINE_OFFSET UNITYSDK_OFFSET(0x1D138C20)
#define RPG_CUSTOMRP_WIREFRAMEDRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D139BF0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int WireframeDraw_TypeDefinitionIndex = 36384;

	class WireframeDraw : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__MeshOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WireframeDraw_TypeDefinitionIndex)->GetStaticField(0x12AC0);
		}
		static ::System::Int32* StaticGet__Local2World()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WireframeDraw_TypeDefinitionIndex)->GetStaticField(0x12AC4);
		}
		::UnityEngine::Material* _ColliderDebugMat; // 0x10
		::UnityEngine::ComputeBuffer* _ColliderDataBuffer; // 0x18
		::System::Collections::Generic::List_1<::RPG::CustomRP::MeshLineData*>* _ColliderData; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _DynamicData; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _DefaultData; // 0x30
		::RPG::CustomRP::WireframeDraw_ShapeIndex _Capsule; // 0x38
		::RPG::CustomRP::WireframeDraw_ShapeIndex _Box; // 0x40
		::System::Boolean _IsDirty; // 0x48
		::System::Boolean _IsInit; // 0x49
		::RPG::CustomRP::WireframeDraw_ShapeIndex _Sphere; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW__CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW_INIT_OFFSET))(this);
		}

		::System::Void Uninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW_UNINIT_OFFSET))(this);
		}

		::System::Void BeginAddData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW_BEGINADDDATA_OFFSET))(this);
		}

		::System::Void AddObject(::RPG::CustomRP::MeshShape a1, ::UnityEngine::Transform* a2, ::UnityEngine::Mesh* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MeshShape, ::UnityEngine::Transform*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW_ADDOBJECT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndAddData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW_ENDADDDATA_OFFSET))(this);
		}

		::System::Void Draw()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW_DRAW_OFFSET))(this);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW_SET_ISDIRTY_OFFSET))(this, a1);
		}

		::System::Boolean _CacheIndex(::System::Int32 a1, ::System::Int32 a2, ::System::Collections::Generic::HashSet_1<::System::UInt64>* a3, ::Il2CppArray<::UnityEngine::Vector3>* a4, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW__CACHEINDEX_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void _ConvertMesh2Line(::UnityEngine::Mesh* a1, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a2, ::RPG::CustomRP::WireframeDraw_ShapeIndex& a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::RPG::CustomRP::WireframeDraw_ShapeIndex&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW__CONVERTMESH2LINE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ClearColliderData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW__CLEARCOLLIDERDATA_OFFSET))(this);
		}
	};
}
