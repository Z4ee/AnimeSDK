#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_889;
namespace RPG::Client { class RogueMagicUnitDataItem; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_44C3380B8A57210B_METHOD_1_3222CC89A629442C_OFFSET UNITYSDK_OFFSET(0x13B97FD0)
#define CLASS_1_44C3380B8A57210B_METHOD_1_63A6915060D3044A_OFFSET UNITYSDK_OFFSET(0x13B986A0)

inline static constexpr unsigned int Class_1_44C3380B8A57210B_TypeDefinitionIndex = 63067;

class Class_1_44C3380B8A57210B : public ::System::Object
{
public:
	static ::System::Boolean Method_1_3222CC89A629442C(::Class_0_16E4307DCC419505_889* a1, ::System::UInt32 a2)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_889*, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44C3380B8A57210B_METHOD_1_3222CC89A629442C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_63A6915060D3044A(::Class_0_16E4307DCC419505_889* a1, ::System::Func_2<::RPG::Client::RogueMagicUnitDataItem*, ::System::Boolean>* a2, ::RPG::Client::RogueMagicUnitDataItem*& a3, ::System::UInt32& a4)
	{
		return ((::System::Boolean(*)(::Class_0_16E4307DCC419505_889*, ::System::Func_2<::RPG::Client::RogueMagicUnitDataItem*, ::System::Boolean>*, ::RPG::Client::RogueMagicUnitDataItem*&, ::System::UInt32&))((::PBYTE)hIl2Cpp + CLASS_1_44C3380B8A57210B_METHOD_1_63A6915060D3044A_OFFSET))(a1, a2, a3, a4);
	}
};
