#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HeroBaseType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHANGEHEROBASICTYPE_METHOD_3_647648FD1F2CA112_OFFSET UNITYSDK_OFFSET(0x19604380)
#define RPG_GAMECORE_CHANGEHEROBASICTYPE_METHOD_3_FF7D736561D83CD1_OFFSET UNITYSDK_OFFSET(0x19604400)
#define RPG_GAMECORE_CHANGEHEROBASICTYPE__CTOR_OFFSET UNITYSDK_OFFSET(0x196043D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeHeroBasicType_TypeDefinitionIndex = 19734;

	class ChangeHeroBasicType : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::HeroBaseType BasicType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROBASICTYPE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_647648FD1F2CA112(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeHeroBasicType*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeHeroBasicType*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROBASICTYPE_METHOD_3_647648FD1F2CA112_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_FF7D736561D83CD1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChangeHeroBasicType* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChangeHeroBasicType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEHEROBASICTYPE_METHOD_3_FF7D736561D83CD1_OFFSET))(a1, a2);
		}
	};
}
