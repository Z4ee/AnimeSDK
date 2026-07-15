#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirNodeType.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSNODEVIEWMODEL_GET_PREFABINDEX_OFFSET UNITYSDK_OFFSET(0x1A0C22A0)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSNODEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0C2350)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameProgressNodeViewModel_TypeDefinitionIndex = 75228;

	class PixAirGameProgressNodeViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::RPG::GameCore::PixAirNodeType NodeType; // 0x20
		::System::UInt32 NodeID; // 0x24

		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::PixAirNodeType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PixAirNodeType))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSNODEVIEWMODEL__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_PrefabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSNODEVIEWMODEL_GET_PREFABINDEX_OFFSET))(this);
		}
	};
}
