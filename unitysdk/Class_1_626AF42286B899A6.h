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
class Class_2_1BB8CA1042AACD99;
class Class_2_8C608625ABC8C4FA_1;
class Class_4_D581BED103406713;
namespace RPG::GameCore { class DiceCombatNotAvatarPreviewConfig; }
namespace RPG::GameCore { class DiceCombatSkillPreviewConfig; }
namespace RPG::LittleGameShare::DiceCombatCore { class DiceCombatPreviewInfo; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_626AF42286B899A6_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x17D764E0)
#define CLASS_1_626AF42286B899A6_METHOD_1_08539F85129811A7_OFFSET UNITYSDK_OFFSET(0x17D77E30)
#define CLASS_1_626AF42286B899A6_METHOD_1_24646EA2A7F6906C_OFFSET UNITYSDK_OFFSET(0x17D780F0)
#define CLASS_1_626AF42286B899A6_METHOD_1_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x17D78D50)
#define CLASS_1_626AF42286B899A6_METHOD_1_3E0E51D3F714A9B9_OFFSET UNITYSDK_OFFSET(0x17D786A0)
#define CLASS_1_626AF42286B899A6_METHOD_1_426202FF040835DA_OFFSET UNITYSDK_OFFSET(0x17D774A0)
#define CLASS_1_626AF42286B899A6_METHOD_1_4C6BA47A6A1104A3_OFFSET UNITYSDK_OFFSET(0x17D782D0)
#define CLASS_1_626AF42286B899A6_METHOD_1_4F4126356F111516_1_OFFSET UNITYSDK_OFFSET(0x17D77000)
#define CLASS_1_626AF42286B899A6_METHOD_1_4F4126356F111516_OFFSET UNITYSDK_OFFSET(0x17D76ED0)
#define CLASS_1_626AF42286B899A6_METHOD_1_50E1D676D786F4BA_OFFSET UNITYSDK_OFFSET(0x17D77B10)
#define CLASS_1_626AF42286B899A6_METHOD_1_866D0979717F6B36_OFFSET UNITYSDK_OFFSET(0x17D76740)
#define CLASS_1_626AF42286B899A6_METHOD_1_88D44B03617B00C5_OFFSET UNITYSDK_OFFSET(0x17D771F0)
#define CLASS_1_626AF42286B899A6_METHOD_1_98EE05B4A84AD249_OFFSET UNITYSDK_OFFSET(0x17D78420)
#define CLASS_1_626AF42286B899A6_METHOD_1_A6C43178089C0C8C_OFFSET UNITYSDK_OFFSET(0x17D788C0)
#define CLASS_1_626AF42286B899A6_METHOD_1_BAAD41EC7185428D_OFFSET UNITYSDK_OFFSET(0x17D78C10)
#define CLASS_1_626AF42286B899A6_METHOD_1_BC13E1398049B257_OFFSET UNITYSDK_OFFSET(0x17D77130)
#define CLASS_1_626AF42286B899A6_METHOD_1_BCD04375C8471DC4_OFFSET UNITYSDK_OFFSET(0x17D77640)
#define CLASS_1_626AF42286B899A6_METHOD_1_FCD270592C1AF463_OFFSET UNITYSDK_OFFSET(0x17D77F40)
#define CLASS_1_626AF42286B899A6__CTOR_OFFSET UNITYSDK_OFFSET(0x17D763C0)

inline static constexpr unsigned int Class_1_626AF42286B899A6_TypeDefinitionIndex = 34288;

class Class_1_626AF42286B899A6 : public ::System::Object
{
public:
	::Class_4_D581BED103406713* Field_1_0; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewConfig*>* Field_1_2; // 0x18
	::Class_2_8C608625ABC8C4FA_1* Field_1_1; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::DiceCombatSkillPreviewConfig*>* Field_1_3; // 0x28

	::System::Void _ctor(::Class_4_D581BED103406713* a1, ::Class_2_8C608625ABC8C4FA_1* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_4_D581BED103406713*, ::Class_2_8C608625ABC8C4FA_1*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Initialize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_INITIALIZE_OFFSET))(this);
	}

	::System::Void Method_1_866D0979717F6B36()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_866D0979717F6B36_OFFSET))(this);
	}

	::RPG::GameCore::DiceCombatSkillPreviewConfig* Method_1_4F4126356F111516(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_4F4126356F111516_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatSkillPreviewConfig* Method_1_4F4126356F111516_1(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_4F4126356F111516_1_OFFSET))(this, a1);
	}

	::RPG::GameCore::DiceCombatSkillPreviewConfig* Method_1_BC13E1398049B257(::Class_2_1BB8CA1042AACD99* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2)
	{
		return ((::RPG::GameCore::DiceCombatSkillPreviewConfig*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_BC13E1398049B257_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_88D44B03617B00C5(::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState a1, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatSkillPreviewLogicInvokeType a2, ::Class_2_1BB8CA1042AACD99* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a5)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatGameState, ::RPG::LittleGameShare::DiceCombatCore::DiceCombatSkillPreviewLogicInvokeType, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_88D44B03617B00C5_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::RPG::LittleGameShare::DiceCombatCore::DiceCombatPreviewInfo* Method_1_FCD270592C1AF463(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::RPG::LittleGameShare::DiceCombatCore::DiceCombatPreviewInfo*(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_FCD270592C1AF463_OFFSET))(this, a1);
	}

	::System::Void Method_1_426202FF040835DA(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_426202FF040835DA_OFFSET))(this, a1);
	}

	::System::Void Method_1_BCD04375C8471DC4(::Class_2_1BB8CA1042AACD99* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_BCD04375C8471DC4_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_50E1D676D786F4BA(::Class_2_1BB8CA1042AACD99* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_50E1D676D786F4BA_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_08539F85129811A7(::Class_2_1BB8CA1042AACD99* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a3, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a4)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_08539F85129811A7_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_1_24646EA2A7F6906C(::RPG::GameCore::DiceCombatNotAvatarPreviewConfig* a1, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType a2, ::Il2CppArray<::RPG::GameCore::FixPoint>* a3, ::Class_2_1BB8CA1042AACD99* a4, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a5, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a6)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::DiceCombatNotAvatarPreviewConfig*, ::RPG::GameCore::DiceCombatSkillPreviewInvokeType, ::Il2CppArray<::RPG::GameCore::FixPoint>*, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_24646EA2A7F6906C_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_4C6BA47A6A1104A3(::Class_2_1BB8CA1042AACD99* a1, ::RPG::GameCore::DiceCombatValueOperation a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::RPG::GameCore::DiceCombatValueOperation, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_4C6BA47A6A1104A3_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_98EE05B4A84AD249(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_98EE05B4A84AD249_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_A6C43178089C0C8C(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_1A3EBF12F3E80953*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_1A3EBF12F3E80953*>*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_A6C43178089C0C8C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_BAAD41EC7185428D(::Class_2_1BB8CA1042AACD99* a1, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::System::Collections::Generic::List_1<::Class_1_0E117AC86D8E5BCA*>*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_BAAD41EC7185428D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_3C8305164A0C9B06(::Class_2_1BB8CA1042AACD99* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Method_1_3E0E51D3F714A9B9(::Class_2_1BB8CA1042AACD99* a1, ::Class_1_0E117AC86D8E5BCA* a2, ::System::String* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*, ::Class_1_0E117AC86D8E5BCA*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_626AF42286B899A6_METHOD_1_3E0E51D3F714A9B9_OFFSET))(this, a1, a2, a3);
	}
};
