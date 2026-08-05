#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_EA9A3C1106CBD311.h"
#include "unitysdk/System/Object.h"

class Class_1_83665B095F1535B5;
class Class_2_208CC9941471731A_1027;
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_8B550A61FC9DDA82_CLASS_1_22185412A5E29E51_METHOD_1_76A952B52A2FF2B0_OFFSET UNITYSDK_OFFSET(0x1288D7F0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_22185412A5E29E51_METHOD_1_951F44A98FF73B0A_OFFSET UNITYSDK_OFFSET(0x1288D990)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_22185412A5E29E51_METHOD_1_EDFA220ACCC48790_OFFSET UNITYSDK_OFFSET(0x1288D1A0)
#define CLASS_1_8B550A61FC9DDA82_CLASS_1_22185412A5E29E51__CTOR_OFFSET UNITYSDK_OFFSET(0x1288D190)

inline static constexpr unsigned int Class_1_8B550A61FC9DDA82_Class_1_22185412A5E29E51_TypeDefinitionIndex = 50160;

class Class_1_8B550A61FC9DDA82_Class_1_22185412A5E29E51 : public ::System::Object
{
public:
	::System::Action* Field_1_1; // 0x10
	::Class_2_208CC9941471731A_1027* Field_1_0; // 0x18
	::System::Action_1<::Class_1_83665B095F1535B5*>* Field_1_5; // 0x20
	::System::Action* Field_1_6; // 0x28
	::Struct_2_EA9A3C1106CBD311 Field_1_7; // 0x30
	::System::Action* Field_1_2; // 0x90
	::System::Int32 Field_1_3; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_22185412A5E29E51__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_EDFA220ACCC48790(::MoleMole::UIGeneralTipsPopWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_22185412A5E29E51_METHOD_1_EDFA220ACCC48790_OFFSET))(this, a1);
	}

	::System::Void Method_1_76A952B52A2FF2B0(::MoleMole::UIGeneralTipsPopWindowController* a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralTipsPopWindowController*, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_22185412A5E29E51_METHOD_1_76A952B52A2FF2B0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_951F44A98FF73B0A(::Struct_2_EA9A3C1106CBD311 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_EA9A3C1106CBD311))((::PBYTE)hIl2Cpp + CLASS_1_8B550A61FC9DDA82_CLASS_1_22185412A5E29E51_METHOD_1_951F44A98FF73B0A_OFFSET))(this, a1);
	}
};
