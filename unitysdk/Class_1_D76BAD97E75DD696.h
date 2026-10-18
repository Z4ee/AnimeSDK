#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_397;
namespace R3 { template <typename T> class ReactiveProperty_1; }
namespace System { class String; }

#define CLASS_1_D76BAD97E75DD696_GET_AVATARIMAGEPATH_OFFSET UNITYSDK_OFFSET(0xBB06F90)
#define CLASS_1_D76BAD97E75DD696_GET_ISROLEVISIBLE_OFFSET UNITYSDK_OFFSET(0xBB06FB0)
#define CLASS_1_D76BAD97E75DD696_GET_ISUNRELEASEDVISIBLE_OFFSET UNITYSDK_OFFSET(0xBB06FC0)
#define CLASS_1_D76BAD97E75DD696_GET_RANK_OFFSET UNITYSDK_OFFSET(0xBB06FD0)
#define CLASS_1_D76BAD97E75DD696_GET_RARITY_OFFSET UNITYSDK_OFFSET(0xBB06FA0)
#define CLASS_1_D76BAD97E75DD696_GET_ROLEID_OFFSET UNITYSDK_OFFSET(0xBB06F80)
#define CLASS_1_D76BAD97E75DD696_GET_SELECTCOMMAND_OFFSET UNITYSDK_OFFSET(0xBB06FE0)
#define CLASS_1_D76BAD97E75DD696_GET_UPGRADECOMMAND_OFFSET UNITYSDK_OFFSET(0xBB06FF0)
#define CLASS_1_D76BAD97E75DD696_METHOD_1_0865E94460F11643_OFFSET UNITYSDK_OFFSET(0xBB07600)
#define CLASS_1_D76BAD97E75DD696_METHOD_1_1E87171074AA7CDF_OFFSET UNITYSDK_OFFSET(0xBB07000)
#define CLASS_1_D76BAD97E75DD696_METHOD_1_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0xBB06B80)
#define CLASS_1_D76BAD97E75DD696_METHOD_1_8F697642FBF3BDA7_OFFSET UNITYSDK_OFFSET(0xBB074E0)
#define CLASS_1_D76BAD97E75DD696_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xBB075C0)
#define CLASS_1_D76BAD97E75DD696__CTOR_OFFSET UNITYSDK_OFFSET(0xBB06950)

inline static constexpr unsigned int Class_1_D76BAD97E75DD696_TypeDefinitionIndex = 49719;

class Class_1_D76BAD97E75DD696 : public ::System::Object
{
public:
	::R3::ReactiveProperty_1<::System::UInt32>* _RoleId_k__BackingField; // 0x10
	::R3::ReactiveProperty_1<::System::String*>* _AvatarImagePath_k__BackingField; // 0x18
	::R3::ReactiveProperty_1<::System::Boolean>* _IsUnreleasedVisible_k__BackingField; // 0x20
	::R3::ReactiveProperty_1<::System::Boolean>* _IsRoleVisible_k__BackingField; // 0x28
	::R3::ReactiveProperty_1<::System::UInt32>* _Rarity_k__BackingField; // 0x30
	::R3::ReactiveProperty_1<::System::Int32>* _Rank_k__BackingField; // 0x38
	::Class_0_16E4307DCC419505_397* _SelectCommand_k__BackingField; // 0x40
	::Class_0_16E4307DCC419505_397* _UpgradeCommand_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696__CTOR_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::UInt32>* get_RoleId()
	{
		return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_GET_ROLEID_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::String*>* get_AvatarImagePath()
	{
		return ((::R3::ReactiveProperty_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_GET_AVATARIMAGEPATH_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::UInt32>* get_Rarity()
	{
		return ((::R3::ReactiveProperty_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_GET_RARITY_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsRoleVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_GET_ISROLEVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Boolean>* get_IsUnreleasedVisible()
	{
		return ((::R3::ReactiveProperty_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_GET_ISUNRELEASEDVISIBLE_OFFSET))(this);
	}

	::R3::ReactiveProperty_1<::System::Int32>* get_Rank()
	{
		return ((::R3::ReactiveProperty_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_GET_RANK_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_SelectCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_GET_SELECTCOMMAND_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_397* get_UpgradeCommand()
	{
		return ((::Class_0_16E4307DCC419505_397*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_GET_UPGRADECOMMAND_OFFSET))(this);
	}

	::System::Void Method_1_1E87171074AA7CDF(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_METHOD_1_1E87171074AA7CDF_OFFSET))(this, a1);
	}

	::System::Void Method_1_8F697642FBF3BDA7(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_METHOD_1_8F697642FBF3BDA7_OFFSET))(this, a1);
	}

	::System::Void Method_1_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_METHOD_1_5176DC743E478510_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_0865E94460F11643()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D76BAD97E75DD696_METHOD_1_0865E94460F11643_OFFSET))(this);
	}
};
