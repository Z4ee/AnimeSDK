#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ByCompareTargetCount.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_5B8CA36E650502A0_OFFSET UNITYSDK_OFFSET(0x1701B100)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_BBD46184320FD67F_OFFSET UNITYSDK_OFFSET(0x1701AE70)
#define RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY__CTOR_OFFSET UNITYSDK_OFFSET(0x1701AE20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareTargetCountClientOnly_TypeDefinitionIndex = 21760;

	class ByCompareTargetCountClientOnly : public ::RPG::GameCore::ByCompareTargetCount
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_5_5B8CA36E650502A0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetCountClientOnly*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_5B8CA36E650502A0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_5_BBD46184320FD67F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ByCompareTargetCountClientOnly* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ByCompareTargetCountClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARETARGETCOUNTCLIENTONLY_METHOD_5_BBD46184320FD67F_OFFSET))(a1, a2);
		}
	};
}
