#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Edge; }
namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { template <typename T> class Dict_1_Node; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ACTIVEREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F02B4D0)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int Tess_ActiveRegion_TypeDefinitionIndex = 29040;

	class Tess_ActiveRegion : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Dict_1_Node<::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::Tess_ActiveRegion*>* _nodeUp; // 0x10
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _eUp; // 0x18
		::System::Int32 _windingNumber; // 0x20
		::System::Boolean _inside; // 0x24
		::System::Boolean _fixUpperEdge; // 0x25
		::System::Boolean _dirty; // 0x26
		::System::Boolean _sentinel; // 0x27

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_TESS_ACTIVEREGION__CTOR_OFFSET))(this);
		}
	};
}
