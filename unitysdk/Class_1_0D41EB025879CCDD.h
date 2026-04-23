#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/OpenWorld/StreamingPauseReason.h"
#include "unitysdk/RPG/Client/ReasonBool_1.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0D41EB025879CCDD_GET_STREAMINGNOTPAUSE_OFFSET UNITYSDK_OFFSET(0x12957C70)
#define CLASS_1_0D41EB025879CCDD_METHOD_1_E6165DFAF98E9739_OFFSET UNITYSDK_OFFSET(0x12957C90)
#define CLASS_1_0D41EB025879CCDD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x12957D00)
#define CLASS_1_0D41EB025879CCDD_SET_STREAMINGNOTPAUSE_OFFSET UNITYSDK_OFFSET(0x12957C80)
#define CLASS_1_0D41EB025879CCDD__CCTOR_OFFSET UNITYSDK_OFFSET(0x12957D50)
#define CLASS_1_0D41EB025879CCDD__CTOR_OFFSET UNITYSDK_OFFSET(0x12957D40)

inline static constexpr unsigned int Class_1_0D41EB025879CCDD_TypeDefinitionIndex = 67993;

class Class_1_0D41EB025879CCDD : public ::System::Object
{
public:
	static ::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason>* StaticGet__StreamingNotPause_k__BackingField()
	{
		return (::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason>*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D41EB025879CCDD_TypeDefinitionIndex)->GetStaticField(0xBAB0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0D41EB025879CCDD__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D41EB025879CCDD__CCTOR_OFFSET))();
	}

	static ::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason> get_StreamingNotPause()
	{
		return ((::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D41EB025879CCDD_GET_STREAMINGNOTPAUSE_OFFSET))();
	}

	static ::System::Void set_StreamingNotPause(::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason> value)
	{
		return ((::System::Void(*)(::RPG::Client::ReasonBool_1<::RPG::Client::OpenWorld::StreamingPauseReason>))((::PBYTE)hIl2Cpp + CLASS_1_0D41EB025879CCDD_SET_STREAMINGNOTPAUSE_OFFSET))(value);
	}

	static ::System::Void Method_1_E6165DFAF98E9739(::System::Boolean a1, ::RPG::Client::OpenWorld::StreamingPauseReason a2)
	{
		return ((::System::Void(*)(::System::Boolean, ::RPG::Client::OpenWorld::StreamingPauseReason))((::PBYTE)hIl2Cpp + CLASS_1_0D41EB025879CCDD_METHOD_1_E6165DFAF98E9739_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D41EB025879CCDD_METHOD_1_F0E307B84478A272_OFFSET))();
	}
};
