#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumModule; }
namespace System { class String; }

#define CLASS_1_8753B85D0573DD97_METHOD_1_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0xEB85D70)
#define CLASS_1_8753B85D0573DD97_METHOD_1_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0xEB85BF0)
#define CLASS_1_8753B85D0573DD97_METHOD_1_1FF0B87A9F818945_OFFSET UNITYSDK_OFFSET(0xEB856D0)
#define CLASS_1_8753B85D0573DD97_METHOD_1_35A1BA48D9ACC587_OFFSET UNITYSDK_OFFSET(0xEB85E00)
#define CLASS_1_8753B85D0573DD97_METHOD_1_3B4FCCB1316C6ED8_OFFSET UNITYSDK_OFFSET(0xEB85D20)
#define CLASS_1_8753B85D0573DD97_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0xEB85EE0)
#define CLASS_1_8753B85D0573DD97_METHOD_1_5E72916301E347E2_OFFSET UNITYSDK_OFFSET(0xEB85C80)
#define CLASS_1_8753B85D0573DD97_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0xEB85B30)
#define CLASS_1_8753B85D0573DD97_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xEB85FA0)

inline static constexpr unsigned int Class_1_8753B85D0573DD97_TypeDefinitionIndex = 66350;

class Class_1_8753B85D0573DD97 : public ::System::Object
{
public:
	static ::RPG::Client::MuseumModule** StaticGet_NNPPJLLEFIA()
	{
		return (::RPG::Client::MuseumModule**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8753B85D0573DD97_TypeDefinitionIndex)->GetStaticField(0x56800);
	}

	static ::System::Boolean Method_1_1FF0B87A9F818945(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_1FF0B87A9F818945_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_A3FAE12D7B6ACD62_OFFSET))();
	}

	static ::System::Boolean Method_1_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_1808E1CF7A125519_OFFSET))();
	}

	static ::System::Boolean Method_1_5E72916301E347E2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_5E72916301E347E2_OFFSET))();
	}

	static ::System::Boolean Method_1_3B4FCCB1316C6ED8()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_3B4FCCB1316C6ED8_OFFSET))();
	}

	static ::System::Boolean Method_1_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_1808E1CF7A125519_1_OFFSET))();
	}

	static ::System::Boolean Method_1_35A1BA48D9ACC587(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_35A1BA48D9ACC587_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_4DA6D4A624E42CAB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8753B85D0573DD97_METHOD_1_CE34EA208837238D_OFFSET))();
	}
};
