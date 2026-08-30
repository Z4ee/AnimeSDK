#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_NUMBERCASECONTAINER_METHOD_3_29BB0D7CF7379E86_OFFSET UNITYSDK_OFFSET(0x1CE94420)
#define RPG_GAMECORE_NUMBERCASECONTAINER_METHOD_3_F0E5223BF31F96E1_OFFSET UNITYSDK_OFFSET(0x1CE943E0)
#define RPG_GAMECORE_NUMBERCASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE94410)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NumberCaseContainer_TypeDefinitionIndex = 17337;

	class NumberCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::DynamicFloat* Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBERCASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F0E5223BF31F96E1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NumberCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NumberCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBERCASECONTAINER_METHOD_3_F0E5223BF31F96E1_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_29BB0D7CF7379E86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::NumberCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::NumberCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NUMBERCASECONTAINER_METHOD_3_29BB0D7CF7379E86_OFFSET))(a1, a2);
		}
	};
}
