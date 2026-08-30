#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatSkillPreviewInvokeType.h"
#include "unitysdk/RPG/GameCore/DiceCombatValueOperation.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatGameState.h"
#include "unitysdk/RPG/LittleGameShare/DiceCombatCore/DiceCombatSkillPreviewLogicInvokeType.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_1A3EBF12F3E80953;
class Class_2_3616FDE8A71D0590;
class Class_2_AEE59ED8DADEC1A1;
class Class_4_79E380B8FEE3115F;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }
namespace RPG::GameCore { class DiceCombatSkillPreviewConfig; }
namespace RPG::LittleGameShare::DiceCombatCore { class DiceCombatPreviewInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_847F2D2749D675A7_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1C1AFA70)
#define CLASS_1_847F2D2749D675A7_METHOD_1_08539F85129811A7_OFFSET UNITYSDK_OFFSET(0x1C1B1170)
#define CLASS_1_847F2D2749D675A7_METHOD_1_0D00459F0D6597FA_OFFSET UNITYSDK_OFFSET(0x1C1B0E50)
#define CLASS_1_847F2D2749D675A7_METHOD_1_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x1C1A4DA0)
#define CLASS_1_847F2D2749D675A7_METHOD_1_3E0E51D3F714A9B9_OFFSET UNITYSDK_OFFSET(0x1C1B1AC0)
#define CLASS_1_847F2D2749D675A7_METHOD_1_426202FF040835DA_OFFSET UNITYSDK_OFFSET(0x1C1B06E0)
#define CLASS_1_847F2D2749D675A7_METHOD_1_44A5629814ABA4DD_OFFSET UNITYSDK_OFFSET(0x1C1B1CE0)
#define CLASS_1_847F2D2749D675A7_METHOD_1_4C6BA47A6A1104A3_OFFSET UNITYSDK_OFFSET(0x1C1B1650)
#define CLASS_1_847F2D2749D675A7_METHOD_1_4D20EB05AE9E9AFF_1_OFFSET UNITYSDK_OFFSET(0x1C1B0290)
#define CLASS_1_847F2D2749D675A7_METHOD_1_4D20EB05AE9E9AFF_OFFSET UNITYSDK_OFFSET(0x1C1B01B0)
#define CLASS_1_847F2D2749D675A7_METHOD_1_667BF6EE71C0104D_OFFSET UNITYSDK_OFFSET(0x1C1B0880)
#define CLASS_1_847F2D2749D675A7_METHOD_1_88D44B03617B00C5_OFFSET UNITYSDK_OFFSET(0x1C1B0430)
#define CLASS_1_847F2D2749D675A7_METHOD_1_BA90C1474D334404_OFFSET UNITYSDK_OFFSET(0x1C18D0D0)
#define CLASS_1_847F2D2749D675A7_METHOD_1_BAD130DEB63E7CCE_OFFSET UNITYSDK_OFFSET(0x1C1B0370)
#define CLASS_1_847F2D2749D675A7_METHOD_1_BF9BCC073D7977E5_OFFSET UNITYSDK_OFFSET(0x1C1AFCE0)
#define CLASS_1_847F2D2749D675A7_METHOD_1_E72365BA9F1998D8_OFFSET UNITYSDK_OFFSET(0x1C1B1430)
#define CLASS_1_847F2D2749D675A7_METHOD_1_F9540F6BD228A260_OFFSET UNITYSDK_OFFSET(0x1C1B1830)
#define CLASS_1_847F2D2749D675A7_METHOD_1_FCD270592C1AF463_OFFSET UNITYSDK_OFFSET(0x1C1B1280)
#define CLASS_1_847F2D2749D675A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AF950)

inline static constexpr unsigned int Class_1_847F2D2749D675A7_TypeDefinitionIndex = 35813;

class Class_1_847F2D2749D675A7 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewConfig*>* KACPOBFGPEK; // 0x10
	::Class_2_3616FDE8A71D0590* EEFMDEHLLFI; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewConfig*>* DBMHCNEMACI; // 0x20
	::Class_4_79E380B8FEE3115F* CCPHCIBGFJB; // 0x28

	::System::Void _ctor(::Class_4_79E380B8FEE3115F* a1, ::Class_2_3616FDE8A71D0590* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_79E380B8FEE3115F*, ::Class_2_3616FDE8A71D0590*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_BF9BCC073D7977E5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_BF9BCC073D7977E5_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatSkillPreviewConfig* Method_1_4D20EB05AE9E9AFF(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_4D20EB05AE9E9AFF_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatSkillPreviewConfig* Method_1_4D20EB05AE9E9AFF_1(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_4D20EB05AE9E9AFF_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatSkillPreviewConfig* Method_1_BAD130DEB63E7CCE(::Class_2_AEE59ED8DADEC1A1* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2)
	{
		return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_BAD130DEB63E7CCE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88D44B03617B00C5(::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatSkillPreviewLogicInvokeType a2, ::Class_2_AEE59ED8DADEC1A1* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatSkillPreviewLogicInvokeType, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_88D44B03617B00C5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::LittleGameShare::DiceCombatCore::DiceCombatPreviewInfo* Method_1_FCD270592C1AF463(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::DiceCombatPreviewInfo*(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_FCD270592C1AF463_OFFSET))(this, a1);
	}

	::System::Void Method_1_426202FF040835DA(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_426202FF040835DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_667BF6EE71C0104D(::Class_2_AEE59ED8DADEC1A1* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_667BF6EE71C0104D_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_0D00459F0D6597FA(::Class_2_AEE59ED8DADEC1A1* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_0D00459F0D6597FA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_08539F85129811A7(::Class_2_AEE59ED8DADEC1A1* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_08539F85129811A7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_E72365BA9F1998D8(::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::Class_2_AEE59ED8DADEC1A1* a4, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a5, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_E72365BA9F1998D8_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4C6BA47A6A1104A3(::Class_2_AEE59ED8DADEC1A1* a1, ::RPG::GameCore::DiceCombatValueOperation a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::RPG::GameCore::DiceCombatValueOperation, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_4C6BA47A6A1104A3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_F9540F6BD228A260(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_F9540F6BD228A260_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_44A5629814ABA4DD(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_1A3EBF12F3E80953*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_1A3EBF12F3E80953*>*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_44A5629814ABA4DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BA90C1474D334404(::Class_2_AEE59ED8DADEC1A1* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_BA90C1474D334404_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3C8305164A0C9B06(::Class_2_AEE59ED8DADEC1A1* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E0E51D3F714A9B9(::Class_2_AEE59ED8DADEC1A1* a1, ::Class_1_0E117AC86D8E5BCA* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_AEE59ED8DADEC1A1*, ::Class_1_0E117AC86D8E5BCA*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_847F2D2749D675A7_METHOD_1_3E0E51D3F714A9B9_OFFSET))(this, a1, a2, a3);
	}
};
