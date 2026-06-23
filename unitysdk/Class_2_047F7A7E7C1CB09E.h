#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_A9A857AD270B9CE1;
class Class_2_B4378B46E0020E85;
namespace MoleMole { class UIBallGameInLevelCollectBulletWidgetController; }
namespace MoleMole { class UIControlCollection; }
template <typename T> class Class_3_026083D0A4F08738;

#define CLASS_2_047F7A7E7C1CB09E_METHOD_2_0A421A6D2D1A1BFD_OFFSET UNITYSDK_OFFSET(0x1907B710)
#define CLASS_2_047F7A7E7C1CB09E_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x1907B890)
#define CLASS_2_047F7A7E7C1CB09E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1907B940)
#define CLASS_2_047F7A7E7C1CB09E__CTOR_OFFSET UNITYSDK_OFFSET(0x1907B930)

inline static constexpr unsigned int Class_2_047F7A7E7C1CB09E_TypeDefinitionIndex = 65784;

class Class_2_047F7A7E7C1CB09E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_026083D0A4F08738<::MoleMole::UIBallGameInLevelCollectBulletWidgetController*>* Field_2_1; // 0x18
	::Class_2_B4378B46E0020E85* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047F7A7E7C1CB09E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_0A421A6D2D1A1BFD(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_047F7A7E7C1CB09E_METHOD_2_0A421A6D2D1A1BFD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_047F7A7E7C1CB09E_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A9A857AD270B9CE1* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A9A857AD270B9CE1*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_047F7A7E7C1CB09E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
