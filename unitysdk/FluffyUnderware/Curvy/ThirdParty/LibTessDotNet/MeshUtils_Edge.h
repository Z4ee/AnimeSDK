#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/MeshUtils_EdgePair.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/MeshUtils_Pooled_1.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Face; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Vertex; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class Tess_ActiveRegion; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_ENSUREFIRST_OFFSET UNITYSDK_OFFSET(0x1F02AA50)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DNEXT_OFFSET UNITYSDK_OFFSET(0x1F02ABD0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DPREV_OFFSET UNITYSDK_OFFSET(0x1F02AB50)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DST_OFFSET UNITYSDK_OFFSET(0x1F028A50)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__LPREV_OFFSET UNITYSDK_OFFSET(0x1F02A8F0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__OPREV_OFFSET UNITYSDK_OFFSET(0x1F029E40)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RFACE_OFFSET UNITYSDK_OFFSET(0x1F029E20)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RNEXT_OFFSET UNITYSDK_OFFSET(0x1F02AC30)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RPREV_OFFSET UNITYSDK_OFFSET(0x1F02AB90)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_RESET_OFFSET UNITYSDK_OFFSET(0x1F02AC90)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DNEXT_OFFSET UNITYSDK_OFFSET(0x1F02AC00)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DPREV_OFFSET UNITYSDK_OFFSET(0x1F02AB70)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DST_OFFSET UNITYSDK_OFFSET(0x1F02A130)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__LPREV_OFFSET UNITYSDK_OFFSET(0x1F02AB30)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__OPREV_OFFSET UNITYSDK_OFFSET(0x1F02AB10)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RFACE_OFFSET UNITYSDK_OFFSET(0x1F02A150)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RNEXT_OFFSET UNITYSDK_OFFSET(0x1F02AC60)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RPREV_OFFSET UNITYSDK_OFFSET(0x1F02ABB0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F02ACC0)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_Edge_TypeDefinitionIndex = 29032;

	class MeshUtils_Edge : public ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Pooled_1<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*>
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* _Org; // 0x10
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _Sym; // 0x18
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _next; // 0x20
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _Lnext; // 0x28
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion* _activeRegion; // 0x30
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* _Lface; // 0x38
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_EdgePair _pair; // 0x40
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _Onext; // 0x50
		::System::Int32 _winding; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* get__Rface()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RFACE_OFFSET))(this);
		}

		::System::Void set__Rface(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Face*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RFACE_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* get__Dst()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DST_OFFSET))(this);
		}

		::System::Void set__Dst(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Vertex*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DST_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* get__Oprev()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__OPREV_OFFSET))(this);
		}

		::System::Void set__Oprev(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__OPREV_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* get__Lprev()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__LPREV_OFFSET))(this);
		}

		::System::Void set__Lprev(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__LPREV_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* get__Dprev()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DPREV_OFFSET))(this);
		}

		::System::Void set__Dprev(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DPREV_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* get__Rprev()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RPREV_OFFSET))(this);
		}

		::System::Void set__Rprev(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RPREV_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* get__Dnext()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__DNEXT_OFFSET))(this);
		}

		::System::Void set__Dnext(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__DNEXT_OFFSET))(this, value);
		}

		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* get__Rnext()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_GET__RNEXT_OFFSET))(this);
		}

		::System::Void set__Rnext(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* value)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_SET__RNEXT_OFFSET))(this, value);
		}

		static ::System::Void EnsureFirst(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*& e)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge*&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_ENSUREFIRST_OFFSET))(e);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGE_RESET_OFFSET))(this);
		}
	};
}
