#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Object.h"

class Class_1_93D8EFB1FD78A009;
namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D5389D56E7AD298D_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18882B00)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_209448E42BAC66EB_OFFSET UNITYSDK_OFFSET(0x18882BF0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_308E9DFC3D48597E_OFFSET UNITYSDK_OFFSET(0x18884C30)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_39F4A4A411885283_OFFSET UNITYSDK_OFFSET(0x188839D0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_41F4BE4D485376D6_1_OFFSET UNITYSDK_OFFSET(0x188849F0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_41F4BE4D485376D6_OFFSET UNITYSDK_OFFSET(0x18884380)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_4805464F89623143_OFFSET UNITYSDK_OFFSET(0x18883020)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x18884330)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_5A46CC89DA6E8BF7_OFFSET UNITYSDK_OFFSET(0x18883BA0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_5E1FBA3144D5777D_1_OFFSET UNITYSDK_OFFSET(0x18884510)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_5E1FBA3144D5777D_OFFSET UNITYSDK_OFFSET(0x188845A0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_7E4802047CBE6284_OFFSET UNITYSDK_OFFSET(0x18884D50)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_8A384ED30D00AB29_OFFSET UNITYSDK_OFFSET(0x18884BC0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_8CAE99DA3CAE0987_1_OFFSET UNITYSDK_OFFSET(0x18883FF0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_8CAE99DA3CAE0987_OFFSET UNITYSDK_OFFSET(0x18883E40)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_AD226AD783F4D797_OFFSET UNITYSDK_OFFSET(0x188833F0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x18884EC0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_B41BA821E1AB097D_OFFSET UNITYSDK_OFFSET(0x188847F0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_B4EA5393BA544425_OFFSET UNITYSDK_OFFSET(0x18884710)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_C0DCCDE91D66EB37_OFFSET UNITYSDK_OFFSET(0x18883CE0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_D2EFF05EE3AA176A_OFFSET UNITYSDK_OFFSET(0x18883870)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_DBB521DB89EDA888_OFFSET UNITYSDK_OFFSET(0x188841A0)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_E8460A50D8D7C5D4_OFFSET UNITYSDK_OFFSET(0x18884630)
#define CLASS_1_D5389D56E7AD298D_METHOD_1_EDDA83EBEA0D5937_OFFSET UNITYSDK_OFFSET(0x188836B0)
#define CLASS_1_D5389D56E7AD298D__CTOR_OFFSET UNITYSDK_OFFSET(0x18882AF0)

inline static constexpr unsigned int Class_1_D5389D56E7AD298D_TypeDefinitionIndex = 56137;

class Class_1_D5389D56E7AD298D : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* HLAIAKPMBOM; // 0x10
	::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_93D8EFB1FD78A009*>* JPJJDLAHLMC; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* PJOMHLNFMHC; // 0x28

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_209448E42BAC66EB(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::System::Boolean a4, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a5, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_209448E42BAC66EB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_EDDA83EBEA0D5937(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_EDDA83EBEA0D5937_OFFSET))(this, a1);
	}

	::System::Void Method_1_D2EFF05EE3AA176A(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_D2EFF05EE3AA176A_OFFSET))(this, a1);
	}

	::System::Void Method_1_4805464F89623143(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_4805464F89623143_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A46CC89DA6E8BF7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_5A46CC89DA6E8BF7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C0DCCDE91D66EB37(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_C0DCCDE91D66EB37_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8CAE99DA3CAE0987(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_8CAE99DA3CAE0987_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8CAE99DA3CAE0987_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_8CAE99DA3CAE0987_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DBB521DB89EDA888(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_DBB521DB89EDA888_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_41F4BE4D485376D6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_41F4BE4D485376D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_B41BA821E1AB097D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_B41BA821E1AB097D_OFFSET))(this, a1);
	}

	::System::Void Method_1_41F4BE4D485376D6_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_41F4BE4D485376D6_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E1FBA3144D5777D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_5E1FBA3144D5777D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E1FBA3144D5777D_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_5E1FBA3144D5777D_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_E8460A50D8D7C5D4(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_E8460A50D8D7C5D4_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnBasedAbilityComponent* Method_1_8A384ED30D00AB29(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::TurnBasedAbilityComponent*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_8A384ED30D00AB29_OFFSET))(this, a1);
	}

	::Class_1_93D8EFB1FD78A009* Method_1_B4EA5393BA544425(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_93D8EFB1FD78A009*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_B4EA5393BA544425_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_308E9DFC3D48597E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_308E9DFC3D48597E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7E4802047CBE6284(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_7E4802047CBE6284_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_AD226AD783F4D797(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_AD226AD783F4D797_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_39F4A4A411885283(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_39F4A4A411885283_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D5389D56E7AD298D_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
