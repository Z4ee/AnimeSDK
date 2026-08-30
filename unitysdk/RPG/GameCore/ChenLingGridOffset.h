#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHENLINGGRIDOFFSET_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E019A60)
#define RPG_GAMECORE_CHENLINGGRIDOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E019BB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingGridOffset_TypeDefinitionIndex = 11028;

	class ChenLingGridOffset : public ::System::Object
	{
	public:
		::System::Int32 Y; // 0x10
		::System::Int32 X; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGRIDOFFSET__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChenLingGridOffset*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChenLingGridOffset*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGGRIDOFFSET_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
