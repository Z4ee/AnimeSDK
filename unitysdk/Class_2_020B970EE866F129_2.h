#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FD611945730E269E.h"

class Class_0_16E4307DCC419505_1243;
class Class_2_7EB40BD7A3E6722A;
namespace RPG::Client::Prop { class DuelChimeraProxy; }

#define CLASS_2_020B970EE866F129_2_METHOD_2_1F7FA9DFE69338A1_OFFSET UNITYSDK_OFFSET(0x17F26B70)
#define CLASS_2_020B970EE866F129_2_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17F26D20)
#define CLASS_2_020B970EE866F129_2_METHOD_2_AC96313FF120BAE7_OFFSET UNITYSDK_OFFSET(0x17F26490)
#define CLASS_2_020B970EE866F129_2__CTOR_OFFSET UNITYSDK_OFFSET(0x17F26480)

inline static constexpr unsigned int Class_2_020B970EE866F129_2_TypeDefinitionIndex = 74285;

class Class_2_020B970EE866F129_2 : public ::Class_1_FD611945730E269E
{
public:
	::Class_2_7EB40BD7A3E6722A* Field_2_0; // 0x18
	::Class_0_16E4307DCC419505_1243* Field_2_1; // 0x20

	::System::Void _ctor(::Class_2_7EB40BD7A3E6722A* a1, ::Class_0_16E4307DCC419505_1243* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_7EB40BD7A3E6722A*, ::Class_0_16E4307DCC419505_1243*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AC96313FF120BAE7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_2_METHOD_2_AC96313FF120BAE7_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_2_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_1F7FA9DFE69338A1(::RPG::Client::Prop::DuelChimeraProxy* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::DuelChimeraProxy*))((::PBYTE)hIl2Cpp + CLASS_2_020B970EE866F129_2_METHOD_2_1F7FA9DFE69338A1_OFFSET))(this, a1);
	}
};
