#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ENTERPAGECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x196EA9C0)
#define RPG_GAMECORE_ENTERPAGECONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x196EAA70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnterPageConfigRow_TypeDefinitionIndex = 12595;

	class EnterPageConfigRow : public ::System::Object
	{
	public:
		::System::String* Key; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERPAGECONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::EnterPageConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::EnterPageConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTERPAGECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
