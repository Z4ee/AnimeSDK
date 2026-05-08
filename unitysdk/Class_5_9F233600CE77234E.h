#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_90BCDF599DC0B51A.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_5_9F233600CE77234E_METHOD_5_278489B2D490141A_OFFSET UNITYSDK_OFFSET(0x122946B0)
#define CLASS_5_9F233600CE77234E_METHOD_5_6EEC31C0D8C79060_OFFSET UNITYSDK_OFFSET(0x122946C0)
#define CLASS_5_9F233600CE77234E_METHOD_5_92FDFCF4B7774F93_OFFSET UNITYSDK_OFFSET(0x12294750)
#define CLASS_5_9F233600CE77234E_METHOD_5_C06A7E6E54A3B291_OFFSET UNITYSDK_OFFSET(0x12294310)
#define CLASS_5_9F233600CE77234E__CTOR_OFFSET UNITYSDK_OFFSET(0x122946A0)

inline static constexpr unsigned int Class_5_9F233600CE77234E_TypeDefinitionIndex = 54933;

class Class_5_9F233600CE77234E : public ::Class_4_90BCDF599DC0B51A
{
public:
	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Field_5_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_C06A7E6E54A3B291(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E_METHOD_5_C06A7E6E54A3B291_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_278489B2D490141A(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E_METHOD_5_278489B2D490141A_OFFSET))(this, a1, a2);
	}

	::MoleMole::UIControllerContextBase* Method_5_6EEC31C0D8C79060()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E_METHOD_5_6EEC31C0D8C79060_OFFSET))(this);
	}

	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Method_5_92FDFCF4B7774F93()
	{
		return ((::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_9F233600CE77234E_METHOD_5_92FDFCF4B7774F93_OFFSET))(this);
	}
};
