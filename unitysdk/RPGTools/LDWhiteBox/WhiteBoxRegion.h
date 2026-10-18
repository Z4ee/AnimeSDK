#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/RegionType.h"
#include "unitysdk/RPGTools/LDWhiteBox/ShapeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Mesh; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_CLAMPWORLDPOINT_OFFSET UNITYSDK_OFFSET(0xE89E730)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0xE8A11F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE8A0BA0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DIRECTCHILDREGIONS_OFFSET UNITYSDK_OFFSET(0xE8A1550)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_HASCHILDREGIONS_OFFSET UNITYSDK_OFFSET(0xE8A13D0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_POLYGON_OFFSET UNITYSDK_OFFSET(0xE8A1210)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0xE8A0B60)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_REGIONNAME_OFFSET UNITYSDK_OFFSET(0xE8A0B80)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0xE8A0BC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xE8A1020)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_TYPE_OFFSET UNITYSDK_OFFSET(0xE8A13B0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_METHOD_5_091C4C13F53492F3_OFFSET UNITYSDK_OFFSET(0xE8A1600)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_METHOD_5_0BDFAC56E6B704CB_OFFSET UNITYSDK_OFFSET(0xE8A0D60)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_METHOD_5_C5E2731FD22E8593_OFFSET UNITYSDK_OFFSET(0xE8A1970)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_METHOD_5_E353146861B64DC3_OFFSET UNITYSDK_OFFSET(0xE8A18C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE8A1DC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE8A1BB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE8A1A90)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE8A1C30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0xE8A0EB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0xE8A1200)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE8A0BB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_POLYGON_OFFSET UNITYSDK_OFFSET(0xE8A1220)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0xE8A0B70)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_REGIONNAME_OFFSET UNITYSDK_OFFSET(0xE8A0B90)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0xE8A0BD0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xE8A1040)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_TYPE_OFFSET UNITYSDK_OFFSET(0xE8A13C0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__CTOR_OFFSET UNITYSDK_OFFSET(0xE8A1E20)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxRegion_TypeDefinitionIndex = 48959;

	class WhiteBoxRegion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _regionId; // 0x18
		::System::String* _regionName; // 0x20
		::System::String* _description; // 0x28
		::RPGTools::LDWhiteBox::ShapeType _shape; // 0x30
		::UnityEngine::Vector3 _size; // 0x34
		::System::Int32 _depth; // 0x40
		::Il2CppArray<::UnityEngine::Vector2>* _polygon; // 0x48
		::RPGTools::LDWhiteBox::RegionType _type; // 0x50
		::UnityEngine::Mesh* JJEOBACJEEO; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__CTOR_OFFSET))(this);
		}

		::System::String* get_RegionId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_REGIONID_OFFSET))(this);
		}

		::System::Void set_RegionId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_REGIONID_OFFSET))(this, a1);
		}

		::System::String* get_RegionName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_REGIONNAME_OFFSET))(this);
		}

		::System::Void set_RegionName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_REGIONNAME_OFFSET))(this, a1);
		}

		::System::String* get_Description()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Void set_Description(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_DESCRIPTION_OFFSET))(this, a1);
		}

		::RPGTools::LDWhiteBox::ShapeType get_Shape()
		{
			return ((::RPGTools::LDWhiteBox::ShapeType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_SHAPE_OFFSET))(this);
		}

		::System::Void set_Shape(::RPGTools::LDWhiteBox::ShapeType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::ShapeType))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_SHAPE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_Size()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_SIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_Depth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DEPTH_OFFSET))(this);
		}

		::System::Void set_Depth(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_DEPTH_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* get_Polygon()
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_POLYGON_OFFSET))(this);
		}

		::System::Void set_Polygon(::Il2CppArray<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_POLYGON_OFFSET))(this, a1);
		}

		::RPGTools::LDWhiteBox::RegionType get_Type()
		{
			return ((::RPGTools::LDWhiteBox::RegionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_TYPE_OFFSET))(this);
		}

		::System::Void set_Type(::RPGTools::LDWhiteBox::RegionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::LDWhiteBox::RegionType))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_TYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_HasChildRegions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_HASCHILDREGIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>* get_DirectChildRegions()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DIRECTCHILDREGIONS_OFFSET))(this);
		}

		::UnityEngine::Vector3 ClampWorldPoint(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_CLAMPWORLDPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_091C4C13F53492F3(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_METHOD_5_091C4C13F53492F3_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 Method_5_E353146861B64DC3(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_METHOD_5_E353146861B64DC3_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 Method_5_C5E2731FD22E8593(::System::Single a1, ::UnityEngine::Vector2 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_METHOD_5_C5E2731FD22E8593_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_0BDFAC56E6B704CB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_METHOD_5_0BDFAC56E6B704CB_OFFSET))(this);
		}

		::System::Void RebuildMesh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_REBUILDMESH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONVALIDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONDESTROY_OFFSET))(this);
		}
	};
}
