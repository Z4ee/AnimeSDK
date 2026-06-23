#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_1829288F4F4A624D;
class Class_2_A98F487E59440D0B;
class Class_2_ACF3AD21D9602888;
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define CLASS_1_BCE4AFAE9C733A0B_METHOD_1_0580F7E70E78FD39_OFFSET UNITYSDK_OFFSET(0x14DBF250)
#define CLASS_1_BCE4AFAE9C733A0B_METHOD_1_BD3FEC175BED632E_OFFSET UNITYSDK_OFFSET(0x14DBF430)
#define CLASS_1_BCE4AFAE9C733A0B_METHOD_1_E9A575D18A0748D9_OFFSET UNITYSDK_OFFSET(0x14DBF3E0)
#define CLASS_1_BCE4AFAE9C733A0B__CTOR_OFFSET UNITYSDK_OFFSET(0x14DBF240)

inline static constexpr unsigned int Class_1_BCE4AFAE9C733A0B_TypeDefinitionIndex = 54395;

class Class_1_BCE4AFAE9C733A0B : public ::System::Object
{
public:
	::Class_1_1829288F4F4A624D* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_BCE4AFAE9C733A0B__CTOR_OFFSET))(this);
	}

	::Class_2_A98F487E59440D0B* Method_1_0580F7E70E78FD39(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Single a3, ::System::String* a4, ::System::Single a5)
	{
		return ((::Class_2_A98F487E59440D0B*(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_BCE4AFAE9C733A0B_METHOD_1_0580F7E70E78FD39_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_E9A575D18A0748D9(::Class_1_1829288F4F4A624D* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_1829288F4F4A624D*))((::PBYTE)hIl2Cpp + CLASS_1_BCE4AFAE9C733A0B_METHOD_1_E9A575D18A0748D9_OFFSET))(this, a1);
	}

	::System::Void Method_1_BD3FEC175BED632E(::UnityEngine::UI::Text* a1, ::System::String* a2, ::System::Single a3, ::System::String* a4, ::System::Single a5, ::System::Int32 a6, ::Class_2_ACF3AD21D9602888* a7)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Text*, ::System::String*, ::System::Single, ::System::String*, ::System::Single, ::System::Int32, ::Class_2_ACF3AD21D9602888*))((::PBYTE)hIl2Cpp + CLASS_1_BCE4AFAE9C733A0B_METHOD_1_BD3FEC175BED632E_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}
};
