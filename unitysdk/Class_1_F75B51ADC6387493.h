#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class LevelNPCStillConfig; }
namespace RPG::GameCore { class LevelNPCStillConfigData; }
namespace System { class String; }

#define CLASS_1_F75B51ADC6387493_METHOD_1_5790A55946AA509D_OFFSET UNITYSDK_OFFSET(0x146123A0)
#define CLASS_1_F75B51ADC6387493_METHOD_1_9CE320577E9DCBB4_OFFSET UNITYSDK_OFFSET(0x146123F0)
#define CLASS_1_F75B51ADC6387493_METHOD_1_F8C7231308CD2C82_OFFSET UNITYSDK_OFFSET(0x14612300)

inline static constexpr unsigned int Class_1_F75B51ADC6387493_TypeDefinitionIndex = 68452;

class Class_1_F75B51ADC6387493 : public ::System::Object
{
public:
	static ::RPG::GameCore::LevelNPCStillConfig** StaticGet_Field_1_0()
	{
		return (::RPG::GameCore::LevelNPCStillConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F75B51ADC6387493_TypeDefinitionIndex)->GetStaticField(0x556D0);
	}

	static ::System::Void Method_1_F8C7231308CD2C82()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F75B51ADC6387493_METHOD_1_F8C7231308CD2C82_OFFSET))();
	}

	static ::System::Void Method_1_5790A55946AA509D()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F75B51ADC6387493_METHOD_1_5790A55946AA509D_OFFSET))();
	}

	static ::RPG::GameCore::LevelNPCStillConfigData* Method_1_9CE320577E9DCBB4(::System::String* a1)
	{
		return ((::RPG::GameCore::LevelNPCStillConfigData*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F75B51ADC6387493_METHOD_1_9CE320577E9DCBB4_OFFSET))(a1);
	}
};
