#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class ActivityBenefitV2Round; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_DB550A66A78E02FD___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175E5D10)
#define CLASS_1_DB550A66A78E02FD___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175E5D50)
#define CLASS_1_DB550A66A78E02FD___C__ISALLREWARDCLAIMED_B__10_0_OFFSET UNITYSDK_OFFSET(0x175E5D60)

inline static constexpr unsigned int Class_1_DB550A66A78E02FD___c_TypeDefinitionIndex = 58672;

class Class_1_DB550A66A78E02FD___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::ActivityBenefitV2Round*, ::System::Boolean>** StaticGet___9__10_0()
	{
		return (::System::Func_2<::RPG::Client::ActivityBenefitV2Round*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB550A66A78E02FD___c_TypeDefinitionIndex)->GetStaticField(0x607B0);
	}
	static ::Class_1_DB550A66A78E02FD___c** StaticGet___9()
	{
		return (::Class_1_DB550A66A78E02FD___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DB550A66A78E02FD___c_TypeDefinitionIndex)->GetStaticField(0x607B8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DB550A66A78E02FD___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DB550A66A78E02FD___C__CTOR_OFFSET))(this);
	}

	::System::Boolean _IsAllRewardClaimed_b__10_0(::RPG::Client::ActivityBenefitV2Round* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ActivityBenefitV2Round*))((::PBYTE)hIl2Cpp + CLASS_1_DB550A66A78E02FD___C__ISALLREWARDCLAIMED_B__10_0_OFFSET))(this, a1);
	}
};
