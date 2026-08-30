#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActionDelayLinkExtraBehaviorMask.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Object.h"

class Class_1_93D8EFB1FD78A009_Class_1_557C23A103C4D72D;
namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }

#define CLASS_1_93D8EFB1FD78A009_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17076A00)
#define CLASS_1_93D8EFB1FD78A009_GET_LINKOWNER_OFFSET UNITYSDK_OFFSET(0x17078000)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_187C92AE1C2F2E2C_OFFSET UNITYSDK_OFFSET(0x17077850)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_1E27A7B84BD57C4A_OFFSET UNITYSDK_OFFSET(0x17077390)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_1E5D2979E033A21E_OFFSET UNITYSDK_OFFSET(0x17076B10)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_2566AD459572DFC3_OFFSET UNITYSDK_OFFSET(0x17076F60)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_37DB74598C4D94D2_OFFSET UNITYSDK_OFFSET(0x17077240)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_3D354BAE6F0C8751_OFFSET UNITYSDK_OFFSET(0x17077530)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_85AB18F6FF7A8DCA_OFFSET UNITYSDK_OFFSET(0x17077E30)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_89AE3FDE25BEC3FA_1_OFFSET UNITYSDK_OFFSET(0x17077AB0)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_89AE3FDE25BEC3FA_OFFSET UNITYSDK_OFFSET(0x17077A50)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_8B6F11557B375B74_OFFSET UNITYSDK_OFFSET(0x17076F00)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_95780ED94B90ED36_OFFSET UNITYSDK_OFFSET(0x17078020)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_9D3491E7163E2FBA_OFFSET UNITYSDK_OFFSET(0x170778F0)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_BFAA377DD372FB76_OFFSET UNITYSDK_OFFSET(0x170774C0)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_CC7C1F853C4B3B52_OFFSET UNITYSDK_OFFSET(0x17077B10)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_DF5101B5E9893571_OFFSET UNITYSDK_OFFSET(0x170775E0)
#define CLASS_1_93D8EFB1FD78A009_METHOD_1_E56F4CDA863E5614_OFFSET UNITYSDK_OFFSET(0x17077B90)
#define CLASS_1_93D8EFB1FD78A009_SET_LINKOWNER_OFFSET UNITYSDK_OFFSET(0x17078010)
#define CLASS_1_93D8EFB1FD78A009__CTOR_OFFSET UNITYSDK_OFFSET(0x17076910)

inline static constexpr unsigned int Class_1_93D8EFB1FD78A009_TypeDefinitionIndex = 56138;

class Class_1_93D8EFB1FD78A009 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* _LinkOwner_k__BackingField; // 0x10
	::System::Collections::Generic::LinkedList_1<::Class_1_93D8EFB1FD78A009_Class_1_557C23A103C4D72D*>* NJGEMJJHMOH; // 0x18
	::System::Int32 FONIMKAFEJO; // 0x20
	::System::Int32 AHJPBOBDLOF; // 0x24

	::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_1E5D2979E033A21E(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_1E5D2979E033A21E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_2566AD459572DFC3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_2566AD459572DFC3_OFFSET))(this);
	}

	::System::Void Method_1_37DB74598C4D94D2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_37DB74598C4D94D2_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_1E27A7B84BD57C4A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_1E27A7B84BD57C4A_OFFSET))(this, a1);
	}

	::System::Void Method_1_BFAA377DD372FB76(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_BFAA377DD372FB76_OFFSET))(this, a1);
	}

	::RPG::GameCore::ActionDelayLinkExtraBehaviorMask Method_1_3D354BAE6F0C8751(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::ActionDelayLinkExtraBehaviorMask(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_3D354BAE6F0C8751_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_187C92AE1C2F2E2C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_187C92AE1C2F2E2C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_9D3491E7163E2FBA(::RPG::GameCore::TurnBasedGameMode* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_9D3491E7163E2FBA_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_89AE3FDE25BEC3FA(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_89AE3FDE25BEC3FA_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_89AE3FDE25BEC3FA_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_89AE3FDE25BEC3FA_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8B6F11557B375B74(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_8B6F11557B375B74_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_CC7C1F853C4B3B52(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_CC7C1F853C4B3B52_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_E56F4CDA863E5614(::RPG::GameCore::FixPoint a1, ::Struct_2_5909FD7779934CCA& a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA&))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_E56F4CDA863E5614_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_85AB18F6FF7A8DCA(::RPG::GameCore::GameEntity* a1, ::System::Int32 a2, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Int32, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_85AB18F6FF7A8DCA_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_DF5101B5E9893571(::RPG::GameCore::ActionDelayLinkExtraBehaviorMask a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActionDelayLinkExtraBehaviorMask, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_DF5101B5E9893571_OFFSET))(this, a1, a2);
	}

	::RPG::GameCore::GameEntity* get_LinkOwner()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_GET_LINKOWNER_OFFSET))(this);
	}

	::System::Void set_LinkOwner(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_SET_LINKOWNER_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_95780ED94B90ED36()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_93D8EFB1FD78A009_METHOD_1_95780ED94B90ED36_OFFSET))(this);
	}
};
