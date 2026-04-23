#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/RtPropertyComponent_1.h"

namespace RPG::GameCore { class RtDamageConstConfig; }

#define CLASS_3_709BBC1863417E95_METHOD_3_03BFDB1C3240A55A_OFFSET UNITYSDK_OFFSET(0x98E33D0)
#define CLASS_3_709BBC1863417E95_METHOD_3_7AC4069870EB5AD0_OFFSET UNITYSDK_OFFSET(0x98E36E0)
#define CLASS_3_709BBC1863417E95_METHOD_3_A743210993038E07_OFFSET UNITYSDK_OFFSET(0x98E3350)
#define CLASS_3_709BBC1863417E95_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x98E3650)
#define CLASS_3_709BBC1863417E95__CCTOR_OFFSET UNITYSDK_OFFSET(0x98E36A0)
#define CLASS_3_709BBC1863417E95__CTOR_OFFSET UNITYSDK_OFFSET(0x98E3760)

inline static constexpr unsigned int Class_3_709BBC1863417E95_TypeDefinitionIndex = 49980;

class Class_3_709BBC1863417E95 : public ::RPG::GameCore::RtPropertyComponent_1<::RPG::GameCore::RtAbilityProperty>
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* Field_3_0; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_709BBC1863417E95__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_709BBC1863417E95__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_A743210993038E07(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_3_709BBC1863417E95_METHOD_3_A743210993038E07_OFFSET))(this, a1);
	}

	::System::Void Method_3_03BFDB1C3240A55A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_709BBC1863417E95_METHOD_3_03BFDB1C3240A55A_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_709BBC1863417E95_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_7AC4069870EB5AD0(::RPG::GameCore::RtDamageConstConfig* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RtDamageConstConfig*))((::PBYTE)hIl2Cpp + CLASS_3_709BBC1863417E95_METHOD_3_7AC4069870EB5AD0_OFFSET))(a1);
	}
};
