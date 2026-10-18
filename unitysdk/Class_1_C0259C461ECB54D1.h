#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BasePhaseContext; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }

#define CLASS_1_C0259C461ECB54D1_METHOD_1_0BF1620F1E4289BD_OFFSET UNITYSDK_OFFSET(0xB35EAB0)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB35EB80)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0xB35E9A0)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0xB35E8F0)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_BE3C9E9553699A7F_OFFSET UNITYSDK_OFFSET(0xB35EC60)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB35EC20)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB35EBE0)
#define CLASS_1_C0259C461ECB54D1__CTOR_OFFSET UNITYSDK_OFFSET(0xB35ECC0)

inline static constexpr unsigned int Class_1_C0259C461ECB54D1_TypeDefinitionIndex = 61101;

class Class_1_C0259C461ECB54D1 : public ::System::Object
{
public:
	::RPG::Client::BasePhaseContext* JLDECFKPLCB; // 0x10
	::System::Boolean GONHEFEEHBI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A239DF324AF4215D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_A239DF324AF4215D_OFFSET))(this);
	}

	::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_1_0BF1620F1E4289BD(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_0BF1620F1E4289BD_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_BE3C9E9553699A7F(::RPG::Client::NotifyType a1, ::RPG::Client::NotifyHandler* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_BE3C9E9553699A7F_OFFSET))(this, a1, a2);
	}
};
