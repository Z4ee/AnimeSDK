#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"
#include "unitysdk/UnityEngine/Quaternion.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_Rotation; }
namespace RPG::GameCore { class ChenLingBattleAnimEventConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_8F11D5964BEE021D_METHOD_2_106289055FB804CE_OFFSET UNITYSDK_OFFSET(0x12386050)
#define CLASS_2_8F11D5964BEE021D_METHOD_2_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x12387320)
#define CLASS_2_8F11D5964BEE021D_METHOD_2_6E6682ED9FD6F719_OFFSET UNITYSDK_OFFSET(0x12386D60)
#define CLASS_2_8F11D5964BEE021D_METHOD_2_B7F8E0B4AF22DEA3_OFFSET UNITYSDK_OFFSET(0x123871B0)
#define CLASS_2_8F11D5964BEE021D_METHOD_2_CFF8C0A3594A8E50_OFFSET UNITYSDK_OFFSET(0x123865E0)
#define CLASS_2_8F11D5964BEE021D_METHOD_2_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x12387080)
#define CLASS_2_8F11D5964BEE021D__CTOR_OFFSET UNITYSDK_OFFSET(0x12385EA0)

inline static constexpr unsigned int Class_2_8F11D5964BEE021D_TypeDefinitionIndex = 71408;

class Class_2_8F11D5964BEE021D : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::List_1<::RPG::GameCore::ChenLingBattleAnimEventConfig*>* Field_2_8; // 0x28
	::System::Collections::Generic::List_1<::Class_2_181A7F9409C60DBC*>* Field_2_1; // 0x30
	::System::Collections::Generic::List_1<::Class_2_181A7F9409C60DBC*>* Field_2_2; // 0x38
	::RPG::GameCore::ChenLingBattleAbility_Rotation* Field_2_0; // 0x40
	::System::Collections::Generic::Dictionary_2<::Class_2_181A7F9409C60DBC*, ::System::Single>* Field_2_6; // 0x48
	::System::Collections::Generic::Dictionary_2<::Class_2_181A7F9409C60DBC*, ::UnityEngine::Quaternion>* Field_2_5; // 0x50
	::System::Single Field_2_3; // 0x58
	::System::Single Field_2_7; // 0x5C
	::System::Single Field_2_4; // 0x60

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_8F11D5964BEE021D__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_106289055FB804CE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F11D5964BEE021D_METHOD_2_106289055FB804CE_OFFSET))(this);
	}

	::System::Void Method_2_CFF8C0A3594A8E50(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_8F11D5964BEE021D_METHOD_2_CFF8C0A3594A8E50_OFFSET))(this, a1);
	}

	::System::Void Method_2_6E6682ED9FD6F719()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F11D5964BEE021D_METHOD_2_6E6682ED9FD6F719_OFFSET))(this);
	}

	::System::Void Method_2_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F11D5964BEE021D_METHOD_2_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_2_B7F8E0B4AF22DEA3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F11D5964BEE021D_METHOD_2_B7F8E0B4AF22DEA3_OFFSET))(this);
	}

	::System::Void Method_2_5790A55946AA509D()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8F11D5964BEE021D_METHOD_2_5790A55946AA509D_OFFSET))(this);
	}
};
