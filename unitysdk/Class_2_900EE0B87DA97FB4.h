#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_42C9945E1C4C7D4F.h"

class Class_1_4AB9EFD33B97523D;
class Class_1_6DDB0BA77BC13FB2;
namespace MoleMole { class BubbleGroupPlayGraphContent; }

#define CLASS_2_900EE0B87DA97FB4_METHOD_2_47FCE72550F759BF_OFFSET UNITYSDK_OFFSET(0x13A45CB0)
#define CLASS_2_900EE0B87DA97FB4_METHOD_2_AA90BEFB8756126D_OFFSET UNITYSDK_OFFSET(0x13A45F30)
#define CLASS_2_900EE0B87DA97FB4_METHOD_2_B6F2533DD0DCA44C_OFFSET UNITYSDK_OFFSET(0x13A45D50)
#define CLASS_2_900EE0B87DA97FB4__CTOR_OFFSET UNITYSDK_OFFSET(0x13A45CA0)

inline static constexpr unsigned int Class_2_900EE0B87DA97FB4_TypeDefinitionIndex = 48489;

class Class_2_900EE0B87DA97FB4 : public ::Class_1_42C9945E1C4C7D4F
{
public:
	::System::Int32 Field_2_0; // 0x48

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_900EE0B87DA97FB4__CTOR_OFFSET))(this, a1);
	}

	::Class_1_4AB9EFD33B97523D* Method_2_47FCE72550F759BF()
	{
		return ((::Class_1_4AB9EFD33B97523D*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_900EE0B87DA97FB4_METHOD_2_47FCE72550F759BF_OFFSET))(this);
	}

	::Class_1_6DDB0BA77BC13FB2* Method_2_B6F2533DD0DCA44C(::MoleMole::BubbleGroupPlayGraphContent* a1, ::System::Int32 a2)
	{
		return ((::Class_1_6DDB0BA77BC13FB2*(*)(::PVOID, ::MoleMole::BubbleGroupPlayGraphContent*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_900EE0B87DA97FB4_METHOD_2_B6F2533DD0DCA44C_OFFSET))(this, a1, a2);
	}

	::Class_1_6DDB0BA77BC13FB2* Method_2_AA90BEFB8756126D(::MoleMole::BubbleGroupPlayGraphContent* a1, ::System::Int32 a2)
	{
		return ((::Class_1_6DDB0BA77BC13FB2*(*)(::PVOID, ::MoleMole::BubbleGroupPlayGraphContent*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_900EE0B87DA97FB4_METHOD_2_AA90BEFB8756126D_OFFSET))(this, a1, a2);
	}
};
