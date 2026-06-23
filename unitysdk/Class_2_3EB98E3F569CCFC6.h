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

#define CLASS_2_3EB98E3F569CCFC6_METHOD_2_08DCF72FBE01FF99_OFFSET UNITYSDK_OFFSET(0x1A86CF10)
#define CLASS_2_3EB98E3F569CCFC6_METHOD_2_679E3BCAB286308C_OFFSET UNITYSDK_OFFSET(0x1A86CE80)
#define CLASS_2_3EB98E3F569CCFC6_METHOD_2_B3471AFA9DBE0F0F_OFFSET UNITYSDK_OFFSET(0x1A86CA40)
#define CLASS_2_3EB98E3F569CCFC6_METHOD_2_CF3A8E002B537727_OFFSET UNITYSDK_OFFSET(0x1A86C580)
#define CLASS_2_3EB98E3F569CCFC6_METHOD_2_E3BBA4124A537C02_OFFSET UNITYSDK_OFFSET(0x1A86CF50)
#define CLASS_2_3EB98E3F569CCFC6__CTOR_OFFSET UNITYSDK_OFFSET(0x1A86C9A0)

inline static constexpr unsigned int Class_2_3EB98E3F569CCFC6_TypeDefinitionIndex = 83570;

class Class_2_3EB98E3F569CCFC6 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UISocialCircleInviteContext*>* Field_2_0; // 0x50
	::System::Collections::Generic::List_1<::MoleMole::UISocialCircleInviteRowContext*>* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EB98E3F569CCFC6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CF3A8E002B537727(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_3EB98E3F569CCFC6_METHOD_2_CF3A8E002B537727_OFFSET))(this, a1, a2);
	}

	::System::Collections::IEnumerable* Method_2_B3471AFA9DBE0F0F()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EB98E3F569CCFC6_METHOD_2_B3471AFA9DBE0F0F_OFFSET))(this);
	}

	::System::Void Method_2_679E3BCAB286308C(::MoleMole::UISocialCircleInviteContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISocialCircleInviteContext*))((::PBYTE)hIl2Cpp + CLASS_2_3EB98E3F569CCFC6_METHOD_2_679E3BCAB286308C_OFFSET))(this, a1);
	}

	::System::Void Method_2_08DCF72FBE01FF99()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3EB98E3F569CCFC6_METHOD_2_08DCF72FBE01FF99_OFFSET))(this);
	}

	::System::Int32 Method_2_E3BBA4124A537C02(::MoleMole::UISocialCircleInviteRowContext* a1, ::MoleMole::UISocialCircleInviteRowContext* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::UISocialCircleInviteRowContext*, ::MoleMole::UISocialCircleInviteRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_3EB98E3F569CCFC6_METHOD_2_E3BBA4124A537C02_OFFSET))(this, a1, a2);
	}
};
