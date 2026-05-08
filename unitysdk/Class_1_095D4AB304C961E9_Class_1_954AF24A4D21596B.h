#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_1_095D4AB304C961E9_CLASS_1_954AF24A4D21596B__CTOR_OFFSET UNITYSDK_OFFSET(0x15931380)

inline static constexpr unsigned int Class_1_095D4AB304C961E9_Class_1_954AF24A4D21596B_TypeDefinitionIndex = 57805;

class Class_1_095D4AB304C961E9_Class_1_954AF24A4D21596B : public ::System::Object
{
public:
	::System::String* Field_1_4; // 0x10
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_5; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_0; // 0x24
	::System::Int32 Field_1_3; // 0x28
	::System::Int32 Field_1_1; // 0x2C

	::System::Void _ctor(::System::Int32 a1, ::System::Tuple_2<::System::Int32, ::System::String*>* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Tuple_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + CLASS_1_095D4AB304C961E9_CLASS_1_954AF24A4D21596B__CTOR_OFFSET))(this, a1, a2);
	}
};
