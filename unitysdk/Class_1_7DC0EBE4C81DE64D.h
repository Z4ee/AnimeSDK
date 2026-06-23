#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class JSONObject; }
namespace System { class String; }

#define CLASS_1_7DC0EBE4C81DE64D_METHOD_1_419CAFE16E50946D_OFFSET UNITYSDK_OFFSET(0x179C98E0)
#define CLASS_1_7DC0EBE4C81DE64D_METHOD_1_51236028F1A6B86E_OFFSET UNITYSDK_OFFSET(0x179C9730)

inline static constexpr unsigned int Class_1_7DC0EBE4C81DE64D_TypeDefinitionIndex = 60674;

class Class_1_7DC0EBE4C81DE64D : public ::System::Object
{
public:
	static ::MiHoYo::SDK::JSONNode* Method_1_51236028F1A6B86E(::System::String* a1)
	{
		return ((::MiHoYo::SDK::JSONNode*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DC0EBE4C81DE64D_METHOD_1_51236028F1A6B86E_OFFSET))(a1);
	}

	static ::System::String* Method_1_419CAFE16E50946D(::MiHoYo::SDK::JSONObject* a1, ::System::UInt64 a2)
	{
		return ((::System::String*(*)(::MiHoYo::SDK::JSONObject*, ::System::UInt64))((::PBYTE)hIl2Cpp + CLASS_1_7DC0EBE4C81DE64D_METHOD_1_419CAFE16E50946D_OFFSET))(a1, a2);
	}
};
