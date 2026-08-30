#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_978;
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6A9633AB544891D5_METHOD_1_3222CC89A629442C_OFFSET UNITYSDK_OFFSET(0x181166D0)
#define CLASS_1_6A9633AB544891D5_METHOD_1_ABC2939B35FEAB9A_OFFSET UNITYSDK_OFFSET(0x18116F40)

inline static constexpr unsigned int Class_1_6A9633AB544891D5_TypeDefinitionIndex = 67430;

class Class_1_6A9633AB544891D5 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_3222CC89A629442C(::Class_0_16E4307DCC419505_978* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_978*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6A9633AB544891D5_METHOD_1_3222CC89A629442C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_ABC2939B35FEAB9A(::Class_0_16E4307DCC419505_978* a1, ::System::Func_2<::RPG::Client::RogueMagicUnitDataItem*, ::System::Boolean>* a2, ::RPG::Client::RogueMagicUnitDataItem*& a3, ::System::UInt32& a4)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_978*, ::System::Func_2<::RPG::Client::RogueMagicUnitDataItem*, ::System::Boolean>*, ::RPG::Client::RogueMagicUnitDataItem*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_6A9633AB544891D5_METHOD_1_ABC2939B35FEAB9A_OFFSET))(a1, a2, a3, a4);
	}
};
