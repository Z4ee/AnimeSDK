#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_540;
namespace RPG::GameCore { class GameWorld; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_BF54F6E99D12A54E_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x91D3580)
#define CLASS_1_BF54F6E99D12A54E_METHOD_1_85A80C4953D32E8B_OFFSET UNITYSDK_OFFSET(0x91D34D0)
#define CLASS_1_BF54F6E99D12A54E_METHOD_1_9B8F396A08AE2D04_1_OFFSET UNITYSDK_OFFSET(0x91D38F0)
#define CLASS_1_BF54F6E99D12A54E_METHOD_1_9B8F396A08AE2D04_OFFSET UNITYSDK_OFFSET(0x91D37F0)
#define CLASS_1_BF54F6E99D12A54E_METHOD_1_F5E47CC27E96B888_OFFSET UNITYSDK_OFFSET(0x91D35E0)
#define CLASS_1_BF54F6E99D12A54E__CTOR_OFFSET UNITYSDK_OFFSET(0x91D39F0)

inline static constexpr unsigned int Class_1_BF54F6E99D12A54E_TypeDefinitionIndex = 53316;

class Class_1_BF54F6E99D12A54E : public ::System::Object
{
public:
	::RPG::GameCore::GameWorld* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_540*>* Field_1_3; // 0x20
	::System::Int32 Field_1_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF54F6E99D12A54E__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_85A80C4953D32E8B(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF54F6E99D12A54E_METHOD_1_85A80C4953D32E8B_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B8F396A08AE2D04(::Class_0_16E4307DCC419505_540* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_540*))((::PBYTE)hIl2Cpp + CLASS_1_BF54F6E99D12A54E_METHOD_1_9B8F396A08AE2D04_OFFSET))(this, a1);
	}

	::System::Void Method_1_9B8F396A08AE2D04_1(::Class_0_16E4307DCC419505_540* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_540*))((::PBYTE)hIl2Cpp + CLASS_1_BF54F6E99D12A54E_METHOD_1_9B8F396A08AE2D04_1_OFFSET))(this, a1);
	}

	::System::Void Method_1_F5E47CC27E96B888(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_BF54F6E99D12A54E_METHOD_1_F5E47CC27E96B888_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BF54F6E99D12A54E_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}
};
