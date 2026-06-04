#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUETOURNCOLLECTIONLOADEDPOSTPROCESS_METHOD_3_3A0F24F19B355061_OFFSET UNITYSDK_OFFSET(0x19BC3740)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONLOADEDPOSTPROCESS_METHOD_3_8D7E59336DEE8CF5_OFFSET UNITYSDK_OFFSET(0x19BC3850)
#define RPG_GAMECORE_ROGUETOURNCOLLECTIONLOADEDPOSTPROCESS__CTOR_OFFSET UNITYSDK_OFFSET(0x19BC3820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournCollectionLoadedPostProcess_TypeDefinitionIndex = 20892;

	class RogueTournCollectionLoadedPostProcess : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONLOADEDPOSTPROCESS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3A0F24F19B355061(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournCollectionLoadedPostProcess*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCollectionLoadedPostProcess*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONLOADEDPOSTPROCESS_METHOD_3_3A0F24F19B355061_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8D7E59336DEE8CF5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueTournCollectionLoadedPostProcess* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueTournCollectionLoadedPostProcess*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNCOLLECTIONLOADEDPOSTPROCESS_METHOD_3_8D7E59336DEE8CF5_OFFSET))(a1, a2);
		}
	};
}
