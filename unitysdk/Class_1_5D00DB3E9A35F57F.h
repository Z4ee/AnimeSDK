#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class MuseumModule; }
namespace System { class String; }

#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_2C8425ABFEF12691_OFFSET UNITYSDK_OFFSET(0x11385690)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_4DA6D4A624E42CAB_OFFSET UNITYSDK_OFFSET(0x11385770)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_9CA35E5BF1A50E77_OFFSET UNITYSDK_OFFSET(0x11385560)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_9F2E6C28EBE466FC_OFFSET UNITYSDK_OFFSET(0x11384DF0)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x113855E0)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_1_OFFSET UNITYSDK_OFFSET(0x11385420)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_2_OFFSET UNITYSDK_OFFSET(0x11385830)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x113853A0)
#define CLASS_1_5D00DB3E9A35F57F_METHOD_1_D2809205008ACF99_OFFSET UNITYSDK_OFFSET(0x113854A0)

inline static constexpr unsigned int Class_1_5D00DB3E9A35F57F_TypeDefinitionIndex = 53971;

class Class_1_5D00DB3E9A35F57F : public ::System::Object
{
public:
	static ::RPG::Client::MuseumModule** StaticGet_Field_1_0()
	{
		return (::RPG::Client::MuseumModule**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D00DB3E9A35F57F_TypeDefinitionIndex)->GetStaticField(0x30700);
	}

	static ::System::Boolean Method_1_9F2E6C28EBE466FC(::System::UInt32 a1)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_9F2E6C28EBE466FC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504_1()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_1_OFFSET))();
	}

	static ::System::Boolean Method_1_D2809205008ACF99()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_D2809205008ACF99_OFFSET))();
	}

	static ::System::Boolean Method_1_9CA35E5BF1A50E77()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_9CA35E5BF1A50E77_OFFSET))();
	}

	static ::System::Boolean Method_1_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_A3FAE12D7B6ACD62_OFFSET))();
	}

	static ::System::Boolean Method_1_2C8425ABFEF12691(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_2C8425ABFEF12691_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_4DA6D4A624E42CAB()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_4DA6D4A624E42CAB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504_2()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D00DB3E9A35F57F_METHOD_1_CE18697B63E52504_2_OFFSET))();
	}
};
