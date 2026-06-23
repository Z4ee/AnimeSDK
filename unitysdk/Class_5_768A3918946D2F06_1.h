#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_4_B8EB3E9191ADE6A5.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_1685EC66FBD28897;
class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_5_768A3918946D2F06_1_METHOD_5_1EB5C8E4A2E7E632_OFFSET UNITYSDK_OFFSET(0x18B880F0)
#define CLASS_5_768A3918946D2F06_1_METHOD_5_261D4B62BEE14763_OFFSET UNITYSDK_OFFSET(0x18B86030)
#define CLASS_5_768A3918946D2F06_1_METHOD_5_4814A0EDDBD66EE5_OFFSET UNITYSDK_OFFSET(0x18B85CC0)
#define CLASS_5_768A3918946D2F06_1_METHOD_5_92FDFCF4B7774F93_OFFSET UNITYSDK_OFFSET(0x18B86040)
#define CLASS_5_768A3918946D2F06_1__CTOR_OFFSET UNITYSDK_OFFSET(0x18B86020)

inline static constexpr unsigned int Class_5_768A3918946D2F06_1_TypeDefinitionIndex = 74584;

class Class_5_768A3918946D2F06_1 : public ::Class_4_B8EB3E9191ADE6A5
{
public:
	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Field_5_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_5_4814A0EDDBD66EE5(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1_METHOD_5_4814A0EDDBD66EE5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_5_261D4B62BEE14763(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1_METHOD_5_261D4B62BEE14763_OFFSET))(this, a1, a2);
	}

	::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>* Method_5_92FDFCF4B7774F93()
	{
		return ((::Class_2_000597E145D7A42A<::System::Collections::Generic::IList_1<::Class_1_1685EC66FBD28897*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1_METHOD_5_92FDFCF4B7774F93_OFFSET))(this);
	}

	::MoleMole::UIControllerContextBase* Method_5_1EB5C8E4A2E7E632()
	{
		return ((::MoleMole::UIControllerContextBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_5_768A3918946D2F06_1_METHOD_5_1EB5C8E4A2E7E632_OFFSET))(this);
	}
};
