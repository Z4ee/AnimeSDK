#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BasePhaseContext; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class RspHandler; }

#define CLASS_1_C0259C461ECB54D1_METHOD_1_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x144D8720)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x144D86B0)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x144D85B0)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x144D8610)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_BE3C9E9553699A7F_OFFSET UNITYSDK_OFFSET(0x144D8800)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x144D87C0)
#define CLASS_1_C0259C461ECB54D1_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x144D8780)
#define CLASS_1_C0259C461ECB54D1__CTOR_OFFSET UNITYSDK_OFFSET(0x144D8860)

inline static constexpr unsigned int Class_1_C0259C461ECB54D1_TypeDefinitionIndex = 57111;

class Class_1_C0259C461ECB54D1 : public ::System::Object
{
public:
	::RPG::Client::BasePhaseContext* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_1_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_1_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C0259C461ECB54D1_METHOD_1_2685B6183E614529_1_OFFSET))(this, a1);
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
