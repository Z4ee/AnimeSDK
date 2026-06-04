#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPSTATECASECONTAINER_METHOD_3_18B2B0489BD6381D_OFFSET UNITYSDK_OFFSET(0x19A9B870)
#define RPG_GAMECORE_PROPSTATECASECONTAINER_METHOD_3_A80055AD47D35142_OFFSET UNITYSDK_OFFSET(0x19A9B8B0)
#define RPG_GAMECORE_PROPSTATECASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9B8A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateCaseContainer_TypeDefinitionIndex = 16676;

	class PropStateCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::PropState Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_18B2B0489BD6381D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECASECONTAINER_METHOD_3_18B2B0489BD6381D_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_A80055AD47D35142(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECASECONTAINER_METHOD_3_A80055AD47D35142_OFFSET))(a1, a2);
		}
	};
}
