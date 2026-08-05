#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_139992A97A29D955.h"
#include "unitysdk/Struct_2_B196590B3E289741.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace System { class String; }
namespace UnityEngine::UI { class InputField; }

#define CLASS_2_1E2C28EB5494586C_METHOD_2_F40B6F4A2DF3388D_OFFSET UNITYSDK_OFFSET(0x159053F0)
#define CLASS_2_1E2C28EB5494586C_METHOD_2_F558A95A6A60C6E2_OFFSET UNITYSDK_OFFSET(0x15905310)
#define CLASS_2_1E2C28EB5494586C__CTOR_OFFSET UNITYSDK_OFFSET(0x159053D0)

inline static constexpr unsigned int Class_2_1E2C28EB5494586C_TypeDefinitionIndex = 90493;

class Class_2_1E2C28EB5494586C : public ::Class_1_139992A97A29D955<::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>, ::Struct_2_B196590B3E289741>
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1E2C28EB5494586C__CTOR_OFFSET))(this);
	}

	::Struct_2_B196590B3E289741 Method_2_F558A95A6A60C6E2(::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char> a1)
	{
		return ((::Struct_2_B196590B3E289741(*)(::PVOID, ::System::ValueTuple_3<::System::String*, ::System::Int32, ::System::Char>))((::PBYTE)hIl2Cpp + CLASS_2_1E2C28EB5494586C_METHOD_2_F558A95A6A60C6E2_OFFSET))(this, a1);
	}

	static ::System::Char Method_2_F40B6F4A2DF3388D(::Struct_2_B196590B3E289741 a1, ::UnityEngine::UI::InputField* a2)
	{
		return ((::System::Char(*)(::Struct_2_B196590B3E289741, ::UnityEngine::UI::InputField*))((::PBYTE)hIl2Cpp + CLASS_2_1E2C28EB5494586C_METHOD_2_F40B6F4A2DF3388D_OFFSET))(a1, a2);
	}
};
