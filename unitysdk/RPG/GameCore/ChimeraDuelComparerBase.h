#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELCOMPARERBASE_METHOD_2_004AE1F3B4955B15_OFFSET UNITYSDK_OFFSET(0x1E330570)
#define RPG_GAMECORE_CHIMERADUELCOMPARERBASE_METHOD_2_EF8EEEC0F188E310_OFFSET UNITYSDK_OFFSET(0x1E330110)
#define RPG_GAMECORE_CHIMERADUELCOMPARERBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E330630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelComparerBase_TypeDefinitionIndex = 15756;

	class ChimeraDuelComparerBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsAscend; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCOMPARERBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_EF8EEEC0F188E310(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelComparerBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelComparerBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCOMPARERBASE_METHOD_2_EF8EEEC0F188E310_OFFSET))(a1, a2);
		}

		static ::System::Void Method_2_004AE1F3B4955B15(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelComparerBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelComparerBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELCOMPARERBASE_METHOD_2_004AE1F3B4955B15_OFFSET))(a1, a2);
		}
	};
}
