#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_37DF30C8B3AA0F39.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_E87F1D15F1D4AC72;
namespace MoleMole { class UIControllerContextBase; }
template <typename T> class Class_2_000597E145D7A42A;

#define CLASS_2_23CE4B58D68A1DE7_METHOD_2_3FA063706A9B5149_1_OFFSET UNITYSDK_OFFSET(0x107A4EB0)
#define CLASS_2_23CE4B58D68A1DE7_METHOD_2_3FA063706A9B5149_OFFSET UNITYSDK_OFFSET(0x107A4E40)
#define CLASS_2_23CE4B58D68A1DE7_METHOD_2_4814A0EDDBD66EE5_OFFSET UNITYSDK_OFFSET(0x107A4B20)
#define CLASS_2_23CE4B58D68A1DE7__CTOR_OFFSET UNITYSDK_OFFSET(0x107A4DF0)

inline static constexpr unsigned int Class_2_23CE4B58D68A1DE7_TypeDefinitionIndex = 44749;

class Class_2_23CE4B58D68A1DE7 : public ::Class_1_37DF30C8B3AA0F39
{
public:
	::Class_2_000597E145D7A42A<::MoleMole::UIControllerContextBase*>* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23CE4B58D68A1DE7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4814A0EDDBD66EE5(::Struct_2_575273D27F02957E& a1, ::Class_2_E87F1D15F1D4AC72* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::Class_2_E87F1D15F1D4AC72*))((::PBYTE)hIl2Cpp + CLASS_2_23CE4B58D68A1DE7_METHOD_2_4814A0EDDBD66EE5_OFFSET))(this, a1, a2);
	}

	::Foundation::AssetPath Method_2_3FA063706A9B5149()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23CE4B58D68A1DE7_METHOD_2_3FA063706A9B5149_OFFSET))(this);
	}

	::Foundation::AssetPath Method_2_3FA063706A9B5149_1()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_23CE4B58D68A1DE7_METHOD_2_3FA063706A9B5149_1_OFFSET))(this);
	}
};
