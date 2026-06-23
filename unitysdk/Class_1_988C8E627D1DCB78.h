#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Struct_2_9A57456E759DE2E2.h"
#include "unitysdk/Struct_2_C32040AFC39CAE18.h"
#include "unitysdk/Struct_2_E89D96144D6E93F8_1.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_508;
class Class_1_5092FCA5A67513C7;
class Class_2_4BF2ECB2D94E7F27;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_988C8E627D1DCB78_METHOD_1_0B41682CC5B68963_OFFSET UNITYSDK_OFFSET(0x134015B0)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x13401880)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_29753DB3C8C934FE_OFFSET UNITYSDK_OFFSET(0x134001B0)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_2E3D0B01E2EC5EE6_OFFSET UNITYSDK_OFFSET(0x13400070)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_72D28F599E3708CB_OFFSET UNITYSDK_OFFSET(0x134013A0)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_D42434DA1A90844D_OFFSET UNITYSDK_OFFSET(0x13400670)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_ECDAE25129D07C45_OFFSET UNITYSDK_OFFSET(0x13400DE0)
#define CLASS_1_988C8E627D1DCB78_METHOD_1_F9FBF793B1020064_OFFSET UNITYSDK_OFFSET(0x134010C0)
#define CLASS_1_988C8E627D1DCB78__CTOR_OFFSET UNITYSDK_OFFSET(0x13400060)

inline static constexpr unsigned int Class_1_988C8E627D1DCB78_TypeDefinitionIndex = 78580;

class Class_1_988C8E627D1DCB78 : public ::System::Object
{
public:
	static ::System::String** StaticGet_Field_1_1()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_988C8E627D1DCB78_TypeDefinitionIndex)->GetStaticField(0x3BAF0);
	}
	::Class_1_5092FCA5A67513C7* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78__CTOR_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Class_1_5092FCA5A67513C7*> Method_1_2E3D0B01E2EC5EE6(::System::String* a1, ::Foundation::AssetPath a2, ::Class_0_16E4307DCC419505_508* a3)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Class_1_5092FCA5A67513C7*>(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::Class_0_16E4307DCC419505_508*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_2E3D0B01E2EC5EE6_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_29753DB3C8C934FE(::Struct_2_E89D96144D6E93F8_1 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_E89D96144D6E93F8_1))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_29753DB3C8C934FE_OFFSET))(this, a1);
	}

	::Class_1_5092FCA5A67513C7* Method_1_F9FBF793B1020064(::Foundation::AssetPath a1, ::Class_0_16E4307DCC419505_508* a2)
	{
		return ((::Class_1_5092FCA5A67513C7*(*)(::PVOID, ::Foundation::AssetPath, ::Class_0_16E4307DCC419505_508*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_F9FBF793B1020064_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_ECDAE25129D07C45(::System::Collections::Generic::List_1<::Struct_2_C32040AFC39CAE18>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Struct_2_C32040AFC39CAE18>*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_ECDAE25129D07C45_OFFSET))(this, a1);
	}

	::System::Void Method_1_72D28F599E3708CB(::SimpleJSON::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_72D28F599E3708CB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B41682CC5B68963(::Foundation::AssetPath a1, ::Class_0_16E4307DCC419505_508* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::Class_0_16E4307DCC419505_508*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_0B41682CC5B68963_OFFSET))(this, a1, a2);
	}

	static ::System::String* Method_1_126AB3935214AA22()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_126AB3935214AA22_OFFSET))();
	}

	static ::System::Void Method_1_D42434DA1A90844D(::System::String* a1, ::System::Collections::Generic::List_1<::Struct_2_9A57456E759DE2E2>* a2, ::Class_2_4BF2ECB2D94E7F27* a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Struct_2_9A57456E759DE2E2>*, ::Class_2_4BF2ECB2D94E7F27*))((::PBYTE)hIl2Cpp + CLASS_1_988C8E627D1DCB78_METHOD_1_D42434DA1A90844D_OFFSET))(a1, a2, a3);
	}
};
