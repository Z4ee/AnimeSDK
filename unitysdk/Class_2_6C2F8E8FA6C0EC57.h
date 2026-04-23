#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/BaseLeverSwitchSystem_1.h"

class Class_1_4D11CE62B2BEC69E;
class Class_2_0C58AD91B0F4D809;
class Class_3_D6E9A038FA23103A;
namespace System { class String; }

#define CLASS_2_6C2F8E8FA6C0EC57_METHOD_2_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB227410)
#define CLASS_2_6C2F8E8FA6C0EC57__CREATEINTERACTTRIGGER_OFFSET UNITYSDK_OFFSET(0xB2274D0)
#define CLASS_2_6C2F8E8FA6C0EC57__CREATEPROPMOVETRIGGER_OFFSET UNITYSDK_OFFSET(0xB227740)
#define CLASS_2_6C2F8E8FA6C0EC57__CTOR_OFFSET UNITYSDK_OFFSET(0xB2270B0)
#define CLASS_2_6C2F8E8FA6C0EC57__ONLEVELVARCHANGE_OFFSET UNITYSDK_OFFSET(0xB227790)
#define CLASS_2_6C2F8E8FA6C0EC57__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB227450)
#define CLASS_2_6C2F8E8FA6C0EC57___CREATEINTERACTTRIGGER_B__3_0_OFFSET UNITYSDK_OFFSET(0xB227900)
#define CLASS_2_6C2F8E8FA6C0EC57___IFIXBASEPROXY__ONLEVELVARCHANGE_OFFSET UNITYSDK_OFFSET(0xB2279C0)
#define CLASS_2_6C2F8E8FA6C0EC57___IFIXBASEPROXY__TEARDOWN_OFFSET UNITYSDK_OFFSET(0xB227940)

inline static constexpr unsigned int Class_2_6C2F8E8FA6C0EC57_TypeDefinitionIndex = 70496;

class Class_2_6C2F8E8FA6C0EC57 : public ::RPG::Client::LittleGame::FiveDim::BaseLeverSwitchSystem_1<::Class_2_0C58AD91B0F4D809*>
{
public:
	::Class_1_4D11CE62B2BEC69E* Field_2_0; // 0x40
	::Class_3_D6E9A038FA23103A* Field_2_1; // 0x48

	::System::Void _ctor(::Class_1_4D11CE62B2BEC69E* a1, ::Class_3_D6E9A038FA23103A* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_4D11CE62B2BEC69E*, ::Class_3_D6E9A038FA23103A*))((::PBYTE)hIl2Cpp + CLASS_2_6C2F8E8FA6C0EC57__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C2F8E8FA6C0EC57_METHOD_2_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Void _TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C2F8E8FA6C0EC57__TEARDOWN_OFFSET))(this);
	}

	::System::Void _CreateInteractTrigger(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_6C2F8E8FA6C0EC57__CREATEINTERACTTRIGGER_OFFSET))(this, a1);
	}

	::System::Void _CreatePropMoveTrigger(::Class_2_0C58AD91B0F4D809* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_6C2F8E8FA6C0EC57__CREATEPROPMOVETRIGGER_OFFSET))(this, a1);
	}

	::System::Void _OnLevelVarChange(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6C2F8E8FA6C0EC57__ONLEVELVARCHANGE_OFFSET))(this, a1, a2);
	}

	::System::Void __CreateInteractTrigger_b__3_0(::Class_2_0C58AD91B0F4D809* entity)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_0C58AD91B0F4D809*))((::PBYTE)hIl2Cpp + CLASS_2_6C2F8E8FA6C0EC57___CREATEINTERACTTRIGGER_B__3_0_OFFSET))(this, entity);
	}

	::System::Void __iFixBaseProxy__TearDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C2F8E8FA6C0EC57___IFIXBASEPROXY__TEARDOWN_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy__OnLevelVarChange(::System::Int32 P0, ::System::String* P1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_6C2F8E8FA6C0EC57___IFIXBASEPROXY__ONLEVELVARCHANGE_OFFSET))(this, P0, P1);
	}
};
