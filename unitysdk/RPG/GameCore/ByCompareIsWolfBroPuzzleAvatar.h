#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_1B849C81FD466AB5_OFFSET UNITYSDK_OFFSET(0x18730E00)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_721442199BE8E7DF_OFFSET UNITYSDK_OFFSET(0x18730ED0)
#define RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR__CTOR_OFFSET UNITYSDK_OFFSET(0x18730E80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareIsWolfBroPuzzleAvatar_TypeDefinitionIndex = 20846;

	class ByCompareIsWolfBroPuzzleAvatar : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_1B849C81FD466AB5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_1B849C81FD466AB5_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_721442199BE8E7DF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareIsWolfBroPuzzleAvatar*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPAREISWOLFBROPUZZLEAVATAR_METHOD_4_721442199BE8E7DF_OFFSET))(a1, a2);
		}
	};
}
