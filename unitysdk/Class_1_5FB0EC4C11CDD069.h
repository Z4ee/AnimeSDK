#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetPacket; }
namespace RPG::Client::Dev { class VirtualServerLaunchConfig; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5FB0EC4C11CDD069_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB911F70)
#define CLASS_1_5FB0EC4C11CDD069_METHOD_1_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xB911EB0)
#define CLASS_1_5FB0EC4C11CDD069_METHOD_1_715B152F5E2D1A74_OFFSET UNITYSDK_OFFSET(0xB912020)
#define CLASS_1_5FB0EC4C11CDD069_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB912100)
#define CLASS_1_5FB0EC4C11CDD069_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB9120C0)
#define CLASS_1_5FB0EC4C11CDD069_METHOD_1_F605B905BC38FF2E_OFFSET UNITYSDK_OFFSET(0xB912140)
#define CLASS_1_5FB0EC4C11CDD069__CTOR_OFFSET UNITYSDK_OFFSET(0xB9121C0)

inline static constexpr unsigned int Class_1_5FB0EC4C11CDD069_TypeDefinitionIndex = 80739;

class Class_1_5FB0EC4C11CDD069 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>* PJDABCMHGNK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB0EC4C11CDD069__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_2450CFC043E97F54()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB0EC4C11CDD069_METHOD_1_2450CFC043E97F54_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB0EC4C11CDD069_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_715B152F5E2D1A74(::RPG::Client::NetPacket* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + CLASS_1_5FB0EC4C11CDD069_METHOD_1_715B152F5E2D1A74_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB0EC4C11CDD069_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB0EC4C11CDD069_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::RPG::Client::Dev::VirtualServerLaunchConfig* Method_1_F605B905BC38FF2E()
	{
		return ((::RPG::Client::Dev::VirtualServerLaunchConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5FB0EC4C11CDD069_METHOD_1_F605B905BC38FF2E_OFFSET))(this);
	}
};
