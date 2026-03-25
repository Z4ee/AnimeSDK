#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_087F00A74B218EDE;
namespace RPG::Client { class NetPacket; }
namespace RPG::Client::Dev { class VirtualServerLaunchConfig; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_21F37629863F4674_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEC58C0)
#define CLASS_1_21F37629863F4674_METHOD_1_4AF28D4D1DA38F34_OFFSET UNITYSDK_OFFSET(0xBEC5900)
#define CLASS_1_21F37629863F4674_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBEC5950)
#define CLASS_1_21F37629863F4674_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0xBEC5990)
#define CLASS_1_21F37629863F4674__CTOR_OFFSET UNITYSDK_OFFSET(0xBEC59A0)

inline static constexpr unsigned int Class_1_21F37629863F4674_TypeDefinitionIndex = 64442;

class Class_1_21F37629863F4674 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Type*, ::Class_1_087F00A74B218EDE*>* Field_1_2; // 0x10
	::RPG::Client::Dev::VirtualServerLaunchConfig* Field_1_0; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F37629863F4674__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F37629863F4674_DISPOSE_OFFSET))(this);
	}

	::System::Boolean Method_1_4AF28D4D1DA38F34(::RPG::Client::NetPacket* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + CLASS_1_21F37629863F4674_METHOD_1_4AF28D4D1DA38F34_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F37629863F4674_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_21F37629863F4674_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}
};
