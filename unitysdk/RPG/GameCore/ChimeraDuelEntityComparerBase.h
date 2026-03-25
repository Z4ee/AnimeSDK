#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelComparerBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE_METHOD_3_2F2752BFA6007FBF_OFFSET UNITYSDK_OFFSET(0x1709AAC0)
#define RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE_METHOD_3_E078793C714C45E9_OFFSET UNITYSDK_OFFSET(0x1709ADC0)
#define RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1709AE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEntityComparerBase_TypeDefinitionIndex = 14623;

	class ChimeraDuelEntityComparerBase : public ::RPG::GameCore::ChimeraDuelComparerBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_2F2752BFA6007FBF(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityComparerBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityComparerBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE_METHOD_3_2F2752BFA6007FBF_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_E078793C714C45E9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelEntityComparerBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelEntityComparerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELENTITYCOMPARERBASE_METHOD_3_E078793C714C45E9_OFFSET))(a1, a2);
		}
	};
}
