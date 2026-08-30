#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtAbilityProperty.h"
#include "unitysdk/RPG/GameCore/RtPropertyComponent_1.h"

namespace RPG::GameCore { class RtDamageConstConfig; }

#define CLASS_3_C22B3EED69F1AB77_METHOD_3_A5B6063FFC26FC8F_OFFSET UNITYSDK_OFFSET(0x19527F00)
#define CLASS_3_C22B3EED69F1AB77_METHOD_3_A743210993038E07_OFFSET UNITYSDK_OFFSET(0x19527E80)
#define CLASS_3_C22B3EED69F1AB77_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x19528140)
#define CLASS_3_C22B3EED69F1AB77_METHOD_3_EDB9ECA8983AED8E_OFFSET UNITYSDK_OFFSET(0x195281D0)
#define CLASS_3_C22B3EED69F1AB77__CCTOR_OFFSET UNITYSDK_OFFSET(0x19528190)
#define CLASS_3_C22B3EED69F1AB77__CTOR_OFFSET UNITYSDK_OFFSET(0x19528250)

inline static constexpr unsigned int Class_3_C22B3EED69F1AB77_TypeDefinitionIndex = 54413;

class Class_3_C22B3EED69F1AB77 : public ::RPG::GameCore::RtPropertyComponent_1<::RPG::GameCore::RtAbilityProperty>
{
public:
	::Il2CppArray<::RPG::GameCore::FixPoint>* DNEIEIHPAIF; // 0x38

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_C22B3EED69F1AB77__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C22B3EED69F1AB77__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::FixPoint Method_3_A743210993038E07(::RPG::GameCore::RtAbilityProperty a1)
	{
		return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::RtAbilityProperty))((::PBYTE)hIl2Cpp + CLASS_3_C22B3EED69F1AB77_METHOD_3_A743210993038E07_OFFSET))(this, a1);
	}

	::System::Void Method_3_A5B6063FFC26FC8F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C22B3EED69F1AB77_METHOD_3_A5B6063FFC26FC8F_OFFSET))(this);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C22B3EED69F1AB77_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	static ::System::Void Method_3_EDB9ECA8983AED8E(::RPG::GameCore::RtDamageConstConfig* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RtDamageConstConfig*))((::PBYTE)hIl2Cpp + CLASS_3_C22B3EED69F1AB77_METHOD_3_EDB9ECA8983AED8E_OFFSET))(a1);
	}
};
