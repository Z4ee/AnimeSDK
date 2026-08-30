#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/PillarPuzzle/PillarPuzzleBoard.h"
#include "unitysdk/RPG/Client/Prop/PillarPuzzle/PillarPuzzleNeighbourRelation.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDREVERSENEIGHBOUR_INITPILLARPROPS_OFFSET UNITYSDK_OFFSET(0xDCE0F00)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDREVERSENEIGHBOUR_METHOD_7_FEB104F83913DCF9_OFFSET UNITYSDK_OFFSET(0xDCE0AF0)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDREVERSENEIGHBOUR_ONPILLARHIT_OFFSET UNITYSDK_OFFSET(0xDCE1200)
#define RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDREVERSENEIGHBOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xDCE15B0)

namespace RPG::Client::Prop::PillarPuzzle
{
	inline static constexpr unsigned int PillarPuzzleBoardReverseNeighbour_TypeDefinitionIndex = 78497;

	class PillarPuzzleBoardReverseNeighbour : public ::RPG::Client::Prop::PillarPuzzle::PillarPuzzleBoard
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Prop::PillarPuzzle::PillarPuzzleNeighbourRelation>* NeighbourDefine; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>* MFDJFPNHAED; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDREVERSENEIGHBOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_7_FEB104F83913DCF9(::RPG::Client::Prop::PillarPuzzle::PillarPuzzleNeighbourRelation a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::PillarPuzzle::PillarPuzzleNeighbourRelation))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDREVERSENEIGHBOUR_METHOD_7_FEB104F83913DCF9_OFFSET))(this, a1);
		}

		::System::Boolean InitPillarProps()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDREVERSENEIGHBOUR_INITPILLARPROPS_OFFSET))(this);
		}

		::System::Void OnPillarHit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_PILLARPUZZLE_PILLARPUZZLEBOARDREVERSENEIGHBOUR_ONPILLARHIT_OFFSET))(this, a1);
		}
	};
}
