#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UISocialCircleNewsRowContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_ED1C7538B54681A0_METHOD_2_1FC94BA33A151EF7_OFFSET UNITYSDK_OFFSET(0x10F9BD90)
#define CLASS_2_ED1C7538B54681A0_METHOD_2_364D5B8C92FA50E6_OFFSET UNITYSDK_OFFSET(0x10F9C230)
#define CLASS_2_ED1C7538B54681A0_METHOD_2_852A60DF623A64FA_OFFSET UNITYSDK_OFFSET(0x10F9C4B0)
#define CLASS_2_ED1C7538B54681A0__CTOR_OFFSET UNITYSDK_OFFSET(0x10F9BF30)

inline static constexpr unsigned int Class_2_ED1C7538B54681A0_TypeDefinitionIndex = 56997;

class Class_2_ED1C7538B54681A0 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UISocialCircleNewsRowContext*>* Field_2_1; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_2_0; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED1C7538B54681A0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1FC94BA33A151EF7(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_ED1C7538B54681A0_METHOD_2_1FC94BA33A151EF7_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_364D5B8C92FA50E6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ED1C7538B54681A0_METHOD_2_364D5B8C92FA50E6_OFFSET))(this);
	}

	::System::Void Method_2_852A60DF623A64FA(::MoleMole::UISocialCircleNewsRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISocialCircleNewsRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_ED1C7538B54681A0_METHOD_2_852A60DF623A64FA_OFFSET))(this, a1);
	}
};
