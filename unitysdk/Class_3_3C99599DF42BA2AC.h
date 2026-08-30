#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define CLASS_3_3C99599DF42BA2AC_METHOD_3_494C2941F93B6A63_OFFSET UNITYSDK_OFFSET(0x1C717740)
#define CLASS_3_3C99599DF42BA2AC_METHOD_3_A811EDB6C0C4A1C7_OFFSET UNITYSDK_OFFSET(0x1C717780)
#define CLASS_3_3C99599DF42BA2AC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C717770)

inline static constexpr unsigned int Class_3_3C99599DF42BA2AC_TypeDefinitionIndex = 19674;

class Class_3_3C99599DF42BA2AC : public ::RPG::GameCore::TaskConfig
{
public:
	::RPG::GameCore::DynamicFloat* GJCPNEECKPA; // 0x18
	::RPG::GameCore::DynamicFloat* JEDCEAGNOAI; // 0x20
	::RPG::GameCore::DynamicFloat* IBAMEPMGLPO; // 0x28
	::RPG::GameCore::DynamicFloat* HDJIPJCNGFG; // 0x30
	::RPG::GameCore::TargetEvaluator* HILNFHCPEAD; // 0x38
	::RPG::GameCore::DynamicFloat* GBBDAJLLLOA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3C99599DF42BA2AC__CTOR_OFFSET))(this);
	}

	static ::System::Void Method_3_494C2941F93B6A63(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3C99599DF42BA2AC*& a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3C99599DF42BA2AC*&))((::PBYTE)hIl2Cpp + CLASS_3_3C99599DF42BA2AC_METHOD_3_494C2941F93B6A63_OFFSET))(a1, a2);
	}

	static ::System::Void Method_3_A811EDB6C0C4A1C7(::Class_1_7A22A3DBEEDD1F80* a1, ::Class_3_3C99599DF42BA2AC* a2)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::Class_3_3C99599DF42BA2AC*))((::PBYTE)hIl2Cpp + CLASS_3_3C99599DF42BA2AC_METHOD_3_A811EDB6C0C4A1C7_OFFSET))(a1, a2);
	}
};
