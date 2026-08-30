#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinAmplificationTarget.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define CLASS_3_E07F892406E397FF_METHOD_3_8C07A6A51F854693_OFFSET UNITYSDK_OFFSET(0x1D845750)
#define CLASS_3_E07F892406E397FF_METHOD_3_C6AAD90EBB6BB822_OFFSET UNITYSDK_OFFSET(0x1D845710)
#define CLASS_3_E07F892406E397FF__CTOR_OFFSET UNITYSDK_OFFSET(0x1D845740)

inline static constexpr unsigned int Class_3_E07F892406E397FF_TypeDefinitionIndex = 19687;

class Class_3_E07F892406E397FF : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::StringHash BBBAMBGCGPL; // 0x18
	::RPG::GameCore::FateRinAmplificationTarget MCLLALGABAB; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E07F892406E397FF__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_C6AAD90EBB6BB822(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E07F892406E397FF*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E07F892406E397FF*&))((::PBYTE)hIl2Cpp + CLASS_3_E07F892406E397FF_METHOD_3_C6AAD90EBB6BB822_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_8C07A6A51F854693(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_E07F892406E397FF* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_E07F892406E397FF*))((::PBYTE)hIl2Cpp + CLASS_3_E07F892406E397FF_METHOD_3_8C07A6A51F854693_OFFSET))(a1, a2);
	}
};
