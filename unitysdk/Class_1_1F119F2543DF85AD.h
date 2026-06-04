#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnimStateLogicTypeExtra.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

class Class_2_1DBE0E1023AFDBC5;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class HitMotionParams; }
namespace System { class String; }

#define CLASS_1_1F119F2543DF85AD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xAC76850)
#define CLASS_1_1F119F2543DF85AD_METHOD_1_479759059E440327_OFFSET UNITYSDK_OFFSET(0xAC76BE0)
#define CLASS_1_1F119F2543DF85AD_METHOD_1_4AADAF19CDCB660E_OFFSET UNITYSDK_OFFSET(0xAC76AD0)
#define CLASS_1_1F119F2543DF85AD_METHOD_1_85377D41FEE05B66_OFFSET UNITYSDK_OFFSET(0xAC768B0)
#define CLASS_1_1F119F2543DF85AD_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xAC76C60)
#define CLASS_1_1F119F2543DF85AD_METHOD_1_F8B73ECE7F883AC1_OFFSET UNITYSDK_OFFSET(0xAC76C70)
#define CLASS_1_1F119F2543DF85AD__CTOR_OFFSET UNITYSDK_OFFSET(0xAC76CC0)

inline static constexpr unsigned int Class_1_1F119F2543DF85AD_TypeDefinitionIndex = 53139;

class Class_1_1F119F2543DF85AD : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* Field_1_0; // 0x10
	::RPG::GameCore::HitMotionParams* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::Class_2_1DBE0E1023AFDBC5* Field_1_3; // 0x28
	::RPG::MVector3 Field_1_4; // 0x30
	::System::Single Field_1_5; // 0x3C
	::RPG::MVector3 Field_1_6; // 0x40
	::System::Single Field_1_7; // 0x4C
	::RPG::GameCore::AnimStateLogicTypeExtra Field_1_8; // 0x50
	::System::Single Field_1_9; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_85377D41FEE05B66()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_METHOD_1_85377D41FEE05B66_OFFSET))(this);
	}

	::System::Void Method_1_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_METHOD_1_479759059E440327_OFFSET))(this, a1);
	}

	::Class_1_1F119F2543DF85AD* Method_1_F8B73ECE7F883AC1()
	{
		return ((::Class_1_1F119F2543DF85AD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_METHOD_1_F8B73ECE7F883AC1_OFFSET))(this);
	}

	::System::Boolean Method_1_4AADAF19CDCB660E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_METHOD_1_4AADAF19CDCB660E_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_1F119F2543DF85AD_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
