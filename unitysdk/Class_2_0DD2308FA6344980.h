#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/LevelEndType.h"

#define CLASS_2_0DD2308FA6344980_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x141A8550)
#define CLASS_2_0DD2308FA6344980_METHOD_2_77E1ECFE4320F358_OFFSET UNITYSDK_OFFSET(0x141A85E0)
#define CLASS_2_0DD2308FA6344980_METHOD_2_82C7D0F40151C9A3_OFFSET UNITYSDK_OFFSET(0x141A86A0)
#define CLASS_2_0DD2308FA6344980_METHOD_2_9247A136947EFACF_OFFSET UNITYSDK_OFFSET(0x141A8700)
#define CLASS_2_0DD2308FA6344980_METHOD_2_C74E50CBD41F0264_OFFSET UNITYSDK_OFFSET(0x141A8600)
#define CLASS_2_0DD2308FA6344980_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141A8610)
#define CLASS_2_0DD2308FA6344980_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x141A85F0)
#define CLASS_2_0DD2308FA6344980__CCTOR_OFFSET UNITYSDK_OFFSET(0x141A84D0)
#define CLASS_2_0DD2308FA6344980__CTOR_OFFSET UNITYSDK_OFFSET(0x141A8540)

inline static constexpr unsigned int Class_2_0DD2308FA6344980_TypeDefinitionIndex = 40898;

class Class_2_0DD2308FA6344980 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_2 = 0x11D; // 0x0
	::MoleMole::Config::LevelEndType Field_2_1; // 0x20
	::System::Boolean Field_2_0; // 0x24

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_0DD2308FA6344980__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DD2308FA6344980__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DD2308FA6344980_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::MoleMole::Config::LevelEndType Method_2_77E1ECFE4320F358()
	{
		return ((::MoleMole::Config::LevelEndType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DD2308FA6344980_METHOD_2_77E1ECFE4320F358_OFFSET))(this);
	}

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DD2308FA6344980_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_2_C74E50CBD41F0264(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_0DD2308FA6344980_METHOD_2_C74E50CBD41F0264_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0DD2308FA6344980_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_82C7D0F40151C9A3(::System::Boolean a1, ::MoleMole::Config::LevelEndType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + CLASS_2_0DD2308FA6344980_METHOD_2_82C7D0F40151C9A3_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9247A136947EFACF(::MoleMole::Config::LevelEndType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelEndType))((::PBYTE)hIl2Cpp + CLASS_2_0DD2308FA6344980_METHOD_2_9247A136947EFACF_OFFSET))(this, a1);
	}
};
