#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_B8EB3E9191ADE6A5.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapRightListRowNormalContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_5_662CD71855ACCA84_METHOD_5_1EB5C8E4A2E7E632_OFFSET UNITYSDK_OFFSET(0xA656290)
#define CLASS_5_662CD71855ACCA84_METHOD_5_261D4B62BEE14763_OFFSET UNITYSDK_OFFSET(0xA657700)
#define CLASS_5_662CD71855ACCA84_METHOD_5_B66DB5F82F86411D_OFFSET UNITYSDK_OFFSET(0xA655930)
#define CLASS_5_662CD71855ACCA84_METHOD_5_BB4F9CE38883FF81_OFFSET UNITYSDK_OFFSET(0xA6556A0)
#define CLASS_5_662CD71855ACCA84_METHOD_5_FECD5D3551D1B15C_OFFSET UNITYSDK_OFFSET(0xA656360)
#define CLASS_5_662CD71855ACCA84__CTOR_OFFSET UNITYSDK_OFFSET(0xA655920)

inline static constexpr unsigned int Class_5_662CD71855ACCA84_TypeDefinitionIndex = 60021;

class Class_5_662CD71855ACCA84 : public ::Class_4_B8EB3E9191ADE6A5
{
public:
	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Field_5_1; // 0x78
	::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Field_5_0; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_BB4F9CE38883FF81(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84_METHOD_5_BB4F9CE38883FF81_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>* Method_5_B66DB5F82F86411D()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::MoleMole::UIUrbanMapRightListRowNormalContext*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84_METHOD_5_B66DB5F82F86411D_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_5_1EB5C8E4A2E7E632()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84_METHOD_5_1EB5C8E4A2E7E632_OFFSET))(this);
	}

	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Method_5_FECD5D3551D1B15C()
	{
		return ((::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84_METHOD_5_FECD5D3551D1B15C_OFFSET))(this);
	}

	::System::Void Method_5_261D4B62BEE14763(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_662CD71855ACCA84_METHOD_5_261D4B62BEE14763_OFFSET))(this, a1, a2);
	}
};
