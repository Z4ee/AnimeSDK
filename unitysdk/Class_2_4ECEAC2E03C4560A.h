#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4ECEAC2E03C4560A_NpcShowState.h"
#include "unitysdk/Class_2_4ECEAC2E03C4560A_NpcStateControlSource.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_8C2489600391E2B0;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_4ECEAC2E03C4560A_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x15D236E0)
#define CLASS_2_4ECEAC2E03C4560A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D236A0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_169C5280D338BD7B_OFFSET UNITYSDK_OFFSET(0x15D23C60)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_22806B2F0BB89E7E_OFFSET UNITYSDK_OFFSET(0x15D22880)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_4BBE37F6853A1AF7_OFFSET UNITYSDK_OFFSET(0x15D23CF0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_7B6EC255F45D034F_OFFSET UNITYSDK_OFFSET(0x15D23BF0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_886EE15AAE69E211_OFFSET UNITYSDK_OFFSET(0x15D22290)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_9AFCA18B112F248A_OFFSET UNITYSDK_OFFSET(0x15D241D0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_A9F402EE239E6F9D_OFFSET UNITYSDK_OFFSET(0x15D22030)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x15D237F0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_D3F9F6E7A5B6D8A1_OFFSET UNITYSDK_OFFSET(0x15D22AD0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x15D22270)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_F0F0FFA43D0DE7AF_OFFSET UNITYSDK_OFFSET(0x15D23090)
#define CLASS_2_4ECEAC2E03C4560A_TICK_OFFSET UNITYSDK_OFFSET(0x15D23980)
#define CLASS_2_4ECEAC2E03C4560A__CTOR_OFFSET UNITYSDK_OFFSET(0x15D242B0)

inline static constexpr unsigned int Class_2_4ECEAC2E03C4560A_TypeDefinitionIndex = 73309;

class Class_2_4ECEAC2E03C4560A : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::String* GJEJIPHAAMF; // 0x18
	::RPG::GameCore::NPCComponent* OLMFOBHMCKN; // 0x20
	::Class_1_8C2489600391E2B0* DFDEKCNODOE; // 0x28
	::RPG::Client::EraFlipperManager* JBIAKKMHBEH; // 0x30
	::System::String* POPAAAFPELI; // 0x38
	::System::UInt32 NHOPHPGJGME; // 0x40
	::System::Int32 HAKEBJOFIGO; // 0x44
	::System::Nullable_1<::Class_2_4ECEAC2E03C4560A_NpcStateControlSource> KBDLFAAGIAA; // 0x48
	::System::Single OJGJKNMNBDH; // 0x50
	::System::Nullable_1<::Class_2_4ECEAC2E03C4560A_NpcShowState> OBDPBBAABGK; // 0x54
	::Class_2_4ECEAC2E03C4560A_NpcShowState CFKDCNLOMNN; // 0x5C
	::System::Single LDGHLNKPJON; // 0x60
	::System::Boolean OPJDFDIKDIN; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_A9F402EE239E6F9D(::RPG::Client::EraFlipperCommonConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::EraFlipperCommonConfig*))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_A9F402EE239E6F9D_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_F0E307B84478A272()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_F0E307B84478A272_OFFSET))(this);
	}

	::System::Void Method_2_886EE15AAE69E211(::Class_2_4ECEAC2E03C4560A_NpcShowState a1, ::Class_2_4ECEAC2E03C4560A_NpcStateControlSource a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4ECEAC2E03C4560A_NpcShowState, ::Class_2_4ECEAC2E03C4560A_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_886EE15AAE69E211_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_DISPOSE_OFFSET))(this);
	}

	::System::Void BeforeDispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_BEFOREDISPOSE_OFFSET))(this);
	}

	::System::Void Tick(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_TICK_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B6EC255F45D034F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_7B6EC255F45D034F_OFFSET))(this, a1);
	}

	::System::Void Method_2_D3F9F6E7A5B6D8A1(::Class_2_4ECEAC2E03C4560A_NpcStateControlSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4ECEAC2E03C4560A_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_D3F9F6E7A5B6D8A1_OFFSET))(this, a1);
	}

	::System::Void Method_2_F0F0FFA43D0DE7AF(::Class_2_4ECEAC2E03C4560A_NpcStateControlSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4ECEAC2E03C4560A_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_F0F0FFA43D0DE7AF_OFFSET))(this, a1);
	}

	::System::UInt32 Method_2_22806B2F0BB89E7E(::System::String* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_22806B2F0BB89E7E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_ABE7715DB28B2DD1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_ABE7715DB28B2DD1_OFFSET))(this);
	}

	::System::Void Method_2_169C5280D338BD7B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_169C5280D338BD7B_OFFSET))(this);
	}

	::System::Void Method_2_4BBE37F6853A1AF7(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_4BBE37F6853A1AF7_OFFSET))(this, a1);
	}

	::System::Void Method_2_9AFCA18B112F248A(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_9AFCA18B112F248A_OFFSET))(this, a1);
	}
};
