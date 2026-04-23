#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_9DFEED9E47A49175.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_F20997ACFDF53B1A;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C379FCDDE92DF835_METHOD_2_2E50321FC620C67B_OFFSET UNITYSDK_OFFSET(0xA7A14C0)
#define CLASS_2_C379FCDDE92DF835_METHOD_2_323DCA18419DFB89_OFFSET UNITYSDK_OFFSET(0xA7A15C0)
#define CLASS_2_C379FCDDE92DF835_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0xA7A1930)
#define CLASS_2_C379FCDDE92DF835_METHOD_2_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xA7A1450)
#define CLASS_2_C379FCDDE92DF835_METHOD_2_AA85ECF0D69FF851_OFFSET UNITYSDK_OFFSET(0xA7A16E0)
#define CLASS_2_C379FCDDE92DF835_METHOD_2_B2DD12A52EBDDA04_OFFSET UNITYSDK_OFFSET(0xA7A1650)
#define CLASS_2_C379FCDDE92DF835__CTOR_OFFSET UNITYSDK_OFFSET(0xA7A18E0)

inline static constexpr unsigned int Class_2_C379FCDDE92DF835_TypeDefinitionIndex = 49506;

class Class_2_C379FCDDE92DF835 : public ::Class_1_9DFEED9E47A49175
{
public:
	::System::Collections::Generic::List_1<::Class_2_F20997ACFDF53B1A*>* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C379FCDDE92DF835__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C379FCDDE92DF835_METHOD_2_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_2_2E50321FC620C67B(::Class_2_F20997ACFDF53B1A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F20997ACFDF53B1A*))((::PBYTE)hIl2Cpp + CLASS_2_C379FCDDE92DF835_METHOD_2_2E50321FC620C67B_OFFSET))(this, a1);
	}

	::System::Void Method_2_323DCA18419DFB89(::Class_2_F20997ACFDF53B1A* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_F20997ACFDF53B1A*))((::PBYTE)hIl2Cpp + CLASS_2_C379FCDDE92DF835_METHOD_2_323DCA18419DFB89_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B2DD12A52EBDDA04(::RPG::GameCore::AntiLockHPStrength a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AntiLockHPStrength, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_C379FCDDE92DF835_METHOD_2_B2DD12A52EBDDA04_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_AA85ECF0D69FF851(::RPG::GameCore::AntiLockHPStrength a1, ::RPG::GameCore::FixPoint& a2, ::RPG::PoolList_1<::System::String*>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AntiLockHPStrength, ::RPG::GameCore::FixPoint&, ::RPG::PoolList_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_2_C379FCDDE92DF835_METHOD_2_AA85ECF0D69FF851_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C379FCDDE92DF835_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
