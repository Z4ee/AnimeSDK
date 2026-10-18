#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Object.h"

class Class_1_BC5EACCAD3CCEA8F;
namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AA487104C1B4D259_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB280140)
#define CLASS_1_AA487104C1B4D259_METHOD_1_04E93755C2699E6C_OFFSET UNITYSDK_OFFSET(0xB281350)
#define CLASS_1_AA487104C1B4D259_METHOD_1_10D6968744162132_OFFSET UNITYSDK_OFFSET(0xB2823F0)
#define CLASS_1_AA487104C1B4D259_METHOD_1_2077883F0759FBA2_OFFSET UNITYSDK_OFFSET(0xB280230)
#define CLASS_1_AA487104C1B4D259_METHOD_1_207D0B184A23A8F0_OFFSET UNITYSDK_OFFSET(0xB280DB0)
#define CLASS_1_AA487104C1B4D259_METHOD_1_278EC8D053997F8C_OFFSET UNITYSDK_OFFSET(0xB2806B0)
#define CLASS_1_AA487104C1B4D259_METHOD_1_39F4A4A411885283_OFFSET UNITYSDK_OFFSET(0xB281060)
#define CLASS_1_AA487104C1B4D259_METHOD_1_3B7B1888B1FA374E_OFFSET UNITYSDK_OFFSET(0xB281EB0)
#define CLASS_1_AA487104C1B4D259_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0xB2818E0)
#define CLASS_1_AA487104C1B4D259_METHOD_1_5A46CC89DA6E8BF7_OFFSET UNITYSDK_OFFSET(0xB281240)
#define CLASS_1_AA487104C1B4D259_METHOD_1_5E1FBA3144D5777D_1_OFFSET UNITYSDK_OFFSET(0xB281C30)
#define CLASS_1_AA487104C1B4D259_METHOD_1_5E1FBA3144D5777D_OFFSET UNITYSDK_OFFSET(0xB281CC0)
#define CLASS_1_AA487104C1B4D259_METHOD_1_662F19C2DFE267DD_OFFSET UNITYSDK_OFFSET(0xB281D50)
#define CLASS_1_AA487104C1B4D259_METHOD_1_67A833BBAF2E0450_OFFSET UNITYSDK_OFFSET(0xB2820B0)
#define CLASS_1_AA487104C1B4D259_METHOD_1_67B10534C8C5ACFE_1_OFFSET UNITYSDK_OFFSET(0xB281600)
#define CLASS_1_AA487104C1B4D259_METHOD_1_67B10534C8C5ACFE_OFFSET UNITYSDK_OFFSET(0xB281480)
#define CLASS_1_AA487104C1B4D259_METHOD_1_83692E026DA8F231_OFFSET UNITYSDK_OFFSET(0xB281930)
#define CLASS_1_AA487104C1B4D259_METHOD_1_A6DF784193A62B2F_OFFSET UNITYSDK_OFFSET(0xB281780)
#define CLASS_1_AA487104C1B4D259_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0xB282A90)
#define CLASS_1_AA487104C1B4D259_METHOD_1_D6215D17E55EDA76_OFFSET UNITYSDK_OFFSET(0xB280A40)
#define CLASS_1_AA487104C1B4D259_METHOD_1_E3019858078E395C_OFFSET UNITYSDK_OFFSET(0xB281E00)
#define CLASS_1_AA487104C1B4D259_METHOD_1_E8A5DE9BEC4EF464_OFFSET UNITYSDK_OFFSET(0xB2827B0)
#define CLASS_1_AA487104C1B4D259_METHOD_1_F6DA20B2826C2F1E_OFFSET UNITYSDK_OFFSET(0xB282510)
#define CLASS_1_AA487104C1B4D259_METHOD_1_FEFE961571DB9C73_OFFSET UNITYSDK_OFFSET(0xB280F40)
#define CLASS_1_AA487104C1B4D259__CTOR_OFFSET UNITYSDK_OFFSET(0xB280130)

inline static constexpr unsigned int Class_1_AA487104C1B4D259_TypeDefinitionIndex = 55949;

class Class_1_AA487104C1B4D259 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* HLAIAKPMBOM; // 0x10
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* PJOMHLNFMHC; // 0x18
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_BC5EACCAD3CCEA8F*>* JPJJDLAHLMC; // 0x20
	::RPG::GameCore::TurnBasedGameMode* JADHLODNADK; // 0x28

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_2077883F0759FBA2(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::System::Boolean a4, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a5, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_2077883F0759FBA2_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_207D0B184A23A8F0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_207D0B184A23A8F0_OFFSET))(this, a1);
	}

	::System::Void Method_1_FEFE961571DB9C73(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_FEFE961571DB9C73_OFFSET))(this, a1);
	}

	::System::Void Method_1_278EC8D053997F8C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_278EC8D053997F8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_5A46CC89DA6E8BF7(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_5A46CC89DA6E8BF7_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_04E93755C2699E6C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_04E93755C2699E6C_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_67B10534C8C5ACFE(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_67B10534C8C5ACFE_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_67B10534C8C5ACFE_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_67B10534C8C5ACFE_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_A6DF784193A62B2F(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_A6DF784193A62B2F_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_83692E026DA8F231(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_83692E026DA8F231_OFFSET))(this, a1);
	}

	::System::Void Method_1_3B7B1888B1FA374E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_3B7B1888B1FA374E_OFFSET))(this, a1);
	}

	::System::Void Method_1_67A833BBAF2E0450(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_67A833BBAF2E0450_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E1FBA3144D5777D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_5E1FBA3144D5777D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E1FBA3144D5777D_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_5E1FBA3144D5777D_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_662F19C2DFE267DD(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_662F19C2DFE267DD_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnBasedAbilityComponent* Method_1_10D6968744162132(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::TurnBasedAbilityComponent*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_10D6968744162132_OFFSET))(this, a1);
	}

	::Class_1_BC5EACCAD3CCEA8F* Method_1_E3019858078E395C(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_BC5EACCAD3CCEA8F*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_E3019858078E395C_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F6DA20B2826C2F1E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_F6DA20B2826C2F1E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_E8A5DE9BEC4EF464(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_E8A5DE9BEC4EF464_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_D6215D17E55EDA76(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_D6215D17E55EDA76_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_39F4A4A411885283(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_39F4A4A411885283_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_AA487104C1B4D259_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
