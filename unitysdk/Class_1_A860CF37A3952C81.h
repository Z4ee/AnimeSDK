#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/RPG/Client/VoiceType.h"
#include "unitysdk/System/Object.h"

class AkCallbackInfo;
class Class_1_A860CF37A3952C81_Class_1_BDB3C8B407BCD040;
namespace RPG::Client { class IAvatarInfoProvider; }
namespace RPG::Client { class TeamData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A860CF37A3952C81_METHOD_1_06A2B758FCB8A24E_OFFSET UNITYSDK_OFFSET(0x9900F40)
#define CLASS_1_A860CF37A3952C81_METHOD_1_07A48CE1AA24868D_OFFSET UNITYSDK_OFFSET(0x9900840)
#define CLASS_1_A860CF37A3952C81_METHOD_1_151E25A63D14DDB0_OFFSET UNITYSDK_OFFSET(0x9900B80)
#define CLASS_1_A860CF37A3952C81_METHOD_1_5AD578FCE9CF19D4_OFFSET UNITYSDK_OFFSET(0x98FFBA0)
#define CLASS_1_A860CF37A3952C81_METHOD_1_63D53C1411B8F5FC_OFFSET UNITYSDK_OFFSET(0x98FFC80)
#define CLASS_1_A860CF37A3952C81_METHOD_1_7F0C8094100A93C6_OFFSET UNITYSDK_OFFSET(0x9900CA0)
#define CLASS_1_A860CF37A3952C81_METHOD_1_82E78E5C348471FD_OFFSET UNITYSDK_OFFSET(0x98FFC10)
#define CLASS_1_A860CF37A3952C81_METHOD_1_C301C5FD34B40D36_OFFSET UNITYSDK_OFFSET(0x9900AD0)
#define CLASS_1_A860CF37A3952C81_METHOD_1_DB555289F5744277_OFFSET UNITYSDK_OFFSET(0x9900ED0)
#define CLASS_1_A860CF37A3952C81__CTOR_OFFSET UNITYSDK_OFFSET(0x98FFB60)

inline static constexpr unsigned int Class_1_A860CF37A3952C81_TypeDefinitionIndex = 62796;

class Class_1_A860CF37A3952C81 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::Class_1_A860CF37A3952C81_Class_1_BDB3C8B407BCD040*>* Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x18
	::System::Boolean Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_5AD578FCE9CF19D4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_METHOD_1_5AD578FCE9CF19D4_OFFSET))(this);
	}

	::System::Void Method_1_82E78E5C348471FD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_METHOD_1_82E78E5C348471FD_OFFSET))(this);
	}

	::System::Void Method_1_63D53C1411B8F5FC(::RPG::Client::IAvatarInfoProvider* a1, ::RPG::Client::TeamData* a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::Client::IAvatarInfoProvider*, ::RPG::Client::TeamData*))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_METHOD_1_63D53C1411B8F5FC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_151E25A63D14DDB0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_METHOD_1_151E25A63D14DDB0_OFFSET))(this);
	}

	::System::Void Method_1_7F0C8094100A93C6(::System::Object* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_METHOD_1_7F0C8094100A93C6_OFFSET))(this, a1);
	}

	::System::Void Method_1_DB555289F5744277(::System::UInt32 a1, ::AkCallbackType a2, ::AkCallbackInfo* a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_METHOD_1_DB555289F5744277_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_C301C5FD34B40D36(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::VoiceType a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::RPG::Client::VoiceType))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_METHOD_1_C301C5FD34B40D36_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_07A48CE1AA24868D(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_METHOD_1_07A48CE1AA24868D_OFFSET))(this, a1);
	}

	::System::Void Method_1_06A2B758FCB8A24E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A860CF37A3952C81_METHOD_1_06A2B758FCB8A24E_OFFSET))(this);
	}
};
