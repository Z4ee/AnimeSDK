#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"

namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_2_3AD4B3AB957F5343_CLEAR_OFFSET UNITYSDK_OFFSET(0xA61FF30)
#define CLASS_2_3AD4B3AB957F5343_METHOD_2_936773021FAF4D21_OFFSET UNITYSDK_OFFSET(0xA620170)
#define CLASS_2_3AD4B3AB957F5343_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0xA61FEC0)
#define CLASS_2_3AD4B3AB957F5343_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA620070)
#define CLASS_2_3AD4B3AB957F5343__CTOR_OFFSET UNITYSDK_OFFSET(0xA620260)
#define CLASS_2_3AD4B3AB957F5343___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xA620270)
#define CLASS_2_3AD4B3AB957F5343___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xA6202F0)

inline static constexpr unsigned int Class_2_3AD4B3AB957F5343_TypeDefinitionIndex = 61596;

class Class_2_3AD4B3AB957F5343 : public ::Class_1_3713064DEE761936
{
public:
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD4B3AB957F5343__CTOR_OFFSET))(this);
	}

	static ::Class_2_3AD4B3AB957F5343* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_3AD4B3AB957F5343*(*)())((::PBYTE)hIl2Cpp + CLASS_2_3AD4B3AB957F5343_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD4B3AB957F5343_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD4B3AB957F5343_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_936773021FAF4D21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD4B3AB957F5343_METHOD_2_936773021FAF4D21_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD4B3AB957F5343___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3AD4B3AB957F5343___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
