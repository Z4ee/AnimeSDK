#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2BEA9D62D0D61789.h"

class Class_1_EEA0111A28582B57;
class Class_2_79F6D62CE30E3F8E_39;
namespace MoleMole { class UIActivePropsPageController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_DD2F0FAA13450121_METHOD_2_81F053FDA5541136_OFFSET UNITYSDK_OFFSET(0x11EB78A0)
#define CLASS_2_DD2F0FAA13450121_METHOD_2_B1936CE4DA97AA45_OFFSET UNITYSDK_OFFSET(0x11EB6D00)
#define CLASS_2_DD2F0FAA13450121_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x11EB7D70)
#define CLASS_2_DD2F0FAA13450121_METHOD_2_DDFCBBB54CA12CE0_OFFSET UNITYSDK_OFFSET(0x11EB6DB0)
#define CLASS_2_DD2F0FAA13450121__CTOR_OFFSET UNITYSDK_OFFSET(0x11EB6BF0)

inline static constexpr unsigned int Class_2_DD2F0FAA13450121_TypeDefinitionIndex = 86047;

class Class_2_DD2F0FAA13450121 : public ::Class_1_2BEA9D62D0D61789
{
public:
	::Class_2_79F6D62CE30E3F8E_39* Field_2_1; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::UI::Extension::UITabButton*>* Field_2_0; // 0x38

	::System::Void _ctor(::Class_1_EEA0111A28582B57* a1, ::MoleMole::UIActivePropsPageController* a2, ::UnityEngine::Transform* a3)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_EEA0111A28582B57*, ::MoleMole::UIActivePropsPageController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_2_DD2F0FAA13450121__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_2_B1936CE4DA97AA45()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD2F0FAA13450121_METHOD_2_B1936CE4DA97AA45_OFFSET))(this);
	}

	::System::Void Method_2_81F053FDA5541136(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_DD2F0FAA13450121_METHOD_2_81F053FDA5541136_OFFSET))(this, a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD2F0FAA13450121_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_2_DDFCBBB54CA12CE0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DD2F0FAA13450121_METHOD_2_DDFCBBB54CA12CE0_OFFSET))(this);
	}
};
