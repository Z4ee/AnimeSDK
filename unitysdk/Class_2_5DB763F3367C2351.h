#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7ACCB923E979A908.h"
#include "unitysdk/RPG/Client/LittleGame/Match3/OpponentRole.h"

class Class_1_6CA018824F1536E0;
class Class_1_9ADD1D872350330F;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_5DB763F3367C2351_CLEAR_OFFSET UNITYSDK_OFFSET(0x8B9A8B0)
#define CLASS_2_5DB763F3367C2351_METHOD_2_07374B8FCDCB7B70_OFFSET UNITYSDK_OFFSET(0x8B9A840)
#define CLASS_2_5DB763F3367C2351_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8B9A950)
#define CLASS_2_5DB763F3367C2351__CTOR_OFFSET UNITYSDK_OFFSET(0x8B9AE10)
#define CLASS_2_5DB763F3367C2351___IFIXBASEPROXY_CLEAR_OFFSET UNITYSDK_OFFSET(0x8B9AE20)
#define CLASS_2_5DB763F3367C2351___IFIXBASEPROXY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x8B9AEB0)

inline static constexpr unsigned int Class_2_5DB763F3367C2351_TypeDefinitionIndex = 53501;

class Class_2_5DB763F3367C2351 : public ::Class_1_7ACCB923E979A908
{
public:
	::Class_1_6CA018824F1536E0* Field_2_5; // 0x20
	::System::Collections::Generic::List_1<::System::UInt32>* Field_2_2; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_9ADD1D872350330F*>* Field_2_1; // 0x30
	::System::UInt32 Field_2_4; // 0x38
	::System::Boolean Field_2_3; // 0x3C
	::RPG::Client::LittleGame::Match3::OpponentRole Field_2_0; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB763F3367C2351__CTOR_OFFSET))(this);
	}

	static ::Class_2_5DB763F3367C2351* Method_2_07374B8FCDCB7B70()
	{
		return ((::Class_2_5DB763F3367C2351*(*)())((::PBYTE)hIl2Cpp + CLASS_2_5DB763F3367C2351_METHOD_2_07374B8FCDCB7B70_OFFSET))();
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB763F3367C2351_CLEAR_OFFSET))(this);
	}

	::System::Void OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB763F3367C2351_ONEXECUTE_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB763F3367C2351___IFIXBASEPROXY_CLEAR_OFFSET))(this);
	}

	::System::Void __iFixBaseProxy_OnExecute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5DB763F3367C2351___IFIXBASEPROXY_ONEXECUTE_OFFSET))(this);
	}
};
