#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet { class MeshUtils_Edge; }

#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGEPAIR_CREATE_OFFSET UNITYSDK_OFFSET(0x1F0294C0)
#define FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGEPAIR_RESET_OFFSET UNITYSDK_OFFSET(0x3C9050)

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int MeshUtils_EdgePair_TypeDefinitionIndex = 29031;

	struct alignas(8) MeshUtils_EdgePair
	{
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _e; // 0x10
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_Edge* _eSym; // 0x18

		static ::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_EdgePair Create()
		{
			return ((::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::MeshUtils_EdgePair(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGEPAIR_CREATE_OFFSET))();
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_THIRDPARTY_LIBTESSDOTNET_MESHUTILS_EDGEPAIR_RESET_OFFSET))(this);
		}
	};
}
