#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumModule; }
namespace System { class String; }

#define CLASS_1_8753B85D0573DD97_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xE457120)
#define CLASS_1_8753B85D0573DD97_METHOD_1_1FF0B87A9F818945_OFFSET UNITYSDK_OFFSET(0xE456B80)
#define CLASS_1_8753B85D0573DD97_METHOD_1_2C8425ABFEF12691_OFFSET UNITYSDK_OFFSET(0xE4571B0)
#define CLASS_1_8753B85D0573DD97_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xE457290)
#define CLASS_1_8753B85D0573DD97_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0xE457030)
#define CLASS_1_8753B85D0573DD97_METHOD_1_8A2AC7CD7EA66CAC_OFFSET UNITYSDK_OFFSET(0xE4570D0)
#define CLASS_1_8753B85D0573DD97_METHOD_1_CE34EA208837238D_1_OFFSET UNITYSDK_OFFSET(0xE456FD0)
#define CLASS_1_8753B85D0573DD97_METHOD_1_CE34EA208837238D_2_OFFSET UNITYSDK_OFFSET(0xE457350)
#define CLASS_1_8753B85D0573DD97_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xE456F70)

inline static constexpr unsigned int Class_1_8753B85D0573DD97_TypeDefinitionIndex = 62040;

class Class_1_8753B85D0573DD97 : public ::System::Object
{
public:
	static ::RPG::Client::MuseumModule** StaticGet_Field_1_0()
	{
		return (::RPG::Client::MuseumModule**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8753B85D0573DD97_TypeDefinitionIndex)->GetStaticField(0x27350);
	}

	static ::System::Boolean Method_1_1FF0B87A9F818945(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_1FF0B87A9F818945_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_CE34EA208837238D_1_OFFSET))();
	}

	static ::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_5E72916301E347E2_OFFSET))();
	}

	static ::System::Boolean Method_1_8A2AC7CD7EA66CAC()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_8A2AC7CD7EA66CAC_OFFSET))();
	}

	static ::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_1808E1CF7A125519_OFFSET))();
	}

	static ::System::Boolean Method_1_2C8425ABFEF12691(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_2C8425ABFEF12691_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_4DA6D4A624E42CAB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_CE34EA208837238D_2_OFFSET))();
	}
};
