#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define CLASS_1_E532B3574817D891_METHOD_1_58D61026366CEB7D_OFFSET UNITYSDK_OFFSET(0x1103A820)
#define CLASS_1_E532B3574817D891_METHOD_1_83D1E6A065AF0FC0_OFFSET UNITYSDK_OFFSET(0x1103A900)
#define CLASS_1_E532B3574817D891_METHOD_1_A688C32E5DF00CCD_OFFSET UNITYSDK_OFFSET(0x1103A680)
#define CLASS_1_E532B3574817D891_METHOD_1_CF960D8CA526BD3F_OFFSET UNITYSDK_OFFSET(0x1103A9B0)
#define CLASS_1_E532B3574817D891_METHOD_1_D2594BF9DC46F655_OFFSET UNITYSDK_OFFSET(0x1103AB50)
#define CLASS_1_E532B3574817D891__CTOR_OFFSET UNITYSDK_OFFSET(0x1103AC10)

inline static constexpr unsigned int Class_1_E532B3574817D891_TypeDefinitionIndex = 49503;

class Class_1_E532B3574817D891 : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E532B3574817D891__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_A688C32E5DF00CCD(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_E532B3574817D891_METHOD_1_A688C32E5DF00CCD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_58D61026366CEB7D(::MiHoYo::SDK::JSONNode* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_E532B3574817D891_METHOD_1_58D61026366CEB7D_OFFSET))(this, a1);
	}

	::System::Void Method_1_83D1E6A065AF0FC0(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E532B3574817D891_METHOD_1_83D1E6A065AF0FC0_OFFSET))(this, a1);
	}

	::System::Void Method_1_CF960D8CA526BD3F(::System::String* a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E532B3574817D891_METHOD_1_CF960D8CA526BD3F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_D2594BF9DC46F655(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E532B3574817D891_METHOD_1_D2594BF9DC46F655_OFFSET))(this, a1);
	}
};
