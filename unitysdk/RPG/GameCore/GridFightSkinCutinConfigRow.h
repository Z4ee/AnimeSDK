#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTSKINCUTINCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1980B9A0)
#define RPG_GAMECORE_GRIDFIGHTSKINCUTINCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1980BAD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSkinCutinConfigRow_TypeDefinitionIndex = 12916;

	class GridFightSkinCutinConfigRow : public ::System::Object
	{
	public:
		::System::String* CutinPath; // 0x10
		::System::UInt32 SkinID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKINCUTINCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::GridFightSkinCutinConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::GridFightSkinCutinConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSKINCUTINCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
