#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class NetPacket; }
namespace RPG::Client::Dev { class VirtualServerLaunchConfig; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_087F00A74B218EDE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11C18F30)
#define CLASS_1_087F00A74B218EDE_METHOD_1_3D42293DF670BA0B_OFFSET UNITYSDK_OFFSET(0x11C18F80)
#define CLASS_1_087F00A74B218EDE_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x11C19020)
#define CLASS_1_087F00A74B218EDE_METHOD_1_CA373AA1C7054598_2_OFFSET UNITYSDK_OFFSET(0x11C19060)
#define CLASS_1_087F00A74B218EDE_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11C18ED0)
#define CLASS_1_087F00A74B218EDE_METHOD_1_F605B905BC38FF2E_OFFSET UNITYSDK_OFFSET(0x11C190A0)
#define CLASS_1_087F00A74B218EDE__CTOR_OFFSET UNITYSDK_OFFSET(0x11C19120)

inline static constexpr unsigned int Class_1_087F00A74B218EDE_TypeDefinitionIndex = 72485;

class Class_1_087F00A74B218EDE : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087F00A74B218EDE__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087F00A74B218EDE_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087F00A74B218EDE_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_3D42293DF670BA0B(::RPG::Client::NetPacket* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + CLASS_1_087F00A74B218EDE_METHOD_1_3D42293DF670BA0B_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087F00A74B218EDE_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_2()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087F00A74B218EDE_METHOD_1_CA373AA1C7054598_2_OFFSET))(this);
	}

	::RPG::Client::Dev::VirtualServerLaunchConfig* Method_1_F605B905BC38FF2E()
	{
		return ((::RPG::Client::Dev::VirtualServerLaunchConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_087F00A74B218EDE_METHOD_1_F605B905BC38FF2E_OFFSET))(this);
	}
};
