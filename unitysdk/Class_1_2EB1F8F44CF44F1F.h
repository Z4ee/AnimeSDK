#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8C991E7F06D23AEA;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_1E325D3CDDFBC683_OFFSET UNITYSDK_OFFSET(0xE49C1C0)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0xE49BCB0)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_419C8DF6F1DACB65_OFFSET UNITYSDK_OFFSET(0xE49BE00)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_99D8B5DCABEC4B6F_OFFSET UNITYSDK_OFFSET(0xE49BB50)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_A9C355BD643DDEBB_OFFSET UNITYSDK_OFFSET(0xE49C220)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_AE5D2F3CFBE15D74_OFFSET UNITYSDK_OFFSET(0xE49BD60)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_AFC8215C57A0845A_OFFSET UNITYSDK_OFFSET(0xE49BFA0)
#define CLASS_1_2EB1F8F44CF44F1F__CTOR_OFFSET UNITYSDK_OFFSET(0xE49C470)

inline static constexpr unsigned int Class_1_2EB1F8F44CF44F1F_TypeDefinitionIndex = 66962;

class Class_1_2EB1F8F44CF44F1F : public ::System::Object
{
public:
	::Class_1_8C991E7F06D23AEA* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::RPG::Client::IAssetOperation* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30
	::System::String* Field_1_5; // 0x38
	::RPG::Client::UIController* Field_1_6; // 0x40
	::System::Boolean Field_1_7; // 0x48
	::System::Boolean Field_1_8; // 0x49

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_99D8B5DCABEC4B6F(::RPG::Client::UIController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::UIController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_99D8B5DCABEC4B6F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_32B2368221A04800(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_32B2368221A04800_OFFSET))(this, a1);
	}

	::System::Void Method_1_AE5D2F3CFBE15D74()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_AE5D2F3CFBE15D74_OFFSET))(this);
	}

	::System::Void Method_1_419C8DF6F1DACB65(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_419C8DF6F1DACB65_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E325D3CDDFBC683(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_1E325D3CDDFBC683_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9C355BD643DDEBB(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_A9C355BD643DDEBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_AFC8215C57A0845A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_AFC8215C57A0845A_OFFSET))(this);
	}
};
