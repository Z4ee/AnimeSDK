#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/HexDirection.h"
#include "unitysdk/RPG/Client/Prop/InteractPuzzleBoardBase.h"
#include "unitysdk/Struct_2_2F8FC043285F98CD.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ADJACENTCOORDDIFFDIRECTION_OFFSET UNITYSDK_OFFSET(0xA09F990)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ADJACENTDIRECTION_OFFSET UNITYSDK_OFFSET(0xA09FB00)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTCOORD2POSITION2D_OFFSET UNITYSDK_OFFSET(0xA09F330)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTCOORD2POSITION_OFFSET UNITYSDK_OFFSET(0xA09F280)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTPOSITION2COORD2D_OFFSET UNITYSDK_OFFSET(0xA09F3C0)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DIRECTION2COORDDIFF_OFFSET UNITYSDK_OFFSET(0xA09F590)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA09F0D0)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DISTANCEBYDIRECTION_OFFSET UNITYSDK_OFFSET(0xA09FC10)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ISADJACENTCOORD_OFFSET UNITYSDK_OFFSET(0xA09F690)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE__CTOR_OFFSET UNITYSDK_OFFSET(0xA09FDA0)
#define RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE___IFIXBASEPROXY_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA0A0000)

namespace RPG::Client::Prop
{
	inline static constexpr unsigned int HexPuzzleBoardBase_TypeDefinitionIndex = 64059;

	class HexPuzzleBoardBase : public ::RPG::Client::Prop::InteractPuzzleBoardBase
	{
	public:
		::System::Single ItemUnit; // 0xB0
		::Struct_2_2F8FC043285F98CD Field_7_1; // 0xB4
		::Struct_2_2F8FC043285F98CD Field_7_2; // 0xBC
		::Struct_2_2F8FC043285F98CD Field_7_3; // 0xC4
		::Struct_2_2F8FC043285F98CD Field_7_4; // 0xCC
		::Struct_2_2F8FC043285F98CD Field_7_5; // 0xD4
		::Struct_2_2F8FC043285F98CD Field_7_6; // 0xDC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Vector3 ConvertCoord2Position(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTCOORD2POSITION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 ConvertCoord2Position2D(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTCOORD2POSITION2D_OFFSET))(this, a1, a2);
		}

		::Struct_2_2F8FC043285F98CD ConvertPosition2Coord2D(::UnityEngine::Vector2 a1)
		{
			return ((::Struct_2_2F8FC043285F98CD(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_CONVERTPOSITION2COORD2D_OFFSET))(this, a1);
		}

		::Struct_2_2F8FC043285F98CD Direction2CoordDiff(::RPG::Client::Prop::HexDirection a1)
		{
			return ((::Struct_2_2F8FC043285F98CD(*)(::PVOID, ::RPG::Client::Prop::HexDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DIRECTION2COORDDIFF_OFFSET))(this, a1);
		}

		::System::Boolean IsAdjacentCoord(::Struct_2_2F8FC043285F98CD a1, ::Struct_2_2F8FC043285F98CD a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_2F8FC043285F98CD, ::Struct_2_2F8FC043285F98CD))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ISADJACENTCOORD_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::HexDirection AdjacentCoordDiffDirection(::Struct_2_2F8FC043285F98CD a1, ::Struct_2_2F8FC043285F98CD a2)
		{
			return ((::RPG::Client::Prop::HexDirection(*)(::PVOID, ::Struct_2_2F8FC043285F98CD, ::Struct_2_2F8FC043285F98CD))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ADJACENTCOORDDIFFDIRECTION_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Prop::HexDirection AdjacentDirection(::RPG::Client::Prop::HexDirection a1, ::System::Boolean a2)
		{
			return ((::RPG::Client::Prop::HexDirection(*)(::PVOID, ::RPG::Client::Prop::HexDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_ADJACENTDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Int32 DistanceByDirection(::Struct_2_2F8FC043285F98CD a1, ::Struct_2_2F8FC043285F98CD a2, ::RPG::Client::Prop::HexDirection a3)
		{
			return ((::System::Int32(*)(::PVOID, ::Struct_2_2F8FC043285F98CD, ::Struct_2_2F8FC043285F98CD, ::RPG::Client::Prop::HexDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE_DISTANCEBYDIRECTION_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PROP_HEXPUZZLEBOARDBASE___IFIXBASEPROXY_DISPOSE_OFFSET))(this);
		}
	};
}
