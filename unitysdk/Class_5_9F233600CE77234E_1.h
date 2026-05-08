#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_90BCDF599DC0B51A.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_5_9F233600CE77234E_1_METHOD_5_278489B2D490141A_OFFSET UNITYSDK_OFFSET(0xFEB10D0)
#define CLASS_5_9F233600CE77234E_1_METHOD_5_6EEC31C0D8C79060_OFFSET UNITYSDK_OFFSET(0xFEB1040)
#define CLASS_5_9F233600CE77234E_1_METHOD_5_A6F7351BD2E96605_OFFSET UNITYSDK_OFFSET(0xFEAFAB0)
#define CLASS_5_9F233600CE77234E_1_METHOD_5_C06A7E6E54A3B291_OFFSET UNITYSDK_OFFSET(0xFEAF710)
#define CLASS_5_9F233600CE77234E_1__CTOR_OFFSET UNITYSDK_OFFSET(0xFEAFAA0)

inline static constexpr unsigned int Class_5_9F233600CE77234E_1_TypeDefinitionIndex = 77844;

class Class_5_9F233600CE77234E_1 : public ::Class_4_90BCDF599DC0B51A
{
public:
	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Field_5_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_C06A7E6E54A3B291(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E_1_METHOD_5_C06A7E6E54A3B291_OFFSET))(this, a1, a2);
	}

	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Method_5_A6F7351BD2E96605()
	{
		return ((::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E_1_METHOD_5_A6F7351BD2E96605_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_5_6EEC31C0D8C79060()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E_1_METHOD_5_6EEC31C0D8C79060_OFFSET))(this);
	}

	::System::Void Method_5_278489B2D490141A(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E_1_METHOD_5_278489B2D490141A_OFFSET))(this, a1, a2);
	}
};
