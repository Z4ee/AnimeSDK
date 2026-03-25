#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F65B6F8790DF074B.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_36006FC25F5DDC69;
class Class_2_181A7F9409C60DBC;
class Class_2_E9C9AAD7C711B3E3;
namespace RPG::GameCore { class BaseChenLingBattleAbilityNodeConfig; }
namespace RPG::GameCore { class ChenLingBattleAbility_SummonSoldier; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define CLASS_2_E4B3042C394BD71C_METHOD_2_1ED4C12CF53DB56C_OFFSET UNITYSDK_OFFSET(0x8BBFB70)
#define CLASS_2_E4B3042C394BD71C_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8BC0020)
#define CLASS_2_E4B3042C394BD71C_METHOD_2_AB7ED27CAB69BE58_OFFSET UNITYSDK_OFFSET(0x8BBF260)
#define CLASS_2_E4B3042C394BD71C_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8BBFFE0)
#define CLASS_2_E4B3042C394BD71C_METHOD_2_F2A134C7AE009B90_OFFSET UNITYSDK_OFFSET(0x8BBF970)
#define CLASS_2_E4B3042C394BD71C__CTOR_OFFSET UNITYSDK_OFFSET(0x8BBF110)

inline static constexpr unsigned int Class_2_E4B3042C394BD71C_TypeDefinitionIndex = 63380;

class Class_2_E4B3042C394BD71C : public ::Class_1_F65B6F8790DF074B
{
public:
	::System::Collections::Generic::HashSet_1<::Class_2_181A7F9409C60DBC*>* Field_2_4; // 0x28
	::RPG::GameCore::ChenLingBattleAbility_SummonSoldier* Field_2_0; // 0x30
	::System::Single Field_2_3; // 0x38
	::System::Boolean Field_2_1; // 0x3C
	::System::Single Field_2_2; // 0x40

	::System::Void _ctor(::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig* a1, ::Class_1_36006FC25F5DDC69* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BaseChenLingBattleAbilityNodeConfig*, ::Class_1_36006FC25F5DDC69*))((::PBYTE)hIl2Cpp + CLASS_2_E4B3042C394BD71C__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AB7ED27CAB69BE58()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4B3042C394BD71C_METHOD_2_AB7ED27CAB69BE58_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_2_F2A134C7AE009B90(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::System::Int32 a4)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_E4B3042C394BD71C_METHOD_2_F2A134C7AE009B90_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Boolean Method_2_1ED4C12CF53DB56C(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3, ::Class_2_E9C9AAD7C711B3E3* a4)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::Class_2_E9C9AAD7C711B3E3*))((::PBYTE)hIl2Cpp + CLASS_2_E4B3042C394BD71C_METHOD_2_1ED4C12CF53DB56C_OFFSET))(this, a1, a2, a3, a4);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4B3042C394BD71C_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_E4B3042C394BD71C_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}
};
