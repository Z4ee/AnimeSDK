#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/Struct_2_5909FD7779934CCA.h"
#include "unitysdk/System/Object.h"

class Class_1_E046197DFD41D53B;
namespace RPG::GameCore { class ActionDelayLinkExtraBehaviorGroup; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_690DBF0583E68C05_DISPOSE_OFFSET UNITYSDK_OFFSET(0x9061350)
#define CLASS_1_690DBF0583E68C05_METHOD_1_043DE4FEF152B00E_OFFSET UNITYSDK_OFFSET(0x9061CA0)
#define CLASS_1_690DBF0583E68C05_METHOD_1_308E9DFC3D48597E_OFFSET UNITYSDK_OFFSET(0x9063180)
#define CLASS_1_690DBF0583E68C05_METHOD_1_39F4A4A411885283_OFFSET UNITYSDK_OFFSET(0x9061F50)
#define CLASS_1_690DBF0583E68C05_METHOD_1_41F4BE4D485376D6_1_OFFSET UNITYSDK_OFFSET(0x9062F40)
#define CLASS_1_690DBF0583E68C05_METHOD_1_41F4BE4D485376D6_OFFSET UNITYSDK_OFFSET(0x9062920)
#define CLASS_1_690DBF0583E68C05_METHOD_1_47CE35FB676FEA2C_OFFSET UNITYSDK_OFFSET(0x90620C0)
#define CLASS_1_690DBF0583E68C05_METHOD_1_57D80B372834C5D1_OFFSET UNITYSDK_OFFSET(0x90628D0)
#define CLASS_1_690DBF0583E68C05_METHOD_1_5E1FBA3144D5777D_1_OFFSET UNITYSDK_OFFSET(0x9062AB0)
#define CLASS_1_690DBF0583E68C05_METHOD_1_5E1FBA3144D5777D_OFFSET UNITYSDK_OFFSET(0x9062B40)
#define CLASS_1_690DBF0583E68C05_METHOD_1_5F22147385A4AE85_OFFSET UNITYSDK_OFFSET(0x9062DB0)
#define CLASS_1_690DBF0583E68C05_METHOD_1_7E4802047CBE6284_OFFSET UNITYSDK_OFFSET(0x90632A0)
#define CLASS_1_690DBF0583E68C05_METHOD_1_8CAE99DA3CAE0987_1_OFFSET UNITYSDK_OFFSET(0x9062550)
#define CLASS_1_690DBF0583E68C05_METHOD_1_8CAE99DA3CAE0987_OFFSET UNITYSDK_OFFSET(0x9062380)
#define CLASS_1_690DBF0583E68C05_METHOD_1_A02F482214E2D485_OFFSET UNITYSDK_OFFSET(0x9061850)
#define CLASS_1_690DBF0583E68C05_METHOD_1_B1445E8504415D4D_OFFSET UNITYSDK_OFFSET(0x9063410)
#define CLASS_1_690DBF0583E68C05_METHOD_1_B4EA5393BA544425_OFFSET UNITYSDK_OFFSET(0x9062CC0)
#define CLASS_1_690DBF0583E68C05_METHOD_1_C0DCCDE91D66EB37_OFFSET UNITYSDK_OFFSET(0x9062210)
#define CLASS_1_690DBF0583E68C05_METHOD_1_DBB521DB89EDA888_OFFSET UNITYSDK_OFFSET(0x9062720)
#define CLASS_1_690DBF0583E68C05_METHOD_1_E6CFC0A140A7C0E8_OFFSET UNITYSDK_OFFSET(0x9061460)
#define CLASS_1_690DBF0583E68C05_METHOD_1_E8460A50D8D7C5D4_OFFSET UNITYSDK_OFFSET(0x9062BD0)
#define CLASS_1_690DBF0583E68C05_METHOD_1_FCC9C0ECC80D3F78_OFFSET UNITYSDK_OFFSET(0x9063110)
#define CLASS_1_690DBF0583E68C05__CTOR_OFFSET UNITYSDK_OFFSET(0x9061340)

inline static constexpr unsigned int Class_1_690DBF0583E68C05_TypeDefinitionIndex = 51602;

class Class_1_690DBF0583E68C05 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::Class_1_E046197DFD41D53B*>* Field_1_1; // 0x10
	::RPG::GameCore::TurnBasedGameMode* Field_1_0; // 0x18
	::RPG::GameCore::GameEntity* Field_1_3; // 0x20
	::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*>* Field_1_2; // 0x28

	::System::Void _ctor(::RPG::GameCore::TurnBasedGameMode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedGameMode*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_DISPOSE_OFFSET))(this);
	}

	::System::Void Method_1_E6CFC0A140A7C0E8(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Int32 a3, ::System::Boolean a4, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a5, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Int32, ::System::Boolean, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*, ::RPG::GameCore::ActionDelayLinkExtraBehaviorGroup*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_E6CFC0A140A7C0E8_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_A02F482214E2D485(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_A02F482214E2D485_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_47CE35FB676FEA2C(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_47CE35FB676FEA2C_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C0DCCDE91D66EB37(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::FixPoint a2, ::Struct_2_5909FD7779934CCA a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::FixPoint, ::Struct_2_5909FD7779934CCA))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_C0DCCDE91D66EB37_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_1_8CAE99DA3CAE0987(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_8CAE99DA3CAE0987_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_8CAE99DA3CAE0987_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_8CAE99DA3CAE0987_1_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_DBB521DB89EDA888(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_DBB521DB89EDA888_OFFSET))(this, a1);
	}

	::System::Void Method_1_57D80B372834C5D1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_57D80B372834C5D1_OFFSET))(this, a1);
	}

	::System::Void Method_1_41F4BE4D485376D6(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_41F4BE4D485376D6_OFFSET))(this, a1);
	}

	::System::Void Method_1_5F22147385A4AE85(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_5F22147385A4AE85_OFFSET))(this, a1);
	}

	::System::Void Method_1_41F4BE4D485376D6_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_41F4BE4D485376D6_1_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E1FBA3144D5777D(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_5E1FBA3144D5777D_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5E1FBA3144D5777D_1(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_5E1FBA3144D5777D_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_E8460A50D8D7C5D4(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_E8460A50D8D7C5D4_OFFSET))(this, a1);
	}

	::RPG::GameCore::TurnBasedAbilityComponent* Method_1_FCC9C0ECC80D3F78(::RPG::GameCore::GameEntity* a1)
	{
		return ((::RPG::GameCore::TurnBasedAbilityComponent*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_FCC9C0ECC80D3F78_OFFSET))(this, a1);
	}

	::Class_1_E046197DFD41D53B* Method_1_B4EA5393BA544425(::RPG::GameCore::GameEntity* a1)
	{
		return ((::Class_1_E046197DFD41D53B*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_B4EA5393BA544425_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_308E9DFC3D48597E(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_308E9DFC3D48597E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_7E4802047CBE6284(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_7E4802047CBE6284_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_043DE4FEF152B00E(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_043DE4FEF152B00E_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_39F4A4A411885283(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_39F4A4A411885283_OFFSET))(this, a1);
	}

	::RPG::GameCore::GameEntity* Method_1_B1445E8504415D4D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_690DBF0583E68C05_METHOD_1_B1445E8504415D4D_OFFSET))(this);
	}
};
