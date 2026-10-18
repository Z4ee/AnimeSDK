#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_134;
class Class_0_16E4307DCC419505_136;
class Class_1_872D17A60BBE5EB3;
namespace RPG::Client::MechCraft::ViewModel { class MechCraftObtainMechatronUI3DViewModel; }
namespace RPG::Client::MechCraft::ViewModel { class MechCraftObtainMechatronViewModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_7BC8A465B2DE53A7_1_METHOD_1_01420334D613F1DD_OFFSET UNITYSDK_OFFSET(0xF8A1300)
#define CLASS_1_7BC8A465B2DE53A7_1_METHOD_1_27345F9AED855C1E_OFFSET UNITYSDK_OFFSET(0xF8A14F0)
#define CLASS_1_7BC8A465B2DE53A7_1_METHOD_1_7D0C1B3F230BAD1F_OFFSET UNITYSDK_OFFSET(0xF8A13F0)
#define CLASS_1_7BC8A465B2DE53A7_1__CTOR_OFFSET UNITYSDK_OFFSET(0xF8A12F0)

inline static constexpr unsigned int Class_1_7BC8A465B2DE53A7_1_TypeDefinitionIndex = 79655;

class Class_1_7BC8A465B2DE53A7_1 : public ::System::Object
{
public:
	::Class_1_872D17A60BBE5EB3* FKPFLNKEHCN; // 0x10
	::Class_0_16E4307DCC419505_136* JIFFPCDGGID; // 0x18

	::System::Void _ctor(::Class_1_872D17A60BBE5EB3* a1, ::Class_0_16E4307DCC419505_136* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_872D17A60BBE5EB3*, ::Class_0_16E4307DCC419505_136*))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_1__CTOR_OFFSET))(this, a1, a2);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronViewModel* Method_1_01420334D613F1DD(::System::UInt32 a1)
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_1_METHOD_1_01420334D613F1DD_OFFSET))(this, a1);
	}

	::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronUI3DViewModel* Method_1_7D0C1B3F230BAD1F(::System::UInt32 a1)
	{
		return ((::RPG::Client::MechCraft::ViewModel::MechCraftObtainMechatronUI3DViewModel*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_1_METHOD_1_7D0C1B3F230BAD1F_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>* Method_1_27345F9AED855C1E(::Class_0_16E4307DCC419505_134* a1)
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_131_Struct_2_B9CEE00E07603401>*(*)(::PVOID, ::Class_0_16E4307DCC419505_134*))((::PBYTE)hIl2Cpp + CLASS_1_7BC8A465B2DE53A7_1_METHOD_1_27345F9AED855C1E_OFFSET))(this, a1);
	}
};
