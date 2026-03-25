#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"

namespace RPG::Client::LittleGame { class Match3EnergyViewStateBuffer; }

#define CLASS_2_EDE9AF83DF78BC85_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x117A15A0)
#define CLASS_2_EDE9AF83DF78BC85_1_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x117A1530)
#define CLASS_2_EDE9AF83DF78BC85_1_METHOD_2_936773021FAF4D21_OFFSET UNITYSDK_OFFSET(0x117A17C0)
#define CLASS_2_EDE9AF83DF78BC85_1_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x117A16D0)
#define CLASS_2_EDE9AF83DF78BC85_1__CTOR_OFFSET UNITYSDK_OFFSET(0x117A1890)
#define CLASS_2_EDE9AF83DF78BC85_1___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x117A18A0)
#define CLASS_2_EDE9AF83DF78BC85_1___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x117A1930)

inline static constexpr unsigned int Class_2_EDE9AF83DF78BC85_1_TypeDefinitionIndex = 53518;

class Class_2_EDE9AF83DF78BC85_1 : public ::Class_1_7ACCB923E979A908
{
public:
	::RPG::Client::LittleGame::Match3EnergyViewStateBuffer* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85_1__CTOR_OFFSET))(this);
	}

	static ::Class_2_EDE9AF83DF78BC85_1* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_EDE9AF83DF78BC85_1*(*)())((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85_1_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85_1_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85_1_ONEXECUTE_OFFSET))(this);
	}

	::System::Void Method_2_936773021FAF4D21()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85_1_METHOD_2_936773021FAF4D21_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85_1___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_EDE9AF83DF78BC85_1___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
