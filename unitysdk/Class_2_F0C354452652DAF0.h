#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3207B23A0433048D.h"
#include "unitysdk/RPG/GameCore/AntiLockHPStrength.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_2_D2FCF5EED49DF647;
namespace RPG { template <typename T> class PoolList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_F0C354452652DAF0_METHOD_2_0655FE11CDCF9C94_OFFSET UNITYSDK_OFFSET(0x16F1FAD0)
#define CLASS_2_F0C354452652DAF0_METHOD_2_15A11EB4EAAB3892_OFFSET UNITYSDK_OFFSET(0x16F1FC90)
#define CLASS_2_F0C354452652DAF0_METHOD_2_610C113EB4C59B2D_OFFSET UNITYSDK_OFFSET(0x16F1FDB0)
#define CLASS_2_F0C354452652DAF0_METHOD_2_B2DD12A52EBDDA04_OFFSET UNITYSDK_OFFSET(0x16F1FD20)
#define CLASS_2_F0C354452652DAF0_METHOD_2_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x16F1FA30)
#define CLASS_2_F0C354452652DAF0__CTOR_OFFSET UNITYSDK_OFFSET(0x16F201B0)

inline static constexpr unsigned int Class_2_F0C354452652DAF0_TypeDefinitionIndex = 53939;

class Class_2_F0C354452652DAF0 : public ::Class_1_3207B23A0433048D
{
public:
	::System::Collections::Generic::List_1<::Class_2_D2FCF5EED49DF647*>* CABOBIEGMEM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C354452652DAF0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_EBEE0D0A222A8264()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F0C354452652DAF0_METHOD_2_EBEE0D0A222A8264_OFFSET))(this);
	}

	::System::Void Method_2_0655FE11CDCF9C94(::Class_2_D2FCF5EED49DF647* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D2FCF5EED49DF647*))((::PBYTE)hIl2Cpp + CLASS_2_F0C354452652DAF0_METHOD_2_0655FE11CDCF9C94_OFFSET))(this, a1);
	}

	::System::Void Method_2_15A11EB4EAAB3892(::Class_2_D2FCF5EED49DF647* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_D2FCF5EED49DF647*))((::PBYTE)hIl2Cpp + CLASS_2_F0C354452652DAF0_METHOD_2_15A11EB4EAAB3892_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_B2DD12A52EBDDA04(::RPG::GameCore::AntiLockHPStrength a1, ::RPG::GameCore::FixPoint& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AntiLockHPStrength, ::RPG::GameCore::FixPoint&))((::PBYTE)hIl2Cpp + CLASS_2_F0C354452652DAF0_METHOD_2_B2DD12A52EBDDA04_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_610C113EB4C59B2D(::RPG::GameCore::AntiLockHPStrength a1, ::RPG::GameCore::FixPoint& a2, ::RPG::PoolList_1<::System::String*>*& a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AntiLockHPStrength, ::RPG::GameCore::FixPoint&, ::RPG::PoolList_1<::System::String*>*&))((::PBYTE)hIl2Cpp + CLASS_2_F0C354452652DAF0_METHOD_2_610C113EB4C59B2D_OFFSET))(this, a1, a2, a3);
	}
};
