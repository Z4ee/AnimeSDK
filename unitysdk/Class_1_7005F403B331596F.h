#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_85E76291A7596AC8;
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoMarcelBlock; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_7005F403B331596F_METHOD_1_0EAFE72DD9AA7D3A_OFFSET UNITYSDK_OFFSET(0xDB491C0)
#define CLASS_1_7005F403B331596F_METHOD_1_38CBFFE9E560F0F4_OFFSET UNITYSDK_OFFSET(0xDB498B0)
#define CLASS_1_7005F403B331596F_METHOD_1_47DB527636AB3D7D_OFFSET UNITYSDK_OFFSET(0xDB490E0)
#define CLASS_1_7005F403B331596F_METHOD_1_65931DB43F1A7FB7_OFFSET UNITYSDK_OFFSET(0xDB493D0)
#define CLASS_1_7005F403B331596F_METHOD_1_C638E91FC0D3A13A_OFFSET UNITYSDK_OFFSET(0xDB49230)
#define CLASS_1_7005F403B331596F_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xDB49870)
#define CLASS_1_7005F403B331596F_METHOD_1_D32F3F99103B2648_OFFSET UNITYSDK_OFFSET(0xDB49430)
#define CLASS_1_7005F403B331596F__CTOR_OFFSET UNITYSDK_OFFSET(0xDB48FD0)

inline static constexpr unsigned int Class_1_7005F403B331596F_TypeDefinitionIndex = 62650;

class Class_1_7005F403B331596F : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_85E76291A7596AC8*>* Field_1_1; // 0x10
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoMarcelBlock*>* Field_1_0; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_47DB527636AB3D7D(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F_METHOD_1_47DB527636AB3D7D_OFFSET))(this, a1);
	}

	::System::Void Method_1_0EAFE72DD9AA7D3A(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F_METHOD_1_0EAFE72DD9AA7D3A_OFFSET))(this, a1);
	}

	::System::Void Method_1_C638E91FC0D3A13A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F_METHOD_1_C638E91FC0D3A13A_OFFSET))(this);
	}

	::System::Void Method_1_65931DB43F1A7FB7(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F_METHOD_1_65931DB43F1A7FB7_OFFSET))(this, a1);
	}

	::System::Void Method_1_D32F3F99103B2648(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F_METHOD_1_D32F3F99103B2648_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_38CBFFE9E560F0F4(::System::Int32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7005F403B331596F_METHOD_1_38CBFFE9E560F0F4_OFFSET))(this, a1, a2);
	}
};
