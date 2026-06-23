#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UISocialCircleNewsRowContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_AB91566BA1FB7E2E_METHOD_2_076188C050222996_OFFSET UNITYSDK_OFFSET(0xD57C400)
#define CLASS_2_AB91566BA1FB7E2E_METHOD_2_364D5B8C92FA50E6_OFFSET UNITYSDK_OFFSET(0xD57C850)
#define CLASS_2_AB91566BA1FB7E2E_METHOD_2_852A60DF623A64FA_OFFSET UNITYSDK_OFFSET(0xD57CAD0)
#define CLASS_2_AB91566BA1FB7E2E__CTOR_OFFSET UNITYSDK_OFFSET(0xD57C550)

inline static constexpr unsigned int Class_2_AB91566BA1FB7E2E_TypeDefinitionIndex = 74529;

class Class_2_AB91566BA1FB7E2E : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* Field_2_0; // 0x50
	::Class_2_000597E145D7A42A<::MoleMole::UISocialCircleNewsRowContext*>* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB91566BA1FB7E2E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_076188C050222996(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_AB91566BA1FB7E2E_METHOD_2_076188C050222996_OFFSET))(this, a1, a2);
	}

	::System::String* Method_2_364D5B8C92FA50E6()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AB91566BA1FB7E2E_METHOD_2_364D5B8C92FA50E6_OFFSET))(this);
	}

	::System::Void Method_2_852A60DF623A64FA(::MoleMole::UISocialCircleNewsRowContext* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UISocialCircleNewsRowContext*))((::PBYTE)hIl2Cpp + CLASS_2_AB91566BA1FB7E2E_METHOD_2_852A60DF623A64FA_OFFSET))(this, a1);
	}
};
