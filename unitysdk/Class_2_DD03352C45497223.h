#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_CA217ABF4E3B4F3F.h"

namespace RPG::GameCore { class BattleInstance; }

#define CLASS_2_DD03352C45497223_METHOD_2_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x10C8BE40)
#define CLASS_2_DD03352C45497223_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x10C8C030)
#define CLASS_2_DD03352C45497223_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10C8BF60)
#define CLASS_2_DD03352C45497223__CTOR_OFFSET UNITYSDK_OFFSET(0x10C8BFA0)
#define CLASS_2_DD03352C45497223__ONBIND_OFFSET UNITYSDK_OFFSET(0x10C8BE00)
#define CLASS_2_DD03352C45497223___IFIXBASEPROXY__ONBIND_OFFSET UNITYSDK_OFFSET(0x10C8BFD0)

inline static constexpr unsigned int Class_2_DD03352C45497223_TypeDefinitionIndex = 66847;

class Class_2_DD03352C45497223 : public ::Class_1_CA217ABF4E3B4F3F
{
public:
	::RPG::GameCore::BattleInstance* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD03352C45497223__CTOR_OFFSET))(this);
	}

	::System::Void _OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD03352C45497223__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_41A074549EF25F63()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD03352C45497223_METHOD_2_41A074549EF25F63_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD03352C45497223_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnBind()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD03352C45497223___IFIXBASEPROXY__ONBIND_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD03352C45497223_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
