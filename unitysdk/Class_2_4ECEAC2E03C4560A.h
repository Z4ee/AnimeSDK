#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_4ECEAC2E03C4560A_NpcShowState.h"
#include "unitysdk/Class_2_4ECEAC2E03C4560A_NpcStateControlSource.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_0DD2EC99154A46F0;
namespace RPG::Client { class EraFlipperCommonConfig; }
namespace RPG::Client { class EraFlipperManager; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class Object; }
namespace System { class String; }

#define CLASS_2_4ECEAC2E03C4560A_BEFOREDISPOSE_OFFSET UNITYSDK_OFFSET(0x16233FC0)
#define CLASS_2_4ECEAC2E03C4560A_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16233F80)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_169C5280D338BD7B_OFFSET UNITYSDK_OFFSET(0x162345C0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_1AD51778485AD495_OFFSET UNITYSDK_OFFSET(0x162344C0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_22806B2F0BB89E7E_OFFSET UNITYSDK_OFFSET(0x162330A0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_38E5BF87E9568775_OFFSET UNITYSDK_OFFSET(0x16233910)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_4BBE37F6853A1AF7_OFFSET UNITYSDK_OFFSET(0x157B5910)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_66E0E2A93F031E36_OFFSET UNITYSDK_OFFSET(0x162332F0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_886EE15AAE69E211_OFFSET UNITYSDK_OFFSET(0x16232AC0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_9AFCA18B112F248A_OFFSET UNITYSDK_OFFSET(0x157B5DF0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_A9F402EE239E6F9D_OFFSET UNITYSDK_OFFSET(0x16232860)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_ABE7715DB28B2DD1_OFFSET UNITYSDK_OFFSET(0x162340D0)
#define CLASS_2_4ECEAC2E03C4560A_METHOD_2_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16232AA0)
#define CLASS_2_4ECEAC2E03C4560A_TICK_OFFSET UNITYSDK_OFFSET(0x16234250)
#define CLASS_2_4ECEAC2E03C4560A__CTOR_OFFSET UNITYSDK_OFFSET(0x157B5ED0)

inline static constexpr unsigned int Class_2_4ECEAC2E03C4560A_TypeDefinitionIndex = 69955;

class Class_2_4ECEAC2E03C4560A : public ::RPG::GameCore::GameComponentBase
{
public:
	::System::String* Field_2_0; // 0x18
	::Class_1_0DD2EC99154A46F0* Field_2_1; // 0x20
	::RPG::Client::EraFlipperManager* Field_2_2; // 0x28
	::System::String* Field_2_3; // 0x30
	::RPG::GameCore::NPCComponent* Field_2_4; // 0x38
	::System::Nullable_1<::Class_2_4ECEAC2E03C4560A_NpcShowState> Field_2_5; // 0x40
	::System::UInt32 Field_2_6; // 0x48
	::System::Single Field_2_7; // 0x4C
	::System::Nullable_1<::Class_2_4ECEAC2E03C4560A_NpcStateControlSource> Field_2_8; // 0x50
	::System::Single Field_2_9; // 0x58
	::System::Boolean Field_2_10; // 0x5C
	::System::Int32 Field_2_11; // 0x60
	::Class_2_4ECEAC2E03C4560A_NpcShowState Field_2_12; // 0x64

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

	::System::Void Method_2_1AD51778485AD495(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_1AD51778485AD495_OFFSET))(this, a1);
	}

	::System::Void Method_2_66E0E2A93F031E36(::Class_2_4ECEAC2E03C4560A_NpcStateControlSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4ECEAC2E03C4560A_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_66E0E2A93F031E36_OFFSET))(this, a1);
	}

	::System::Void Method_2_38E5BF87E9568775(::Class_2_4ECEAC2E03C4560A_NpcStateControlSource a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_4ECEAC2E03C4560A_NpcStateControlSource))((::PBYTE)hIl2Cpp + CLASS_2_4ECEAC2E03C4560A_METHOD_2_38E5BF87E9568775_OFFSET))(this, a1);
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
