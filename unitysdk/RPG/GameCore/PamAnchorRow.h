#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PamPlaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_PAMANCHORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D307B80)
#define RPG_GAMECORE_PAMANCHORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D307D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PamAnchorRow_TypeDefinitionIndex = 14199;

	class PamAnchorRow : public ::System::Object
	{
	public:
		::System::String* AnchorName; // 0x10
		::System::String* AreaName; // 0x18
		::System::UInt32 FloorID; // 0x20
		::RPG::GameCore::PamPlaceType PamPlaceType; // 0x24
		::System::UInt32 ID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMANCHORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PamAnchorRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PamAnchorRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PAMANCHORROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
