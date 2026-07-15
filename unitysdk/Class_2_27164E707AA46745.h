#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RPG::Client { class MonoEffect; }
namespace RPG::Client { class MonoEffectPluginFollow; }
namespace RPG::Client { class MonoEffectPluginMiniEmotion; }
namespace RPG::Client { class MonoEffectPluginSpeed; }
namespace RPG::GameCore { class MiniEmoEffectNodeVisible; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define CLASS_2_27164E707AA46745_METHOD_2_01237CA99C79931A_OFFSET UNITYSDK_OFFSET(0x16F92CB0)
#define CLASS_2_27164E707AA46745_METHOD_2_06330CD58CB602B6_OFFSET UNITYSDK_OFFSET(0x16F93620)
#define CLASS_2_27164E707AA46745_METHOD_2_147A527305B2FF1B_OFFSET UNITYSDK_OFFSET(0x16F927D0)
#define CLASS_2_27164E707AA46745_METHOD_2_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x16F93E20)
#define CLASS_2_27164E707AA46745_METHOD_2_18982EFD3B740683_OFFSET UNITYSDK_OFFSET(0x16F93B80)
#define CLASS_2_27164E707AA46745_METHOD_2_1F600059BFC04D4A_OFFSET UNITYSDK_OFFSET(0x16F92C30)
#define CLASS_2_27164E707AA46745_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x16F93560)
#define CLASS_2_27164E707AA46745_METHOD_2_2D0157782DBD371B_OFFSET UNITYSDK_OFFSET(0x16F935C0)
#define CLASS_2_27164E707AA46745_METHOD_2_2E29038CF17E20BD_OFFSET UNITYSDK_OFFSET(0x16F93840)
#define CLASS_2_27164E707AA46745_METHOD_2_40E490E2772D5D75_1_OFFSET UNITYSDK_OFFSET(0x16F934B0)
#define CLASS_2_27164E707AA46745_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x16F93450)
#define CLASS_2_27164E707AA46745_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x16F92B10)
#define CLASS_2_27164E707AA46745_METHOD_2_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x16F93400)
#define CLASS_2_27164E707AA46745_METHOD_2_79830F666EE579C0_OFFSET UNITYSDK_OFFSET(0x16F93D00)
#define CLASS_2_27164E707AA46745_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x16F92710)
#define CLASS_2_27164E707AA46745_METHOD_2_B3543653F5D09D40_OFFSET UNITYSDK_OFFSET(0x16F93390)
#define CLASS_2_27164E707AA46745_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x16F92AC0)
#define CLASS_2_27164E707AA46745_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x16F92780)
#define CLASS_2_27164E707AA46745_METHOD_2_D339EFAB24ED44B0_OFFSET UNITYSDK_OFFSET(0x16F93680)
#define CLASS_2_27164E707AA46745_METHOD_2_DF0024D9C70E3C34_OFFSET UNITYSDK_OFFSET(0x16F93510)
#define CLASS_2_27164E707AA46745_METHOD_2_E2BCD1B56132A826_OFFSET UNITYSDK_OFFSET(0x16F92DD0)
#define CLASS_2_27164E707AA46745__CTOR_OFFSET UNITYSDK_OFFSET(0x16F93EE0)

inline static constexpr unsigned int Class_2_27164E707AA46745_TypeDefinitionIndex = 66748;

class Class_2_27164E707AA46745 : public ::RPG::Client::BehaviorBase
{
public:
	::UnityEngine::Transform* Field_2_0; // 0x18
	::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* Field_2_1; // 0x20
	::RPG::Client::MonoEffectPluginFollow* Field_2_2; // 0x28
	::RPG::Client::MonoEffectPluginSpeed* Field_2_3; // 0x30
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_4; // 0x38
	::System::Single Field_2_5; // 0x48
	::UnityEngine::Vector3 Field_2_6; // 0x4C
	::UnityEngine::Vector3 Field_2_7; // 0x58
	::System::Single Field_2_8; // 0x64

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B1EB734337965E73(::UnityEngine::MonoBehaviour* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_B1EB734337965E73_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_479759059E440327(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_479759059E440327_OFFSET))(this, a1);
	}

	::System::Void Method_2_01237CA99C79931A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_01237CA99C79931A_OFFSET))(this);
	}

	::System::Void Method_2_E2BCD1B56132A826()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_E2BCD1B56132A826_OFFSET))(this);
	}

	::System::Void Method_2_7900DB25C44BBC9B(::UnityEngine::Transform* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_7900DB25C44BBC9B_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E490E2772D5D75(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_40E490E2772D5D75_OFFSET))(this, a1);
	}

	::System::Void Method_2_40E490E2772D5D75_1(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_40E490E2772D5D75_1_OFFSET))(this, a1);
	}

	::System::Void Method_2_DF0024D9C70E3C34(::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>*))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_DF0024D9C70E3C34_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_2D0157782DBD371B(::System::Nullable_1<::UnityEngine::Vector3> a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_2D0157782DBD371B_OFFSET))(this, a1);
	}

	::System::Void Method_2_06330CD58CB602B6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_06330CD58CB602B6_OFFSET))(this);
	}

	::System::Void Method_2_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_2_147A527305B2FF1B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_147A527305B2FF1B_OFFSET))(this);
	}

	::System::Void Method_2_2E29038CF17E20BD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_2E29038CF17E20BD_OFFSET))(this);
	}

	::System::Void Method_2_D339EFAB24ED44B0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_D339EFAB24ED44B0_OFFSET))(this);
	}

	::System::Void Method_2_18982EFD3B740683()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_18982EFD3B740683_OFFSET))(this);
	}

	::System::Void Method_2_79830F666EE579C0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_79830F666EE579C0_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginMiniEmotion* Method_2_B3543653F5D09D40()
	{
		return ((::RPG::Client::MonoEffectPluginMiniEmotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_B3543653F5D09D40_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_1F600059BFC04D4A()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_1F600059BFC04D4A_OFFSET))(this);
	}
};
