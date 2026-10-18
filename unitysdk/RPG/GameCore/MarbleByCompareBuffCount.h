#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleCompare.h"
#include "unitysdk/RPG/GameCore/MarblePredicateConfig.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_METHOD_4_076E94C4F4A93C07_OFFSET UNITYSDK_OFFSET(0x1D80B060)
#define RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_METHOD_4_9A454B3103EE8EB1_OFFSET UNITYSDK_OFFSET(0x1D80AFF0)
#define RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D80B050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleByCompareBuffCount_TypeDefinitionIndex = 16883;

	class MarbleByCompareBuffCount : public ::RPG::GameCore::MarblePredicateConfig
	{
	public:
		::RPG::GameCore::MarbleTarget TargetType; // 0x28
		::RPG::GameCore::MarbleTarget BuffSourceType; // 0x2C
		::System::UInt32 BuffId; // 0x30
		::RPG::GameCore::MarbleCompare CompareType; // 0x34
		::System::Int32 Value; // 0x38
		::System::String* ValueDynamic; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_9A454B3103EE8EB1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareBuffCount*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareBuffCount*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_METHOD_4_9A454B3103EE8EB1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_076E94C4F4A93C07(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MarbleByCompareBuffCount* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MarbleByCompareBuffCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEBYCOMPAREBUFFCOUNT_METHOD_4_076E94C4F4A93C07_OFFSET))(a1, a2);
		}
	};
}
