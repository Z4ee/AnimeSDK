#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLESEALBUFFROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D4B1090)
#define RPG_GAMECORE_MARBLESEALBUFFROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4B1680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSealBuffRow_TypeDefinitionIndex = 11826;

	class MarbleSealBuffRow : public ::System::Object
	{
	public:
		::System::String* AssetsPath; // 0x10
		::System::UInt32 ID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleSealBuffRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleSealBuffRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESEALBUFFROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
