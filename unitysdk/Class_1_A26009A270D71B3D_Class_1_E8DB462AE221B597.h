#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_A26009A270D71B3D;
namespace MoleMole::Battle { class ChallengeSubTypeItem; }
namespace System { class Action; }

#define CLASS_1_A26009A270D71B3D_CLASS_1_E8DB462AE221B597_METHOD_1_A7671139CE93032D_OFFSET UNITYSDK_OFFSET(0x131CA160)
#define CLASS_1_A26009A270D71B3D_CLASS_1_E8DB462AE221B597_METHOD_1_DFA777394FA7F30D_OFFSET UNITYSDK_OFFSET(0x131CA1E0)
#define CLASS_1_A26009A270D71B3D_CLASS_1_E8DB462AE221B597__CTOR_OFFSET UNITYSDK_OFFSET(0x131CA150)

inline static constexpr unsigned int Class_1_A26009A270D71B3D_Class_1_E8DB462AE221B597_TypeDefinitionIndex = 54207;

class Class_1_A26009A270D71B3D_Class_1_E8DB462AE221B597 : public ::System::Object
{
public:
	::Class_1_A26009A270D71B3D* Field_1_1; // 0x10
	::System::Action* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A26009A270D71B3D_CLASS_1_E8DB462AE221B597__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A7671139CE93032D(::MoleMole::Battle::ChallengeSubTypeItem* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ChallengeSubTypeItem*))((::PBYTE)hIl2Cpp + CLASS_1_A26009A270D71B3D_CLASS_1_E8DB462AE221B597_METHOD_1_A7671139CE93032D_OFFSET))(this, a1);
	}

	::System::Void Method_1_DFA777394FA7F30D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A26009A270D71B3D_CLASS_1_E8DB462AE221B597_METHOD_1_DFA777394FA7F30D_OFFSET))(this);
	}
};
