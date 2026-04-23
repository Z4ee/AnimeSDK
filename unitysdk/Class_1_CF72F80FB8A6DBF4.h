#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

#define CLASS_1_CF72F80FB8A6DBF4_METHOD_1_1D61E425DAB0DAFC_OFFSET UNITYSDK_OFFSET(0x9035590)
#define CLASS_1_CF72F80FB8A6DBF4_METHOD_1_49A27F05EF7DACFC_OFFSET UNITYSDK_OFFSET(0x90354C0)
#define CLASS_1_CF72F80FB8A6DBF4_METHOD_1_7990762C20A90D1B_OFFSET UNITYSDK_OFFSET(0x9035730)
#define CLASS_1_CF72F80FB8A6DBF4_METHOD_1_9A4F18F0201FAE53_OFFSET UNITYSDK_OFFSET(0x9035660)
#define CLASS_1_CF72F80FB8A6DBF4_METHOD_1_D3C6AECBC4FFB6CD_OFFSET UNITYSDK_OFFSET(0x9035540)

inline static constexpr unsigned int Class_1_CF72F80FB8A6DBF4_TypeDefinitionIndex = 52810;

class Class_1_CF72F80FB8A6DBF4 : public ::System::Object
{
public:
	// static const ::System::UInt32 Field_1_0 = 0x2710; // 0x0

	static ::System::UInt32 Method_1_49A27F05EF7DACFC(::System::String* a1)
	{
		return ((::System::UInt32(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF72F80FB8A6DBF4_METHOD_1_49A27F05EF7DACFC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_D3C6AECBC4FFB6CD(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CF72F80FB8A6DBF4_METHOD_1_D3C6AECBC4FFB6CD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1D61E425DAB0DAFC(::RPG::GameCore::GameEntity* a1, ::System::String* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF72F80FB8A6DBF4_METHOD_1_1D61E425DAB0DAFC_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_9A4F18F0201FAE53(::System::UInt32 a1, ::System::String* a2)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF72F80FB8A6DBF4_METHOD_1_9A4F18F0201FAE53_OFFSET))(a1, a2);
	}

	static ::System::UInt32 Method_1_7990762C20A90D1B(::System::UInt32 a1, ::System::String* a2, ::System::String* a3)
	{
		return ((::System::UInt32(*)(::System::UInt32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF72F80FB8A6DBF4_METHOD_1_7990762C20A90D1B_OFFSET))(a1, a2, a3);
	}
};
