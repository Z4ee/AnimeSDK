#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0C0F9366B7D3B580_2;
class Class_1_D2C0A39018B2EAE4_1;
namespace RPG::Client { class IRogueMiracleInfo; }
namespace RPG::Client { class RogueBuffInfo; }
namespace RPG::Client { class RogueMagicScepterInfo; }

#define CLASS_1_C965AC757C02F449_METHOD_1_1454A2C87876CD3B_OFFSET UNITYSDK_OFFSET(0x15A72110)
#define CLASS_1_C965AC757C02F449_METHOD_1_1C90B866D8BE6A55_OFFSET UNITYSDK_OFFSET(0x15A73110)
#define CLASS_1_C965AC757C02F449_METHOD_1_4F32EAFC4DEA9ADD_OFFSET UNITYSDK_OFFSET(0x15A72820)
#define CLASS_1_C965AC757C02F449_METHOD_1_FB9718640EB457D9_OFFSET UNITYSDK_OFFSET(0x15A72990)

inline static constexpr unsigned int Class_1_C965AC757C02F449_TypeDefinitionIndex = 67155;

class Class_1_C965AC757C02F449 : public ::System::Object
{
public:
	static ::System::Void Method_1_1454A2C87876CD3B(::Class_1_0C0F9366B7D3B580_2* a1)
	{
		return ((::System::Void(*)(::Class_1_0C0F9366B7D3B580_2*))((::PBYTE)hIl2Cpp + CLASS_1_C965AC757C02F449_METHOD_1_1454A2C87876CD3B_OFFSET))(a1);
	}

	static ::System::Void Method_1_4F32EAFC4DEA9ADD(::RPG::Client::RogueBuffInfo* a1, ::Class_1_D2C0A39018B2EAE4_1* a2)
	{
		return ((::System::Void(*)(::RPG::Client::RogueBuffInfo*, ::Class_1_D2C0A39018B2EAE4_1*))((::PBYTE)hIl2Cpp + CLASS_1_C965AC757C02F449_METHOD_1_4F32EAFC4DEA9ADD_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_FB9718640EB457D9(::RPG::Client::IRogueMiracleInfo* a1, ::Class_1_D2C0A39018B2EAE4_1* a2)
	{
		return ((::System::Void(*)(::RPG::Client::IRogueMiracleInfo*, ::Class_1_D2C0A39018B2EAE4_1*))((::PBYTE)hIl2Cpp + CLASS_1_C965AC757C02F449_METHOD_1_FB9718640EB457D9_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_1C90B866D8BE6A55(::RPG::Client::RogueMagicScepterInfo* a1, ::Class_1_D2C0A39018B2EAE4_1* a2)
	{
		return ((::System::Void(*)(::RPG::Client::RogueMagicScepterInfo*, ::Class_1_D2C0A39018B2EAE4_1*))((::PBYTE)hIl2Cpp + CLASS_1_C965AC757C02F449_METHOD_1_1C90B866D8BE6A55_OFFSET))(a1, a2);
	}
};
