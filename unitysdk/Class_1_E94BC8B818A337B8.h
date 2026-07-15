#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MatchThreeGameProp; }
namespace System { class String; }

#define CLASS_1_E94BC8B818A337B8_METHOD_1_0DF420E95D6252BE_OFFSET UNITYSDK_OFFSET(0x17AA5560)
#define CLASS_1_E94BC8B818A337B8_METHOD_1_9A03733F1AEF05A2_OFFSET UNITYSDK_OFFSET(0x17AA54A0)
#define CLASS_1_E94BC8B818A337B8__CTOR_OFFSET UNITYSDK_OFFSET(0x17AA5530)
#define CLASS_1_E94BC8B818A337B8__ISMEET_B__3_0_OFFSET UNITYSDK_OFFSET(0x17AA5670)

inline static constexpr unsigned int Class_1_E94BC8B818A337B8_TypeDefinitionIndex = 63052;

class Class_1_E94BC8B818A337B8 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E94BC8B818A337B8__CTOR_OFFSET))(this, a1);
	}

	static ::Class_1_E94BC8B818A337B8* Method_1_9A03733F1AEF05A2(::System::String* a1)
	{
		return ((::Class_1_E94BC8B818A337B8*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E94BC8B818A337B8_METHOD_1_9A03733F1AEF05A2_OFFSET))(a1);
	}

	::System::Boolean Method_1_0DF420E95D6252BE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E94BC8B818A337B8_METHOD_1_0DF420E95D6252BE_OFFSET))(this);
	}

	::System::Boolean _IsMeet_b__3_0(::RPG::Client::MatchThreeGameProp* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MatchThreeGameProp*))((::PBYTE)hIl2Cpp + CLASS_1_E94BC8B818A337B8__ISMEET_B__3_0_OFFSET))(this, a1);
	}
};
