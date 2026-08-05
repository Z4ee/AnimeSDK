#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }

#define CLASS_2_CB6CA428A6965BE4_METHOD_2_5A4C962718782000_OFFSET UNITYSDK_OFFSET(0x1481C7E0)
#define CLASS_2_CB6CA428A6965BE4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1481CB70)
#define CLASS_2_CB6CA428A6965BE4_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1481CA00)
#define CLASS_2_CB6CA428A6965BE4__CTOR_OFFSET UNITYSDK_OFFSET(0x1481CB60)

inline static constexpr unsigned int Class_2_CB6CA428A6965BE4_TypeDefinitionIndex = 64200;

class Class_2_CB6CA428A6965BE4 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x18
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_1; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_2; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_11; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x40
	::UIControllerExtensionData* Field_2_7; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB6CA428A6965BE4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A4C962718782000(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CB6CA428A6965BE4_METHOD_2_5A4C962718782000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CB6CA428A6965BE4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB6CA428A6965BE4_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}
};
