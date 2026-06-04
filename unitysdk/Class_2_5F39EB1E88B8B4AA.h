#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_3713064DEE761936.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

#define CLASS_2_5F39EB1E88B8B4AA_CLEAR_OFFSET UNITYSDK_OFFSET(0xCBD5570)
#define CLASS_2_5F39EB1E88B8B4AA_METHOD_2_E9C0A4FCB77B6D02_OFFSET UNITYSDK_OFFSET(0xCBD5500)
#define CLASS_2_5F39EB1E88B8B4AA_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCBD5610)
#define CLASS_2_5F39EB1E88B8B4AA__CTOR_OFFSET UNITYSDK_OFFSET(0xCBD5890)
#define CLASS_2_5F39EB1E88B8B4AA___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0xCBD58A0)
#define CLASS_2_5F39EB1E88B8B4AA___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0xCBD5920)

inline static constexpr unsigned int Class_2_5F39EB1E88B8B4AA_TypeDefinitionIndex = 61577;

class Class_2_5F39EB1E88B8B4AA : public ::Class_1_3713064DEE761936
{
public:
	::System::Boolean Field_2_0; // 0x20
	::System::UInt32 Field_2_1; // 0x24
	::RPG::Client::LittleGame::Match3::OpponentRole Field_2_2; // 0x28
	::System::UInt32 Field_2_3; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F39EB1E88B8B4AA__CTOR_OFFSET))(this);
	}

	static ::Class_2_5F39EB1E88B8B4AA* Method_2_E9C0A4FCB77B6D02()
	{
		return ((::Class_2_5F39EB1E88B8B4AA*(*)())((::PBYTE)hIl2Cpp + CLASS_2_5F39EB1E88B8B4AA_METHOD_2_E9C0A4FCB77B6D02_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F39EB1E88B8B4AA_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F39EB1E88B8B4AA_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F39EB1E88B8B4AA___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5F39EB1E88B8B4AA___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
