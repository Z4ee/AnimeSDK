#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/LDWhiteBox/ShapeType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Mesh; }

#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DEPTH_OFFSET UNITYSDK_OFFSET(0xE804FA0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE804D30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DIRECTCHILDREGIONS_OFFSET UNITYSDK_OFFSET(0xE805140)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_HASCHILDREGIONS_OFFSET UNITYSDK_OFFSET(0xE804FC0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_REGIONID_OFFSET UNITYSDK_OFFSET(0xE804CF0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_REGIONNAME_OFFSET UNITYSDK_OFFSET(0xE804D10)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_SHAPE_OFFSET UNITYSDK_OFFSET(0xE804D50)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_SIZE_OFFSET UNITYSDK_OFFSET(0xE804F10)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE8053E0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE805310)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE8051F0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xE805390)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_REBUILDMESH_OFFSET UNITYSDK_OFFSET(0xE804DB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_DEPTH_OFFSET UNITYSDK_OFFSET(0xE804FB0)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0xE804D40)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_REGIONID_OFFSET UNITYSDK_OFFSET(0xE804D00)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_REGIONNAME_OFFSET UNITYSDK_OFFSET(0xE804D20)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_SHAPE_OFFSET UNITYSDK_OFFSET(0xE804D60)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_SET_SIZE_OFFSET UNITYSDK_OFFSET(0xE804F30)
#define RPGTOOLS_LDWHITEBOX_WHITEBOXREGION__CTOR_OFFSET UNITYSDK_OFFSET(0xE805440)

namespace RPGTools::LDWhiteBox
{
	inline static constexpr unsigned int WhiteBoxRegion_TypeDefinitionIndex = 49387;

	class WhiteBoxRegion : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::String* _regionId; // 0x18
		::System::String* _regionName; // 0x20
		::System::String* _description; // 0x28
		::RPGTools::LDWhiteBox::ShapeType _shape; // 0x30
		::UnityEngine::Vector3 _size; // 0x34
		::System::Int32 _depth; // 0x40
		::UnityEngine::Mesh* JJEOBACJEEO; // 0x48

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

		::System::Boolean get_HasChildRegions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_HASCHILDREGIONS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>* get_DirectChildRegions()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPGTools::LDWhiteBox::WhiteBoxRegion*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_LDWHITEBOX_WHITEBOXREGION_GET_DIRECTCHILDREGIONS_OFFSET))(this);
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
