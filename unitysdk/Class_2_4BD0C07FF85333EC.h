#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_B4378B46E0020E85;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define CLASS_2_4BD0C07FF85333EC_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x1659F560)
#define CLASS_2_4BD0C07FF85333EC_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1659F740)
#define CLASS_2_4BD0C07FF85333EC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1659F7F0)
#define CLASS_2_4BD0C07FF85333EC__CTOR_OFFSET UNITYSDK_OFFSET(0x1659F7E0)

inline static constexpr unsigned int Class_2_4BD0C07FF85333EC_TypeDefinitionIndex = 84904;

class Class_2_4BD0C07FF85333EC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x18
	::MoleMole::UIGeneralButtonController* Field_2_1; // 0x20
	::Class_2_B4378B46E0020E85* Field_2_3; // 0x28
	::Class_2_FDFE69FE7B72463B* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD0C07FF85333EC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4BD0C07FF85333EC_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4BD0C07FF85333EC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4BD0C07FF85333EC_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
