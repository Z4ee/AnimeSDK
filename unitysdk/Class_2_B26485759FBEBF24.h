#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8A0BE42C657CE107.h"
#include "unitysdk/Class_2_B26485759FBEBF24_Struct_2_5B0D006D59689DB8.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_B26485759FBEBF24_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x170C1880)
#define CLASS_2_B26485759FBEBF24_METHOD_2_460F8AE6EF9687FD_OFFSET UNITYSDK_OFFSET(0x170C1890)
#define CLASS_2_B26485759FBEBF24_METHOD_2_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0x170C18E0)
#define CLASS_2_B26485759FBEBF24_METHOD_2_DCA73F64CF8EB701_OFFSET UNITYSDK_OFFSET(0x170C1A50)
#define CLASS_2_B26485759FBEBF24__CTOR_OFFSET UNITYSDK_OFFSET(0x170C1C50)

inline static constexpr unsigned int Class_2_B26485759FBEBF24_TypeDefinitionIndex = 53981;

class Class_2_B26485759FBEBF24 : public ::Class_1_8A0BE42C657CE107
{
public:
	::System::Collections::Generic::List_1<::Class_2_B26485759FBEBF24_Struct_2_5B0D006D59689DB8>* MJBKGGPAKHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B26485759FBEBF24__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B26485759FBEBF24_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_460F8AE6EF9687FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B26485759FBEBF24_METHOD_2_460F8AE6EF9687FD_OFFSET))(this);
	}

	::System::Void Method_2_DCA73F64CF8EB701(::RPG::GameCore::RtBehaviorFlag a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_B26485759FBEBF24_METHOD_2_DCA73F64CF8EB701_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B26485759FBEBF24_METHOD_2_85377D41FEE05B66_OFFSET))(this);
	}
};
