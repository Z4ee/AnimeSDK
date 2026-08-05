#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define CLASS_1_126C49C52DDBDB6A_METHOD_1_2EDCB83277FC1AAC_OFFSET UNITYSDK_OFFSET(0x17541290)
#define CLASS_1_126C49C52DDBDB6A_METHOD_1_51236028F1A6B86E_OFFSET UNITYSDK_OFFSET(0x175410E0)

inline static constexpr unsigned int Class_1_126C49C52DDBDB6A_TypeDefinitionIndex = 80063;

class Class_1_126C49C52DDBDB6A : public ::System::Object
{
public:
	static ::MiHoYo::SDK::JSONNode* Method_1_51236028F1A6B86E(::System::String* a1)
	{
		return ((::MiHoYo::SDK::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_126C49C52DDBDB6A_METHOD_1_51236028F1A6B86E_OFFSET))(a1);
	}

	static ::System::String* Method_1_2EDCB83277FC1AAC(::MiHoYo::SDK::JSONObject* a1, ::System::UInt64 a2)
	{
		return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_126C49C52DDBDB6A_METHOD_1_2EDCB83277FC1AAC_OFFSET))(a1, a2);
	}
};
