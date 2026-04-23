#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C411A3DD6A930CFA.h"
#include "unitysdk/Class_2_2CE8D2E24888C5A6_Struct_2_5B0D006D59689DB8.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/RtBehaviorFlag.h"
#include "unitysdk/RPG/GameCore/RtModifierBehaviorLifeBinding.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_2CE8D2E24888C5A6_METHOD_2_06CBBB3CC85FFF5B_OFFSET UNITYSDK_OFFSET(0x1189B330)
#define CLASS_2_2CE8D2E24888C5A6_METHOD_2_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x1189B390)
#define CLASS_2_2CE8D2E24888C5A6_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x1189B730)
#define CLASS_2_2CE8D2E24888C5A6_METHOD_2_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1189B340)
#define CLASS_2_2CE8D2E24888C5A6_METHOD_2_BFE7DA77E60D9766_OFFSET UNITYSDK_OFFSET(0x1189B500)
#define CLASS_2_2CE8D2E24888C5A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1189B690)

inline static constexpr unsigned int Class_2_2CE8D2E24888C5A6_TypeDefinitionIndex = 49548;

class Class_2_2CE8D2E24888C5A6 : public ::Class_1_C411A3DD6A930CFA
{
public:
	::System::Collections::Generic::List_1<::Class_2_2CE8D2E24888C5A6_Struct_2_5B0D006D59689DB8>* Field_2_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CE8D2E24888C5A6__CTOR_OFFSET))(this);
	}

	::RPG::GameCore::RtModifierBehaviorLifeBinding Method_2_06CBBB3CC85FFF5B()
	{
		return ((::RPG::GameCore::RtModifierBehaviorLifeBinding(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CE8D2E24888C5A6_METHOD_2_06CBBB3CC85FFF5B_OFFSET))(this);
	}

	::System::Void Method_2_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CE8D2E24888C5A6_METHOD_2_6B72D4EE8C6E907F_OFFSET))(this);
	}

	::System::Void Method_2_BFE7DA77E60D9766(::RPG::GameCore::RtBehaviorFlag a1, ::RPG::GameCore::FixPoint a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RtBehaviorFlag, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + CLASS_2_2CE8D2E24888C5A6_METHOD_2_BFE7DA77E60D9766_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CE8D2E24888C5A6_METHOD_2_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2CE8D2E24888C5A6_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
