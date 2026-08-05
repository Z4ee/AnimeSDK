#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_1A39E1B51756BF41;
class Class_2_A4D62D05D5EA8464;
class Class_2_FDFE69FE7B72463B;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_05CA472826BC0FB8_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x1294B090)
#define CLASS_2_05CA472826BC0FB8_METHOD_2_BB881F05E41D3A04_OFFSET UNITYSDK_OFFSET(0x1294B340)
#define CLASS_2_05CA472826BC0FB8_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x1294B4F0)
#define CLASS_2_05CA472826BC0FB8__CTOR_OFFSET UNITYSDK_OFFSET(0x1294B4E0)

inline static constexpr unsigned int Class_2_05CA472826BC0FB8_TypeDefinitionIndex = 47341;

class Class_2_05CA472826BC0FB8 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_1A39E1B51756BF41* Field_2_6; // 0x18
	::Class_2_FDFE69FE7B72463B* Field_2_14; // 0x20
	::Class_2_1A39E1B51756BF41* Field_2_10; // 0x28
	::Class_2_1A39E1B51756BF41* Field_2_8; // 0x30
	::Class_2_1A39E1B51756BF41* Field_2_5; // 0x38
	::Class_2_1A39E1B51756BF41* Field_2_9; // 0x40
	::Class_2_1A39E1B51756BF41* Field_2_7; // 0x48
	::Class_2_1A39E1B51756BF41* Field_2_15; // 0x50
	::UnityEngine::GameObject* Field_2_11; // 0x58
	::Class_2_1A39E1B51756BF41* Field_2_0; // 0x60
	::Class_2_1A39E1B51756BF41* Field_2_4; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05CA472826BC0FB8__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_05CA472826BC0FB8_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_BB881F05E41D3A04()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_05CA472826BC0FB8_METHOD_2_BB881F05E41D3A04_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_A4D62D05D5EA8464* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_A4D62D05D5EA8464*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_05CA472826BC0FB8_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
