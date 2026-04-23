#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class IAvatarInfoProvider; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_8D9283070439813F___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xF2DDB80)
#define CLASS_1_8D9283070439813F___C__DISPLAYCLASS1_0__PREFERTRUE_B__0_OFFSET UNITYSDK_OFFSET(0xF2DE210)

inline static constexpr unsigned int Class_1_8D9283070439813F___c__DisplayClass1_0_TypeDefinitionIndex = 57860;

class Class_1_8D9283070439813F___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Func_2<::RPG::Client::IAvatarInfoProvider*, ::System::Boolean>* isTrue; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D9283070439813F___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Int32 _PreferTrue_b__0(::RPG::Client::IAvatarInfoProvider* left, ::RPG::Client::IAvatarInfoProvider* right)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::IAvatarInfoProvider*))((::PBYTE)hIl2Cpp + CLASS_1_8D9283070439813F___C__DISPLAYCLASS1_0__PREFERTRUE_B__0_OFFSET))(this, left, right);
	}
};
