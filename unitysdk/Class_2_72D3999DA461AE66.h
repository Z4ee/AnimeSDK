#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

#define CLASS_2_72D3999DA461AE66_CLEAR_OFFSET UNITYSDK_OFFSET(0x11E60CD0)
#define CLASS_2_72D3999DA461AE66_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x11E60C60)
#define CLASS_2_72D3999DA461AE66_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11E60D70)
#define CLASS_2_72D3999DA461AE66__CTOR_OFFSET UNITYSDK_OFFSET(0x11E60FC0)
#define CLASS_2_72D3999DA461AE66___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x11E60FD0)
#define CLASS_2_72D3999DA461AE66___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11E61060)

inline static constexpr unsigned int Class_2_72D3999DA461AE66_TypeDefinitionIndex = 60643;

class Class_2_72D3999DA461AE66 : public ::Class_1_7ACCB923E979A908
{
public:
	::System::UInt32 Field_2_2; // 0x20
	::RPG::Client::LittleGame::Match3::OpponentRole Field_2_0; // 0x24
	::System::UInt32 Field_2_1; // 0x28
	::System::Boolean Field_2_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D3999DA461AE66__CTOR_OFFSET))(this);
	}

	static ::Class_2_72D3999DA461AE66* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_72D3999DA461AE66*(*)())((::PBYTE)hIl2Cpp + CLASS_2_72D3999DA461AE66_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D3999DA461AE66_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D3999DA461AE66_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D3999DA461AE66___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_72D3999DA461AE66___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
