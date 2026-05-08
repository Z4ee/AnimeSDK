#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_46E794449557F23C.h"
#include "unitysdk/Struct_2_E147DFD2A4EE8B0B.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_143;
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define STRUCT_2_6D21F49E205965F8_METHOD_2_050E70FEDB783306_OFFSET UNITYSDK_OFFSET(0x70C5B0)
#define STRUCT_2_6D21F49E205965F8_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x3AA080)
#define STRUCT_2_6D21F49E205965F8_METHOD_2_600080D4BC474681_OFFSET UNITYSDK_OFFSET(0x70C610)
#define STRUCT_2_6D21F49E205965F8_METHOD_2_D63AC6AF97004AA8_OFFSET UNITYSDK_OFFSET(0x70C600)

inline static constexpr unsigned int Struct_2_6D21F49E205965F8_TypeDefinitionIndex = 46668;

struct alignas(8) Struct_2_6D21F49E205965F8
{
	::Struct_2_E147DFD2A4EE8B0B Field_2_0; // 0x10
	::Class_0_16E4307DCC419505_143* Field_2_1; // 0x28
	::Struct_2_46E794449557F23C Field_2_2; // 0x30

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6D21F49E205965F8_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}

	::System::Void Method_2_050E70FEDB783306(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_6D21F49E205965F8_METHOD_2_050E70FEDB783306_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_D63AC6AF97004AA8(::SimpleJSON::JSONNode* a1, ::System::Boolean a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_6D21F49E205965F8_METHOD_2_D63AC6AF97004AA8_OFFSET))(this, a1, a2);
	}

	::SimpleJSON::JSONNode* Method_2_600080D4BC474681()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6D21F49E205965F8_METHOD_2_600080D4BC474681_OFFSET))(this);
	}
};
