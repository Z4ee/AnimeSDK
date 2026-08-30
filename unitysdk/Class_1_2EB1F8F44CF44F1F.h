#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_8C991E7F06D23AEA;
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class UIController; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_0B7E3489D2C0938B_OFFSET UNITYSDK_OFFSET(0xFA8CCD0)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_159CB55E631AFCB9_OFFSET UNITYSDK_OFFSET(0xFA8CA90)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_1E325D3CDDFBC683_OFFSET UNITYSDK_OFFSET(0xFA8CDE0)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_32B2368221A04800_OFFSET UNITYSDK_OFFSET(0xFA8C9E0)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_850A1E8990DC3F3C_OFFSET UNITYSDK_OFFSET(0xFA8CB30)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_99D8B5DCABEC4B6F_OFFSET UNITYSDK_OFFSET(0xFA8C880)
#define CLASS_1_2EB1F8F44CF44F1F_METHOD_1_A9C355BD643DDEBB_OFFSET UNITYSDK_OFFSET(0xFA8CE40)
#define CLASS_1_2EB1F8F44CF44F1F__CTOR_OFFSET UNITYSDK_OFFSET(0xFA8D150)

inline static constexpr unsigned int Class_1_2EB1F8F44CF44F1F_TypeDefinitionIndex = 71588;

class Class_1_2EB1F8F44CF44F1F : public ::System::Object
{
public:
	::RPG::Client::IAssetOperation* DKCONOOEOBK; // 0x10
	::System::String* MGFNJPADMPO; // 0x18
	::Class_1_8C991E7F06D23AEA* NHNHKBJJKPP; // 0x20
	::System::String* ENLGFOEJAJE; // 0x28
	::System::String* FADILKPGCEM; // 0x30
	::System::String* GLGOFGALBHP; // 0x38
	::RPG::Client::UIController* CFKHNPGEAJA; // 0x40
	::System::Boolean FIOCJFMLCIB; // 0x48
	::System::Boolean BPDHNDFMINI; // 0x49

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

	::System::Void Method_1_159CB55E631AFCB9()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_159CB55E631AFCB9_OFFSET))(this);
	}

	::System::Void Method_1_850A1E8990DC3F3C(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_850A1E8990DC3F3C_OFFSET))(this, a1);
	}

	::System::Void Method_1_1E325D3CDDFBC683(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_1E325D3CDDFBC683_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_A9C355BD643DDEBB(::RPG::Client::IAssetOperation* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_A9C355BD643DDEBB_OFFSET))(this, a1);
	}

	::System::Void Method_1_0B7E3489D2C0938B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2EB1F8F44CF44F1F_METHOD_1_0B7E3489D2C0938B_OFFSET))(this);
	}
};
