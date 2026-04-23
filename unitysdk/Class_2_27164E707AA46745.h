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

#define CLASS_2_27164E707AA46745_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x128A7300)
#define CLASS_2_27164E707AA46745_METHOD_2_2D0157782DBD371B_OFFSET UNITYSDK_OFFSET(0x128A7360)
#define CLASS_2_27164E707AA46745_METHOD_2_40E490E2772D5D75_1_OFFSET UNITYSDK_OFFSET(0x128A7250)
#define CLASS_2_27164E707AA46745_METHOD_2_40E490E2772D5D75_OFFSET UNITYSDK_OFFSET(0x128A71F0)
#define CLASS_2_27164E707AA46745_METHOD_2_479759059E440327_OFFSET UNITYSDK_OFFSET(0x128A6B20)
#define CLASS_2_27164E707AA46745_METHOD_2_501ED00350F147ED_OFFSET UNITYSDK_OFFSET(0x128A6C10)
#define CLASS_2_27164E707AA46745_METHOD_2_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x128A7840)
#define CLASS_2_27164E707AA46745_METHOD_2_6916CB2AB9451DD7_OFFSET UNITYSDK_OFFSET(0x128A75D0)
#define CLASS_2_27164E707AA46745_METHOD_2_7900DB25C44BBC9B_OFFSET UNITYSDK_OFFSET(0x128A71A0)
#define CLASS_2_27164E707AA46745_METHOD_2_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x128A7A10)
#define CLASS_2_27164E707AA46745_METHOD_2_8BC85DADEC2C3862_OFFSET UNITYSDK_OFFSET(0x128A6880)
#define CLASS_2_27164E707AA46745_METHOD_2_90D019D81149A8BA_OFFSET UNITYSDK_OFFSET(0x128A7AB0)
#define CLASS_2_27164E707AA46745_METHOD_2_B1EB734337965E73_OFFSET UNITYSDK_OFFSET(0x128A67C0)
#define CLASS_2_27164E707AA46745_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x128A6AD0)
#define CLASS_2_27164E707AA46745_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x128A6830)
#define CLASS_2_27164E707AA46745_METHOD_2_CEBFF096B4C9D46B_OFFSET UNITYSDK_OFFSET(0x128A6D00)
#define CLASS_2_27164E707AA46745_METHOD_2_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x128A7960)
#define CLASS_2_27164E707AA46745_METHOD_2_D3129FE8DF635B48_OFFSET UNITYSDK_OFFSET(0x128A73C0)
#define CLASS_2_27164E707AA46745_METHOD_2_DF0024D9C70E3C34_OFFSET UNITYSDK_OFFSET(0x128A72B0)
#define CLASS_2_27164E707AA46745_METHOD_2_E824431C22EF9361_OFFSET UNITYSDK_OFFSET(0x128A6C60)
#define CLASS_2_27164E707AA46745_METHOD_2_F1C870D01294DAF7_OFFSET UNITYSDK_OFFSET(0x128A7420)
#define CLASS_2_27164E707AA46745_METHOD_2_FBE46B2EB33D4427_OFFSET UNITYSDK_OFFSET(0x128A7150)
#define CLASS_2_27164E707AA46745__CTOR_OFFSET UNITYSDK_OFFSET(0x128A7AA0)

inline static constexpr unsigned int Class_2_27164E707AA46745_TypeDefinitionIndex = 64417;

class Class_2_27164E707AA46745 : public ::RPG::Client::BehaviorBase
{
public:
	::RPG::Client::MonoEffectPluginSpeed* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_4; // 0x20
	::RPG::Client::MonoEffectPluginFollow* Field_2_0; // 0x28
	::Il2CppArray<::RPG::GameCore::MiniEmoEffectNodeVisible*>* Field_2_5; // 0x30
	::UnityEngine::Vector3 Field_2_3; // 0x38
	::System::Single Field_2_8; // 0x44
	::System::Single Field_2_6; // 0x48
	::UnityEngine::Vector3 Field_2_2; // 0x4C
	::System::Nullable_1<::UnityEngine::Vector3> Field_2_7; // 0x58

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

	::System::Void Method_2_E824431C22EF9361()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_E824431C22EF9361_OFFSET))(this);
	}

	::System::Void Method_2_CEBFF096B4C9D46B()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_CEBFF096B4C9D46B_OFFSET))(this);
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

	::System::Void Method_2_D3129FE8DF635B48()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_D3129FE8DF635B48_OFFSET))(this);
	}

	::System::Void Method_2_89D1F247B9D324EE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_89D1F247B9D324EE_OFFSET))(this);
	}

	::System::Void Method_2_8BC85DADEC2C3862()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_8BC85DADEC2C3862_OFFSET))(this);
	}

	::System::Void Method_2_6916CB2AB9451DD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_6916CB2AB9451DD7_OFFSET))(this);
	}

	::System::Void Method_2_F1C870D01294DAF7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_F1C870D01294DAF7_OFFSET))(this);
	}

	::System::Void Method_2_51CFFE2AF748ECD7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_51CFFE2AF748ECD7_OFFSET))(this);
	}

	::System::Void Method_2_D0BD1377F2594D33()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_D0BD1377F2594D33_OFFSET))(this);
	}

	::RPG::Client::MonoEffectPluginMiniEmotion* Method_2_FBE46B2EB33D4427()
	{
		return ((::RPG::Client::MonoEffectPluginMiniEmotion*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_FBE46B2EB33D4427_OFFSET))(this);
	}

	::RPG::Client::MonoEffect* Method_2_501ED00350F147ED()
	{
		return ((::RPG::Client::MonoEffect*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_501ED00350F147ED_OFFSET))(this);
	}

	::System::Void Method_2_90D019D81149A8BA(::UnityEngine::MonoBehaviour* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CLASS_2_27164E707AA46745_METHOD_2_90D019D81149A8BA_OFFSET))(this, P0);
	}
};
