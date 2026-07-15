#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_A474572029D08468;
class Class_1_B803CA670C4DC569;
class Class_2_B71FA21BC121C2FA_Class_1_8103DE5C6BE3274F;
namespace RPG::Client { class SkillDetailInfoDialogInitParam; }
namespace RPG::Client { class SkillDetailInfoDialogInitParam_RelatedSkillDetailParam; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ICharacterSkillRowData; }
namespace RPG::GameCore { class SkillData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F1011C1DB6F9F51A_GET_FILLEDCOUNT_OFFSET UNITYSDK_OFFSET(0x161049A0)
#define CLASS_1_F1011C1DB6F9F51A_GET_MAXCASTCOUNT_OFFSET UNITYSDK_OFFSET(0x16104980)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x161034A0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x16103740)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0x16104A80)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_2372762F4122DEB8_OFFSET UNITYSDK_OFFSET(0x161044B0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_37011B6DDBE4CF26_OFFSET UNITYSDK_OFFSET(0x16103610)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x161049C0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_3B7145E79424FB75_OFFSET UNITYSDK_OFFSET(0x161030A0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_420F5543CED5025E_OFFSET UNITYSDK_OFFSET(0x16103FA0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x16103020)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x16104180)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_4F8C91A8E36C9915_OFFSET UNITYSDK_OFFSET(0x16104210)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_565211B377738E7A_OFFSET UNITYSDK_OFFSET(0x16102D30)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_648916894895FB4D_OFFSET UNITYSDK_OFFSET(0x161040F0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_6A99795238E657E2_OFFSET UNITYSDK_OFFSET(0x161039B0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_945C71A133E8FA09_OFFSET UNITYSDK_OFFSET(0x161037B0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_95BFADB170F8A42D_OFFSET UNITYSDK_OFFSET(0x161043D0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x16104A10)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_A8C8FFA164F2128F_OFFSET UNITYSDK_OFFSET(0x161035C0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_AFA2B05CEDE590D4_OFFSET UNITYSDK_OFFSET(0x16103B90)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_CDB67F8643E189E2_OFFSET UNITYSDK_OFFSET(0x16103E10)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_CE025011FFADCC65_OFFSET UNITYSDK_OFFSET(0x16104510)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_DF051B4CCEC70F95_OFFSET UNITYSDK_OFFSET(0x16102DE0)
#define CLASS_1_F1011C1DB6F9F51A_METHOD_1_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x16103450)
#define CLASS_1_F1011C1DB6F9F51A_SET_FILLEDCOUNT_OFFSET UNITYSDK_OFFSET(0x161049B0)
#define CLASS_1_F1011C1DB6F9F51A_SET_MAXCASTCOUNT_OFFSET UNITYSDK_OFFSET(0x16104990)
#define CLASS_1_F1011C1DB6F9F51A__CTOR_OFFSET UNITYSDK_OFFSET(0x16102DD0)

inline static constexpr unsigned int Class_1_F1011C1DB6F9F51A_TypeDefinitionIndex = 68605;

class Class_1_F1011C1DB6F9F51A : public ::System::Object
{
public:
	// static const ::System::String* Field_1_0; // 0x0
	::Class_1_A474572029D08468* Field_1_1; // 0x10
	::Class_1_B803CA670C4DC569* Field_1_2; // 0x18
	::RPG::GameCore::SkillData* Field_1_3; // 0x20
	::RPG::GameCore::GameEntity* Field_1_4; // 0x28
	::RPG::GameCore::BattleInstance* Field_1_5; // 0x30
	::System::Int32 _MaxCastCount_k__BackingField; // 0x38
	::System::Boolean Field_1_7; // 0x3C
	::RPG::Client::UISkillIndex Field_1_8; // 0x40
	::System::Nullable_1<::System::Int32> Field_1_9; // 0x44
	::System::Int32 _FilledCount_k__BackingField; // 0x4C
	::RPG::Client::TextID Field_1_11; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A__CTOR_OFFSET))(this);
	}

	static ::Class_1_F1011C1DB6F9F51A* Method_1_565211B377738E7A(::Class_2_B71FA21BC121C2FA_Class_1_8103DE5C6BE3274F* a1)
	{
		return ((::Class_1_F1011C1DB6F9F51A*(*)(::Class_2_B71FA21BC121C2FA_Class_1_8103DE5C6BE3274F*))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_565211B377738E7A_OFFSET))(a1);
	}

	::System::Void Method_1_DF051B4CCEC70F95(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_DF051B4CCEC70F95_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Boolean Method_1_A8C8FFA164F2128F()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_A8C8FFA164F2128F_OFFSET))(this);
	}

	::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_1808E1CF7A125519_OFFSET))(this);
	}

	::RPG::Client::SkillDetailInfoDialogInitParam* Method_1_945C71A133E8FA09(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
	{
		return ((::RPG::Client::SkillDetailInfoDialogInitParam*(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_945C71A133E8FA09_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_CDB67F8643E189E2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_CDB67F8643E189E2_OFFSET))(this);
	}

	::System::String* Method_1_420F5543CED5025E()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_420F5543CED5025E_OFFSET))(this);
	}

	::System::Boolean Method_1_648916894895FB4D()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_648916894895FB4D_OFFSET))(this);
	}

	::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_4DA6D4A624E42CAB_OFFSET))(this);
	}

	::System::Boolean Method_1_4F8C91A8E36C9915()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_4F8C91A8E36C9915_OFFSET))(this);
	}

	::System::Void Method_1_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_1_3B7145E79424FB75()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_3B7145E79424FB75_OFFSET))(this);
	}

	::RPG::GameCore::GameEntity* Method_1_95BFADB170F8A42D()
	{
		return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_95BFADB170F8A42D_OFFSET))(this);
	}

	::System::Boolean Method_1_37011B6DDBE4CF26()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_37011B6DDBE4CF26_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::RPG::Client::SkillDetailInfoDialogInitParam_RelatedSkillDetailParam*>* Method_1_AFA2B05CEDE590D4()
	{
		return ((::System::Collections::Generic::List_1<::RPG::Client::SkillDetailInfoDialogInitParam_RelatedSkillDetailParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_AFA2B05CEDE590D4_OFFSET))(this);
	}

	::RPG::Client::SkillDetailInfoDialogInitParam_RelatedSkillDetailParam* Method_1_CE025011FFADCC65(::RPG::GameCore::ICharacterSkillRowData* a1)
	{
		return ((::RPG::Client::SkillDetailInfoDialogInitParam_RelatedSkillDetailParam*(*)(::PVOID, ::RPG::GameCore::ICharacterSkillRowData*))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_CE025011FFADCC65_OFFSET))(this, a1);
	}

	::RPG::GameCore::ICharacterSkillRowData* Method_1_6A99795238E657E2()
	{
		return ((::RPG::GameCore::ICharacterSkillRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_6A99795238E657E2_OFFSET))(this);
	}

	::System::UInt32 Method_1_2372762F4122DEB8()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_2372762F4122DEB8_OFFSET))(this);
	}

	::System::Int32 get_MaxCastCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_GET_MAXCASTCOUNT_OFFSET))(this);
	}

	::System::Void set_MaxCastCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_SET_MAXCASTCOUNT_OFFSET))(this, a1);
	}

	::System::Int32 get_FilledCount()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_GET_FILLEDCOUNT_OFFSET))(this);
	}

	::System::Void set_FilledCount(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_SET_FILLEDCOUNT_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_391A84BCD9F51317()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_391A84BCD9F51317_OFFSET))(this);
	}

	::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_A3FAE12D7B6ACD62_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F1011C1DB6F9F51A_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}
};
