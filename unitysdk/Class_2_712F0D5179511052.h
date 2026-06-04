#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E5F3FA10EC56B9A0.h"

namespace RPG::Client { class SceneTV; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_712F0D5179511052_METHOD_2_1DC132377CE76A3B_OFFSET UNITYSDK_OFFSET(0x137958D0)
#define CLASS_2_712F0D5179511052_METHOD_2_26C5221AC22B6534_1_OFFSET UNITYSDK_OFFSET(0x13795D90)
#define CLASS_2_712F0D5179511052_METHOD_2_26C5221AC22B6534_OFFSET UNITYSDK_OFFSET(0x13795AE0)
#define CLASS_2_712F0D5179511052_METHOD_2_3A29C29CDDD3285E_OFFSET UNITYSDK_OFFSET(0x13795C00)
#define CLASS_2_712F0D5179511052_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x13795890)
#define CLASS_2_712F0D5179511052_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x13795850)
#define CLASS_2_712F0D5179511052_METHOD_2_DEEC07BB4453A5F9_OFFSET UNITYSDK_OFFSET(0x13795EB0)
#define CLASS_2_712F0D5179511052__CTOR_OFFSET UNITYSDK_OFFSET(0x137957D0)

inline static constexpr unsigned int Class_2_712F0D5179511052_TypeDefinitionIndex = 53594;

class Class_2_712F0D5179511052 : public ::Class_1_E5F3FA10EC56B9A0
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

	::System::Void Method_2_1DC132377CE76A3B(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_1DC132377CE76A3B_OFFSET))(this, a1);
	}

	::System::Void Method_2_26C5221AC22B6534()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_26C5221AC22B6534_OFFSET))(this);
	}

	::System::Void Method_2_3A29C29CDDD3285E(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_3A29C29CDDD3285E_OFFSET))(this, a1);
	}

	::System::Void Method_2_26C5221AC22B6534_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_26C5221AC22B6534_1_OFFSET))(this);
	}

	::System::Void Method_2_DEEC07BB4453A5F9(::System::Int32 a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_DEEC07BB4453A5F9_OFFSET))(this, a1, a2);
	}
};
