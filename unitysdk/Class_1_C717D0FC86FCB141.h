#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_597;
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C717D0FC86FCB141_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x19219D30)
#define CLASS_1_C717D0FC86FCB141_METHOD_1_1D083CAB146B83E4_OFFSET UNITYSDK_OFFSET(0x1921A100)
#define CLASS_1_C717D0FC86FCB141_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x19219D90)
#define CLASS_1_C717D0FC86FCB141_METHOD_1_52629357EB729A80_OFFSET UNITYSDK_OFFSET(0x19219FA0)
#define CLASS_1_C717D0FC86FCB141_METHOD_1_6E3EE215C182DE98_OFFSET UNITYSDK_OFFSET(0x19219C80)
#define CLASS_1_C717D0FC86FCB141__CTOR_OFFSET UNITYSDK_OFFSET(0x1921A200)

inline static constexpr unsigned int Class_1_C717D0FC86FCB141_TypeDefinitionIndex = 55252;

class Class_1_C717D0FC86FCB141 : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* Field_1_0; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_597*>* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C717D0FC86FCB141__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6E3EE215C182DE98(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C717D0FC86FCB141_METHOD_1_6E3EE215C182DE98_OFFSET))(this, a1);
	}

	::System::Void Method_1_52629357EB729A80(::Class_0_16E4307DCC419505_597* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_597*))((::PBYTE)hIl2Cpp + CLASS_1_C717D0FC86FCB141_METHOD_1_52629357EB729A80_OFFSET))(this, a1);
	}

	::System::Void Method_1_1D083CAB146B83E4(::Class_0_16E4307DCC419505_597* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_597*))((::PBYTE)hIl2Cpp + CLASS_1_C717D0FC86FCB141_METHOD_1_1D083CAB146B83E4_OFFSET))(this, a1);
	}

	::System::Void Method_1_3411EC0F4D7F3117(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C717D0FC86FCB141_METHOD_1_3411EC0F4D7F3117_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C717D0FC86FCB141_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
