#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_632;
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_C717D0FC86FCB141_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x1A79CE60)
#define CLASS_1_C717D0FC86FCB141_METHOD_1_1D083CAB146B83E4_OFFSET UNITYSDK_OFFSET(0x1A79D230)
#define CLASS_1_C717D0FC86FCB141_METHOD_1_3411EC0F4D7F3117_OFFSET UNITYSDK_OFFSET(0x1A79CEC0)
#define CLASS_1_C717D0FC86FCB141_METHOD_1_52629357EB729A80_OFFSET UNITYSDK_OFFSET(0x1A79D0D0)
#define CLASS_1_C717D0FC86FCB141_METHOD_1_6E3EE215C182DE98_OFFSET UNITYSDK_OFFSET(0x1A79CDB0)
#define CLASS_1_C717D0FC86FCB141__CTOR_OFFSET UNITYSDK_OFFSET(0x1A79D330)

inline static constexpr unsigned int Class_1_C717D0FC86FCB141_TypeDefinitionIndex = 57976;

class Class_1_C717D0FC86FCB141 : public ::System::Object
{
public:
	::System::String* OENAMINOLLF; // 0x10
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_632*>* MEBCIJPKOHB; // 0x18
	::RPG::GameCore::GameWorld* JNOFGLFPMLB; // 0x20
	::System::Int32 DGOMDMCAKCC; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C717D0FC86FCB141__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_6E3EE215C182DE98(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_C717D0FC86FCB141_METHOD_1_6E3EE215C182DE98_OFFSET))(this, a1);
	}

	::System::Void Method_1_52629357EB729A80(::Class_0_16E4307DCC419505_632* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_632*))((::PBYTE)hIl2Cpp + CLASS_1_C717D0FC86FCB141_METHOD_1_52629357EB729A80_OFFSET))(this, a1);
	}

	::System::Void Method_1_1D083CAB146B83E4(::Class_0_16E4307DCC419505_632* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_632*))((::PBYTE)hIl2Cpp + CLASS_1_C717D0FC86FCB141_METHOD_1_1D083CAB146B83E4_OFFSET))(this, a1);
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
