#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E5F3FA10EC56B9A0_1.h"

namespace RPG::Client { class SceneTV; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_712F0D5179511052_METHOD_2_3014D72E61DF783D_OFFSET UNITYSDK_OFFSET(0x1212D480)
#define CLASS_2_712F0D5179511052_METHOD_2_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x1212D310)
#define CLASS_2_712F0D5179511052_METHOD_2_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x1212D600)
#define CLASS_2_712F0D5179511052_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x1212D0B0)
#define CLASS_2_712F0D5179511052_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1212D070)
#define CLASS_2_712F0D5179511052_METHOD_2_DEEC07BB4453A5F9_OFFSET UNITYSDK_OFFSET(0x1212D730)
#define CLASS_2_712F0D5179511052_METHOD_2_FBED8FCF80040FCD_OFFSET UNITYSDK_OFFSET(0x1212D0F0)
#define CLASS_2_712F0D5179511052__CTOR_OFFSET UNITYSDK_OFFSET(0x1212CFF0)

inline static constexpr unsigned int Class_2_712F0D5179511052_TypeDefinitionIndex = 52885;

class Class_2_712F0D5179511052 : public ::Class_1_E5F3FA10EC56B9A0_1
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::Client::SceneTV*>* Field_2_0; // 0x18

	::System::Void _ctor(::RPG::GameCore::PropComponent* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PropComponent*))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052__CTOR_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Void Method_2_FBED8FCF80040FCD(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_FBED8FCF80040FCD_OFFSET))(this, a1);
	}

	::System::Void Method_2_55B8349E0B606444()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_55B8349E0B606444_OFFSET))(this);
	}

	::System::Void Method_2_3014D72E61DF783D(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_3014D72E61DF783D_OFFSET))(this, a1);
	}

	::System::Void Method_2_7206DC8F66A4D2A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_7206DC8F66A4D2A8_OFFSET))(this);
	}

	::System::Void Method_2_DEEC07BB4453A5F9(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_DEEC07BB4453A5F9_OFFSET))(this, a1, a2);
	}
};
