#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiAtomConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_3_3B868B7869B82123_OFFSET UNITYSDK_OFFSET(0x1D1A3B00)
#define RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_3_50FF91C50CB9236F_OFFSET UNITYSDK_OFFSET(0x1D1A3B60)
#define RPG_GAMECORE_MICONDITIONCONFIGBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1A3C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MiConditionConfigBase_TypeDefinitionIndex = 16876;

	class MiConditionConfigBase : public ::RPG::GameCore::MiAtomConfigBase
	{
	public:
		::System::Boolean Inverse; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_3B868B7869B82123(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiConditionConfigBase*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionConfigBase*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_3_3B868B7869B82123_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_50FF91C50CB9236F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MiConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MICONDITIONCONFIGBASE_METHOD_3_50FF91C50CB9236F_OFFSET))(a1, a2);
		}
	};
}
