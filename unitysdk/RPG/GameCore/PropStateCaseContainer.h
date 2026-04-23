#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CaseContainerBase.h"
#include "unitysdk/RPG/GameCore/PropState.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PROPSTATECASECONTAINER_METHOD_3_3BB382A3CB312270_OFFSET UNITYSDK_OFFSET(0x18C79380)
#define RPG_GAMECORE_PROPSTATECASECONTAINER_METHOD_3_8729C230C75962B3_OFFSET UNITYSDK_OFFSET(0x18C79340)
#define RPG_GAMECORE_PROPSTATECASECONTAINER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C79370)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateCaseContainer_TypeDefinitionIndex = 16646;

	class PropStateCaseContainer : public ::RPG::GameCore::CaseContainerBase
	{
	public:
		::RPG::GameCore::PropState Case; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECASECONTAINER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8729C230C75962B3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateCaseContainer*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateCaseContainer*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECASECONTAINER_METHOD_3_8729C230C75962B3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_3BB382A3CB312270(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PropStateCaseContainer* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PropStateCaseContainer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECASECONTAINER_METHOD_3_3BB382A3CB312270_OFFSET))(a1, a2);
		}
	};
}
