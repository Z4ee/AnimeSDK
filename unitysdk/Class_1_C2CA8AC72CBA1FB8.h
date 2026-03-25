#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_738;
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_C2CA8AC72CBA1FB8_METHOD_1_3222CC89A629442C_OFFSET UNITYSDK_OFFSET(0x10AFD880)
#define CLASS_1_C2CA8AC72CBA1FB8_METHOD_1_FFA2486045FAE2E1_OFFSET UNITYSDK_OFFSET(0x10AFDF20)

inline static constexpr unsigned int Class_1_C2CA8AC72CBA1FB8_TypeDefinitionIndex = 54946;

class Class_1_C2CA8AC72CBA1FB8 : public ::System::Object
{
public:
	static ::System::Boolean Method_1_3222CC89A629442C(::Class_0_16E4307DCC419505_738* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_738*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2CA8AC72CBA1FB8_METHOD_1_3222CC89A629442C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_FFA2486045FAE2E1(::Class_0_16E4307DCC419505_738* a1, ::System::Func_2<::RPG::Client::RogueMagicUnitDataItem*, ::System::Boolean>* a2, ::RPG::Client::RogueMagicUnitDataItem*& a3, ::System::UInt32& a4)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_738*, ::System::Func_2<::RPG::Client::RogueMagicUnitDataItem*, ::System::Boolean>*, ::RPG::Client::RogueMagicUnitDataItem*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_C2CA8AC72CBA1FB8_METHOD_1_FFA2486045FAE2E1_OFFSET))(a1, a2, a3, a4);
	}
};
