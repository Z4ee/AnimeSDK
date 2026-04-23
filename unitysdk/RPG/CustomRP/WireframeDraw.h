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

#define RPG_CUSTOMRP_WIREFRAMEDRAW_ADDOBJECT_OFFSET UNITYSDK_OFFSET(0x18183D00)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_BEGINADDDATA_OFFSET UNITYSDK_OFFSET(0x18183CC0)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_DRAW_OFFSET UNITYSDK_OFFSET(0x18184160)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_ENDADDDATA_OFFSET UNITYSDK_OFFSET(0x18183FD0)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x18184660)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_INIT_OFFSET UNITYSDK_OFFSET(0x181838A0)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0x18184670)
#define RPG_CUSTOMRP_WIREFRAMEDRAW_UNINIT_OFFSET UNITYSDK_OFFSET(0x18183B50)
#define RPG_CUSTOMRP_WIREFRAMEDRAW__CACHEINDEX_OFFSET UNITYSDK_OFFSET(0x18184680)
#define RPG_CUSTOMRP_WIREFRAMEDRAW__CCTOR_OFFSET UNITYSDK_OFFSET(0x18184880)
#define RPG_CUSTOMRP_WIREFRAMEDRAW__CLEARCOLLIDERDATA_OFFSET UNITYSDK_OFFSET(0x18183BF0)
#define RPG_CUSTOMRP_WIREFRAMEDRAW__CONVERTMESH2LINE_OFFSET UNITYSDK_OFFSET(0x18183940)
#define RPG_CUSTOMRP_WIREFRAMEDRAW__CTOR_OFFSET UNITYSDK_OFFSET(0x181847B0)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int WireframeDraw_TypeDefinitionIndex = 35302;

	class WireframeDraw : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet__MeshOffset()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WireframeDraw_TypeDefinitionIndex)->GetStaticField(0xE70);
		}
		static ::System::Int32* StaticGet__Local2World()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(WireframeDraw_TypeDefinitionIndex)->GetStaticField(0xE74);
		}
		::UnityEngine::ComputeBuffer* _ColliderDataBuffer; // 0x10
		::UnityEngine::Material* _ColliderDebugMat; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _DynamicData; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* _DefaultData; // 0x28
		::System::Collections::Generic::List_1<::RPG::CustomRP::MeshLineData*>* _ColliderData; // 0x30
		::RPG::CustomRP::WireframeDraw_ShapeIndex _Box; // 0x38
		::RPG::CustomRP::WireframeDraw_ShapeIndex _Capsule; // 0x40
		::RPG::CustomRP::WireframeDraw_ShapeIndex _Sphere; // 0x48
		::System::Boolean _IsDirty; // 0x50
		::System::Boolean _IsInit; // 0x51

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

		::System::Void AddObject(::RPG::CustomRP::MeshShape shape, ::UnityEngine::Transform* t, ::UnityEngine::Mesh* m)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::MeshShape, ::UnityEngine::Transform*, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW_ADDOBJECT_OFFSET))(this, shape, t, m);
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

		::System::Void set_IsDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW_SET_ISDIRTY_OFFSET))(this, value);
		}

		::System::Boolean _CacheIndex(::System::Int32 index0, ::System::Int32 index1, ::System::Collections::Generic::HashSet_1<::System::UInt64>* indexHash, ::Il2CppArray<::UnityEngine::Vector3>* vertexes, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::HashSet_1<::System::UInt64>*, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW__CACHEINDEX_OFFSET))(this, index0, index1, indexHash, vertexes, data);
		}

		::System::Void _ConvertMesh2Line(::UnityEngine::Mesh* m, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* data, ::RPG::CustomRP::WireframeDraw_ShapeIndex& shapeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::RPG::CustomRP::WireframeDraw_ShapeIndex&))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW__CONVERTMESH2LINE_OFFSET))(this, m, data, shapeIndex);
		}

		::System::Void _ClearColliderData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_WIREFRAMEDRAW__CLEARCOLLIDERDATA_OFFSET))(this);
		}
	};
}
