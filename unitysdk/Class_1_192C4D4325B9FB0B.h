#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AFC322BB49394EB5.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIWindowController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class GameObject; }

#define CLASS_1_192C4D4325B9FB0B_METHOD_1_33C7DC5D66A8BC91_OFFSET UNITYSDK_OFFSET(0x19546400)
#define CLASS_1_192C4D4325B9FB0B_METHOD_1_56CE4AFC5339F746_OFFSET UNITYSDK_OFFSET(0x195461F0)
#define CLASS_1_192C4D4325B9FB0B_METHOD_1_599BCEC420C8F99E_OFFSET UNITYSDK_OFFSET(0x195464C0)
#define CLASS_1_192C4D4325B9FB0B_METHOD_1_8235F327D6476D48_OFFSET UNITYSDK_OFFSET(0x195460F0)
#define CLASS_1_192C4D4325B9FB0B_METHOD_1_82E992240300FB30_OFFSET UNITYSDK_OFFSET(0x195461E0)
#define CLASS_1_192C4D4325B9FB0B_METHOD_1_EDE104A2956E181A_OFFSET UNITYSDK_OFFSET(0x195463B0)
#define CLASS_1_192C4D4325B9FB0B__CTOR_OFFSET UNITYSDK_OFFSET(0x19546020)

inline static constexpr unsigned int Class_1_192C4D4325B9FB0B_TypeDefinitionIndex = 74724;

class Class_1_192C4D4325B9FB0B : public ::System::Object
{
public:
	::UnityEngine::GameObject* Field_1_0; // 0x10
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_1_2; // 0x18
	::System::Int32 Field_1_1; // 0x20
	::System::Boolean Field_1_3; // 0x24

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::Enum_3_AFC322BB49394EB5 a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::Enum_3_AFC322BB49394EB5))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_8235F327D6476D48(::MoleMole::UIWindowController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_8235F327D6476D48_OFFSET))(this, a1);
	}

	::System::Void Method_1_82E992240300FB30()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_82E992240300FB30_OFFSET))(this);
	}

	::System::Void Method_1_56CE4AFC5339F746()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_56CE4AFC5339F746_OFFSET))(this);
	}

	::System::Void Method_1_EDE104A2956E181A(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_EDE104A2956E181A_OFFSET))(this, a1);
	}

	::System::Void Method_1_33C7DC5D66A8BC91(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_33C7DC5D66A8BC91_OFFSET))(this, a1);
	}

	::System::Void Method_1_599BCEC420C8F99E(::System::EventArgs* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CLASS_1_192C4D4325B9FB0B_METHOD_1_599BCEC420C8F99E_OFFSET))(this, a1);
	}
};
