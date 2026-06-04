#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PixAirNodeType.h"
#include "unitysdk/Sofa/BaseViewModel.h"

#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSNODEVIEWMODEL_GET_PREFABINDEX_OFFSET UNITYSDK_OFFSET(0xC3CE540)
#define RPG_CLIENT_PIXAIR_PIXAIRGAMEPROGRESSNODEVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC3CE6B0)

namespace RPG::Client::PixAir
{
	inline static constexpr unsigned int PixAirGameProgressNodeViewModel_TypeDefinitionIndex = 73579;

	class PixAirGameProgressNodeViewModel : public ::Sofa::BaseViewModel
	{
	public:
		::System::UInt32 NodeID; // 0x20
		::RPG::GameCore::PixAirNodeType NodeType; // 0x24

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
