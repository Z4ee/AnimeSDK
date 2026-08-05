#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6EEAA83EDB800B24.h"

class Class_1_2E2C04EBA1DFB44A;
class Class_1_6DDB0BA77BC13FB2;
namespace MoleMole { class BubbleGroupPlayGraphContent; }
namespace System { class Action; }

#define CLASS_2_0F99E3040B8CCEB3_METHOD_2_035CA25DDFA22451_OFFSET UNITYSDK_OFFSET(0x14C94550)
#define CLASS_2_0F99E3040B8CCEB3_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x14C944B0)
#define CLASS_2_0F99E3040B8CCEB3_METHOD_2_AA90BEFB8756126D_OFFSET UNITYSDK_OFFSET(0x14C94730)
#define CLASS_2_0F99E3040B8CCEB3__CTOR_OFFSET UNITYSDK_OFFSET(0x14C943E0)

inline static constexpr unsigned int Class_2_0F99E3040B8CCEB3_TypeDefinitionIndex = 62869;

class Class_2_0F99E3040B8CCEB3 : public ::Class_1_6EEAA83EDB800B24
{
public:
	::System::Int32 Field_2_0; // 0x60

	::System::Void _ctor(::System::Int32 a1, ::System::Action* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + CLASS_2_0F99E3040B8CCEB3__CTOR_OFFSET))(this, a1, a2);
	}

	::Class_1_2E2C04EBA1DFB44A* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_2E2C04EBA1DFB44A*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0F99E3040B8CCEB3_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::Class_1_6DDB0BA77BC13FB2* Method_2_035CA25DDFA22451(::MoleMole::BubbleGroupPlayGraphContent* a1, ::System::Int32 a2)
	{
		return ((::Class_1_6DDB0BA77BC13FB2*(*)(::PVOID, ::MoleMole::BubbleGroupPlayGraphContent*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0F99E3040B8CCEB3_METHOD_2_035CA25DDFA22451_OFFSET))(this, a1, a2);
	}

	::Class_1_6DDB0BA77BC13FB2* Method_2_AA90BEFB8756126D(::MoleMole::BubbleGroupPlayGraphContent* a1, ::System::Int32 a2)
	{
		return ((::Class_1_6DDB0BA77BC13FB2*(*)(::PVOID, ::MoleMole::BubbleGroupPlayGraphContent*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_0F99E3040B8CCEB3_METHOD_2_AA90BEFB8756126D_OFFSET))(this, a1, a2);
	}
};
