#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_B7E341C5F1A6F199.h"
#include "unitysdk/MoleMole/Config/AnimatorBeHitTag.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigHitEffect; }

#define CLASS_2_7FEC2AC774DA54C5_METHOD_2_4343F372F34C05BF_OFFSET UNITYSDK_OFFSET(0x105814A0)
#define CLASS_2_7FEC2AC774DA54C5_METHOD_2_50131F4CF014469C_OFFSET UNITYSDK_OFFSET(0x105815C0)
#define CLASS_2_7FEC2AC774DA54C5_METHOD_2_B9BB5960E69B92C6_OFFSET UNITYSDK_OFFSET(0x10581650)
#define CLASS_2_7FEC2AC774DA54C5_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x105817A0)
#define CLASS_2_7FEC2AC774DA54C5_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x10581710)
#define CLASS_2_7FEC2AC774DA54C5__CCTOR_OFFSET UNITYSDK_OFFSET(0x10581530)
#define CLASS_2_7FEC2AC774DA54C5__CTOR_OFFSET UNITYSDK_OFFSET(0x105815A0)

inline static constexpr unsigned int Class_2_7FEC2AC774DA54C5_TypeDefinitionIndex = 39857;

class Class_2_7FEC2AC774DA54C5 : public ::Class_1_B7E341C5F1A6F199
{
public:
	// static const ::System::UInt16 Field_2_6 = 0xB4; // 0x0
	::MoleMole::Config::ConfigHitEffect* Field_2_2; // 0x20
	::MoleMole::Config::ConfigHitEffect* Field_2_0; // 0x28
	::MoleMole::Config::ConfigHitEffect* Field_2_1; // 0x30
	::UnityEngine::Vector3 Field_2_4; // 0x38
	::MoleMole::Config::AnimatorBeHitTag Field_2_5; // 0x44
	::MoleMole::Config::HitForwardType Field_2_3; // 0x48

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_2_7FEC2AC774DA54C5__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FEC2AC774DA54C5__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4343F372F34C05BF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FEC2AC774DA54C5_METHOD_2_4343F372F34C05BF_OFFSET))(this);
	}

	::System::Void Method_2_50131F4CF014469C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FEC2AC774DA54C5_METHOD_2_50131F4CF014469C_OFFSET))(this);
	}

	::System::Void Method_2_B9BB5960E69B92C6(::MoleMole::Config::ConfigHitEffect* a1, ::MoleMole::Config::ConfigHitEffect* a2, ::MoleMole::Config::ConfigHitEffect* a3, ::UnityEngine::Vector3 a4, ::MoleMole::Config::AnimatorBeHitTag a5, ::MoleMole::Config::HitForwardType a6)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHitEffect*, ::MoleMole::Config::ConfigHitEffect*, ::MoleMole::Config::ConfigHitEffect*, ::UnityEngine::Vector3, ::MoleMole::Config::AnimatorBeHitTag, ::MoleMole::Config::HitForwardType))((::PBYTE)hIl2Cpp + CLASS_2_7FEC2AC774DA54C5_METHOD_2_B9BB5960E69B92C6_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FEC2AC774DA54C5_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7FEC2AC774DA54C5_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}
};
