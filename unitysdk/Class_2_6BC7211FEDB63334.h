#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

class Class_1_F2DCEB7D2C399774;

#define CLASS_2_6BC7211FEDB63334_CLEAR_OFFSET UNITYSDK_OFFSET(0x11AA8F40)
#define CLASS_2_6BC7211FEDB63334_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x11AA8ED0)
#define CLASS_2_6BC7211FEDB63334_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11AA8FE0)
#define CLASS_2_6BC7211FEDB63334__CTOR_OFFSET UNITYSDK_OFFSET(0x11AA9160)
#define CLASS_2_6BC7211FEDB63334___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x11AA9170)
#define CLASS_2_6BC7211FEDB63334___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x11AA9200)

inline static constexpr unsigned int Class_2_6BC7211FEDB63334_TypeDefinitionIndex = 60641;

class Class_2_6BC7211FEDB63334 : public ::Class_1_7ACCB923E979A908
{
public:
	::Class_1_F2DCEB7D2C399774* Field_2_1; // 0x20
	::RPG::Client::LittleGame::Match3::OpponentRole Field_2_2; // 0x28
	::System::Boolean Field_2_3; // 0x2C
	::System::UInt32 Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BC7211FEDB63334__CTOR_OFFSET))(this);
	}

	static ::Class_2_6BC7211FEDB63334* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_6BC7211FEDB63334*(*)())((::PBYTE)hIl2Cpp + CLASS_2_6BC7211FEDB63334_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BC7211FEDB63334_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BC7211FEDB63334_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BC7211FEDB63334___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6BC7211FEDB63334___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
