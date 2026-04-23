#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEntityValueGetterBase.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelEntityPredicateBase; }

#define RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER_METHOD_3_2C3B0C53557309E4_OFFSET UNITYSDK_OFFSET(0x187FA150)
#define RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER_METHOD_3_84764288F9F22056_OFFSET UNITYSDK_OFFSET(0x187FA0F0)
#define RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER__CTOR_OFFSET UNITYSDK_OFFSET(0x187FA140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityBranchValueGetter_TypeDefinitionIndex = 15085;

	class ChimeraDuelEntityBranchValueGetter : public ::RPG::GameCore::ChimeraDuelEntityValueGetterBase
	{
	public:
		::RPG::GameCore::ChimeraDuelEntityPredicateBase* Condition; // 0x10
		::RPG::GameCore::BaseChimeraDuelValueGetter* True; // 0x18
		::RPG::GameCore::BaseChimeraDuelValueGetter* False; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_84764288F9F22056(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER_METHOD_3_84764288F9F22056_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_2C3B0C53557309E4(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityBranchValueGetter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYBRANCHVALUEGETTER_METHOD_3_2C3B0C53557309E4_OFFSET))(a1, a2);
		}
	};
}
