#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderDataHandle.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_379;
class Class_1_950C34EC5D7CBA37;
class Class_2_ED6948B5924B9BC1;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_8D4F5EE66ED9C77E_METHOD_1_6661F7C37F68C895_OFFSET UNITYSDK_OFFSET(0x15FD1210)
#define CLASS_1_8D4F5EE66ED9C77E_METHOD_1_77C6977EC772E189_OFFSET UNITYSDK_OFFSET(0x15FD0C10)
#define CLASS_1_8D4F5EE66ED9C77E_METHOD_1_81E7A4FD20EC860C_OFFSET UNITYSDK_OFFSET(0x15FD0950)
#define CLASS_1_8D4F5EE66ED9C77E_METHOD_1_969D9516A75501DE_OFFSET UNITYSDK_OFFSET(0x15FD0C00)
#define CLASS_1_8D4F5EE66ED9C77E_METHOD_1_EDB0D8DA4A269034_OFFSET UNITYSDK_OFFSET(0x15FD0FC0)
#define CLASS_1_8D4F5EE66ED9C77E__CTOR_OFFSET UNITYSDK_OFFSET(0x15FD0870)

inline static constexpr unsigned int Class_1_8D4F5EE66ED9C77E_TypeDefinitionIndex = 55088;

class Class_1_8D4F5EE66ED9C77E : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_379*>* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::HollowChessboard::RenderDataHandle, ::Class_0_16E4307DCC419505_379*>* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D4F5EE66ED9C77E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_81E7A4FD20EC860C(::Class_0_16E4307DCC419505_379* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_379*))((::PBYTE)hIl2Cpp + CLASS_1_8D4F5EE66ED9C77E_METHOD_1_81E7A4FD20EC860C_OFFSET))(this, a1);
	}

	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_379*>* Method_1_969D9516A75501DE()
	{
		return ((::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_379*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8D4F5EE66ED9C77E_METHOD_1_969D9516A75501DE_OFFSET))(this);
	}

	::System::Void Method_1_77C6977EC772E189(::Class_2_ED6948B5924B9BC1* a1, ::Class_1_950C34EC5D7CBA37* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_ED6948B5924B9BC1*, ::Class_1_950C34EC5D7CBA37*))((::PBYTE)hIl2Cpp + CLASS_1_8D4F5EE66ED9C77E_METHOD_1_77C6977EC772E189_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_EDB0D8DA4A269034(::Class_0_16E4307DCC419505_379* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_379*))((::PBYTE)hIl2Cpp + CLASS_1_8D4F5EE66ED9C77E_METHOD_1_EDB0D8DA4A269034_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_6661F7C37F68C895(::MoleMole::HollowChessboard::RenderDataHandle a1, ::Class_0_16E4307DCC419505_379*& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle, ::Class_0_16E4307DCC419505_379*&))((::PBYTE)hIl2Cpp + CLASS_1_8D4F5EE66ED9C77E_METHOD_1_6661F7C37F68C895_OFFSET))(this, a1, a2);
	}
};
