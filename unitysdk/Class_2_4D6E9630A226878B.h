#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UISocialCircleInviteContext; }
namespace MoleMole { class UISocialCircleInviteRowContext; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_4D6E9630A226878B_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x145D7CF0)
#define CLASS_2_4D6E9630A226878B_METHOD_2_679E3BCAB286308C_OFFSET UNITYSDK_OFFSET(0x145D8170)
#define CLASS_2_4D6E9630A226878B_METHOD_2_6EE5FF44E622AD26_OFFSET UNITYSDK_OFFSET(0x145D7D30)
#define CLASS_2_4D6E9630A226878B_METHOD_2_84FD9BA33865D960_OFFSET UNITYSDK_OFFSET(0x145D7820)
#define CLASS_2_4D6E9630A226878B_METHOD_2_BE08283E1EE3A723_OFFSET UNITYSDK_OFFSET(0x145D8200)
#define CLASS_2_4D6E9630A226878B__CTOR_OFFSET UNITYSDK_OFFSET(0x145D7C50)

inline static constexpr unsigned int Class_2_4D6E9630A226878B_TypeDefinitionIndex = 89649;

class Class_2_4D6E9630A226878B : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::System::Collections::Generic::List_1<::MoleMole::UISocialCircleInviteRowContext*>* Field_2_0; // 0x50
	::Class_2_000597E145D7A42A<::MoleMole::UISocialCircleInviteContext*>* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D6E9630A226878B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_84FD9BA33865D960(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_4D6E9630A226878B_METHOD_2_84FD9BA33865D960_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D6E9630A226878B_METHOD_2_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Collections::IEnumerable* Method_2_6EE5FF44E622AD26()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4D6E9630A226878B_METHOD_2_6EE5FF44E622AD26_OFFSET))(this);
	}

	::System::Void Method_2_679E3BCAB286308C(::MoleMole::UISocialCircleInviteContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISocialCircleInviteContext*))((::PBYTE)hIl2Cpp + CLASS_2_4D6E9630A226878B_METHOD_2_679E3BCAB286308C_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_BE08283E1EE3A723(::MoleMole::UISocialCircleInviteRowContext* a1, ::MoleMole::UISocialCircleInviteRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UISocialCircleInviteRowContext*, ::MoleMole::UISocialCircleInviteRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_4D6E9630A226878B_METHOD_2_BE08283E1EE3A723_OFFSET))(this, a1, a2);
	}
};
