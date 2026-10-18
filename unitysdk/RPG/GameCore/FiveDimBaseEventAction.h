#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameBaseEventAction.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_3_084436BB35FBD693_OFFSET UNITYSDK_OFFSET(0x1D685540)
#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_3_4CBE1516C5E01907_OFFSET UNITYSDK_OFFSET(0x1D685500)
#define RPG_GAMECORE_FIVEDIMBASEEVENTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6804D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimBaseEventAction_TypeDefinitionIndex = 18644;

	class FiveDimBaseEventAction : public ::RPG::GameCore::LittleGameBaseEventAction
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4CBE1516C5E01907(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseEventAction*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventAction*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_3_4CBE1516C5E01907_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_084436BB35FBD693(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimBaseEventAction* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimBaseEventAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMBASEEVENTACTION_METHOD_3_084436BB35FBD693_OFFSET))(a1, a2);
		}
	};
}
