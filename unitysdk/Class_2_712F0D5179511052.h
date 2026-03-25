#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_E5F3FA10EC56B9A0_1.h"

namespace RPG::Client { class SceneTV; }
namespace RPG::GameCore { class PropComponent; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_712F0D5179511052_METHOD_2_55B8349E0B606444_OFFSET UNITYSDK_OFFSET(0x87CFB40)
#define CLASS_2_712F0D5179511052_METHOD_2_7206DC8F66A4D2A8_OFFSET UNITYSDK_OFFSET(0x87CFE20)
#define CLASS_2_712F0D5179511052_METHOD_2_A0EF295B1B6D6694_OFFSET UNITYSDK_OFFSET(0x87CFCB0)
#define CLASS_2_712F0D5179511052_METHOD_2_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x87CF8E0)
#define CLASS_2_712F0D5179511052_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x87CF8A0)
#define CLASS_2_712F0D5179511052_METHOD_2_DEEC07BB4453A5F9_OFFSET UNITYSDK_OFFSET(0x87CFF50)
#define CLASS_2_712F0D5179511052_METHOD_2_FBED8FCF80040FCD_OFFSET UNITYSDK_OFFSET(0x87CF920)
#define CLASS_2_712F0D5179511052__CTOR_OFFSET UNITYSDK_OFFSET(0x87CF820)

inline static constexpr unsigned int Class_2_712F0D5179511052_TypeDefinitionIndex = 46219;

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

	::System::Void Method_2_A0EF295B1B6D6694(::UnityEngine::GameObject* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CLASS_2_712F0D5179511052_METHOD_2_A0EF295B1B6D6694_OFFSET))(this, a1);
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
