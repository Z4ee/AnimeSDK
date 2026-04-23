#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_REMOVESELFMODIFIER_METHOD_3_28C656195331A15C_OFFSET UNITYSDK_OFFSET(0x18CA5850)
#define RPG_GAMECORE_REMOVESELFMODIFIER_METHOD_3_E5B1454E9F2BCF10_OFFSET UNITYSDK_OFFSET(0x18CA5740)
#define RPG_GAMECORE_REMOVESELFMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x18CA5820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RemoveSelfModifier_TypeDefinitionIndex = 22451;

	class RemoveSelfModifier : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESELFMODIFIER__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E5B1454E9F2BCF10(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveSelfModifier*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveSelfModifier*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESELFMODIFIER_METHOD_3_E5B1454E9F2BCF10_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_28C656195331A15C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RemoveSelfModifier* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RemoveSelfModifier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_REMOVESELFMODIFIER_METHOD_3_28C656195331A15C_OFFSET))(a1, a2);
		}
	};
}
