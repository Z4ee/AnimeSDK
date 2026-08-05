#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FName.h"
#include "unitysdk/MoleMole/Photo/PlayableGraphAttributeSource.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/PropertySceneHandle.h"

#define STRUCT_2_D0A3658446FCD9A2_METHOD_2_034874595597F6FA_OFFSET UNITYSDK_OFFSET(0x886740)
#define STRUCT_2_D0A3658446FCD9A2_METHOD_2_2685B6183E614529_1_OFFSET UNITYSDK_OFFSET(0x8866E0)
#define STRUCT_2_D0A3658446FCD9A2_METHOD_2_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8865D0)
#define STRUCT_2_D0A3658446FCD9A2_METHOD_2_33A8D0D48D1E86F5_OFFSET UNITYSDK_OFFSET(0x886570)
#define STRUCT_2_D0A3658446FCD9A2_METHOD_2_7B5CD253F32E6BF5_OFFSET UNITYSDK_OFFSET(0x886630)
#define STRUCT_2_D0A3658446FCD9A2_METHOD_2_A36150C5DCC8409E_OFFSET UNITYSDK_OFFSET(0x886690)

inline static constexpr unsigned int Struct_2_D0A3658446FCD9A2_TypeDefinitionIndex = 52212;

struct alignas(4) Struct_2_D0A3658446FCD9A2
{
	::System::Single Field_2_2; // 0x10
	::MoleMole::Photo::PlayableGraphAttributeSource Field_2_1; // 0x14
	::System::Single Field_2_0; // 0x18
	::Foundation::Unreal::FName Field_2_7; // 0x18
	::UnityEngine::Animations::PropertySceneHandle Field_2_6; // 0x18

	::System::Void Method_2_33A8D0D48D1E86F5(::Foundation::Unreal::FName a1)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + STRUCT_2_D0A3658446FCD9A2_METHOD_2_33A8D0D48D1E86F5_OFFSET))(this, a1);
	}

	::System::Void Method_2_2685B6183E614529(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D0A3658446FCD9A2_METHOD_2_2685B6183E614529_OFFSET))(this, a1);
	}

	::System::Void Method_2_7B5CD253F32E6BF5(::UnityEngine::Animations::PropertySceneHandle a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::PropertySceneHandle))((::PBYTE)hIl2Cpp + STRUCT_2_D0A3658446FCD9A2_METHOD_2_7B5CD253F32E6BF5_OFFSET))(this, a1);
	}

	::System::Single Method_2_A36150C5DCC8409E()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D0A3658446FCD9A2_METHOD_2_A36150C5DCC8409E_OFFSET))(this);
	}

	::System::Void Method_2_2685B6183E614529_1(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_D0A3658446FCD9A2_METHOD_2_2685B6183E614529_1_OFFSET))(this, a1);
	}

	/*
	::System::Single Method_2_034874595597F6FA(::Struct_2_E521CB413C09680F& a1, ::UnityEngine::Animations::AnimationStream a2)
	{
		return ((::System::Single(*)(::PVOID, ::Struct_2_E521CB413C09680F&, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + STRUCT_2_D0A3658446FCD9A2_METHOD_2_034874595597F6FA_OFFSET))(this, a1, a2);
	}
	*/
};
