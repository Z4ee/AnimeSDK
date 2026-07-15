#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightOrbType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTORBTYPEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D06D050)
#define RPG_GAMECORE_GRIDFIGHTORBTYPEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D06D1D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOrbTypeRow_TypeDefinitionIndex = 12926;

	class GridFightOrbTypeRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::String* PrefabPath; // 0x18
		::RPG::GameCore::GridFightOrbType OrbType; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBTYPEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightOrbTypeRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightOrbTypeRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTORBTYPEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
