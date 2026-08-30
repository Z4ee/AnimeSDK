#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_ED6312566761D69A.h"

class Class_0_16E4307DCC419505_855;
namespace RPG::Client { class GridFightRole; }
namespace RPG::GameCore { class AvatarPropertyValue; }

#define CLASS_2_B9EF300C0A792A54_METHOD_2_C6998EF7892A3ACC_OFFSET UNITYSDK_OFFSET(0xBA20840)
#define CLASS_2_B9EF300C0A792A54_METHOD_2_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xBA200A0)
#define CLASS_2_B9EF300C0A792A54_METHOD_2_F7DA1F2BF31C250A_OFFSET UNITYSDK_OFFSET(0xBA21040)
#define CLASS_2_B9EF300C0A792A54__CTOR_OFFSET UNITYSDK_OFFSET(0xBA20070)

inline static constexpr unsigned int Class_2_B9EF300C0A792A54_TypeDefinitionIndex = 65201;

class Class_2_B9EF300C0A792A54 : public ::Class_1_ED6312566761D69A
{
public:
	::Class_0_16E4307DCC419505_855* BABBJILOOAL; // 0x20
	::RPG::Client::GridFightRole* IAHCEGHHCKB; // 0x28

	::System::Void _ctor(::RPG::Client::GridFightRole* a1, ::Class_0_16E4307DCC419505_855* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::Class_0_16E4307DCC419505_855*))((::PBYTE)hIl2Cpp + CLASS_2_B9EF300C0A792A54__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F0D9B6AAFF504D87()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B9EF300C0A792A54_METHOD_2_F0D9B6AAFF504D87_OFFSET))(this);
	}

	::System::Void Method_2_C6998EF7892A3ACC(::RPG::Client::GridFightRole* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightRole*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_B9EF300C0A792A54_METHOD_2_C6998EF7892A3ACC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_F7DA1F2BF31C250A(::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::AvatarPropertyValue*>*))((::PBYTE)hIl2Cpp + CLASS_2_B9EF300C0A792A54_METHOD_2_F7DA1F2BF31C250A_OFFSET))(this, a1);
	}
};
