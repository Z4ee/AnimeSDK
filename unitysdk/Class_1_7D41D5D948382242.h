#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class JSONNode; }
namespace System { class String; }

#define CLASS_1_7D41D5D948382242_METHOD_1_7CF2439931A13FE4_OFFSET UNITYSDK_OFFSET(0xCD2C310)
#define CLASS_1_7D41D5D948382242__CTOR_OFFSET UNITYSDK_OFFSET(0xCD2C580)

inline static constexpr unsigned int Class_1_7D41D5D948382242_TypeDefinitionIndex = 61460;

class Class_1_7D41D5D948382242 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18
	::System::Int32 Field_1_2; // 0x20
	::System::Int32 Field_1_3; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D41D5D948382242__CTOR_OFFSET))(this);
	}

	static ::Class_1_7D41D5D948382242* Method_1_7CF2439931A13FE4(::System::String* a1, ::MiHoYo::SDK::JSONNode* a2)
	{
		return ((::Class_1_7D41D5D948382242*(*)(::System::String*, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + CLASS_1_7D41D5D948382242_METHOD_1_7CF2439931A13FE4_OFFSET))(a1, a2);
	}
};
