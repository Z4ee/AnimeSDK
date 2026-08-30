#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_92E3E110E38400D6;
namespace RPG::Client { template <typename T1, typename T2> class LRUCache_2; }
namespace RPG::GameCore { class FreeStyleCharacterIDMapping; }
namespace RPG::GameCore { class FreeStyleCharacterIDMappingConfig; }
namespace RPG::GameCore { class FreeStyleCharacterInfoConfigRow; }
namespace RPG::GameCore { class FreeStyleTriggerGraphInfo; }
namespace RPG::GameCore { class FreeStyleTriggerGraphTemplateConfig; }
namespace System { class String; }

#define CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_1AD5857B8C9C3CBE_OFFSET UNITYSDK_OFFSET(0xB8D9EE0)
#define CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_207232411D7EF2B4_OFFSET UNITYSDK_OFFSET(0xB8DA250)
#define CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_401CDFF85DCB5396_1_OFFSET UNITYSDK_OFFSET(0xB8DB310)
#define CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_401CDFF85DCB5396_OFFSET UNITYSDK_OFFSET(0xB8DAF40)
#define CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_503CD42A0C349327_OFFSET UNITYSDK_OFFSET(0xB8DA0E0)
#define CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_96BD6DEE3137F1D5_OFFSET UNITYSDK_OFFSET(0xB8D9E30)
#define CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_A1E2B53079D1C108_OFFSET UNITYSDK_OFFSET(0xB8DB270)
#define CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_EBB11CF0AA6652B5_OFFSET UNITYSDK_OFFSET(0xB8DAFF0)
#define CLASS_1_B00F7C4C3DDAC6B6__CCTOR_OFFSET UNITYSDK_OFFSET(0xB8DB3C0)

inline static constexpr unsigned int Class_1_B00F7C4C3DDAC6B6_TypeDefinitionIndex = 57427;

class Class_1_B00F7C4C3DDAC6B6 : public ::System::Object
{
public:
	static ::RPG::Client::LRUCache_2<::System::String*, ::Class_1_92E3E110E38400D6*>** StaticGet_AOAPMGJGHOC()
	{
		return (::RPG::Client::LRUCache_2<::System::String*, ::Class_1_92E3E110E38400D6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B00F7C4C3DDAC6B6_TypeDefinitionIndex)->GetStaticField(0x1B4D0);
	}
	static ::RPG::Client::LRUCache_2<::System::String*, ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*>** StaticGet_EOLPHFHNKMI()
	{
		return (::RPG::Client::LRUCache_2<::System::String*, ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B00F7C4C3DDAC6B6_TypeDefinitionIndex)->GetStaticField(0x1B4D8);
	}
	static ::System::String** StaticGet_HABAOLGJMBI()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B00F7C4C3DDAC6B6_TypeDefinitionIndex)->GetStaticField(0x1B4E0);
	}
	static ::RPG::GameCore::FreeStyleCharacterIDMappingConfig** StaticGet_HLGKFCGLCPG()
	{
		return (::RPG::GameCore::FreeStyleCharacterIDMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B00F7C4C3DDAC6B6_TypeDefinitionIndex)->GetStaticField(0x1B4E8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B00F7C4C3DDAC6B6__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FreeStyleCharacterInfoConfigRow* Method_1_96BD6DEE3137F1D5(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleCharacterInfoConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_96BD6DEE3137F1D5_OFFSET))(a1);
	}

	static ::RPG::GameCore::FreeStyleCharacterIDMapping* Method_1_1AD5857B8C9C3CBE(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleCharacterIDMapping*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_1AD5857B8C9C3CBE_OFFSET))(a1);
	}

	static ::Class_1_92E3E110E38400D6* Method_1_503CD42A0C349327(::System::String* a1)
	{
		return ((::Class_1_92E3E110E38400D6*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_503CD42A0C349327_OFFSET))(a1);
	}

	static ::System::Void Method_1_401CDFF85DCB5396(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_401CDFF85DCB5396_OFFSET))(a1);
	}

	static ::RPG::GameCore::FreeStyleTriggerGraphInfo* Method_1_EBB11CF0AA6652B5(::System::String* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::FreeStyleTriggerGraphInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_EBB11CF0AA6652B5_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_401CDFF85DCB5396_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_401CDFF85DCB5396_1_OFFSET))(a1);
	}

	static ::Class_1_92E3E110E38400D6* Method_1_207232411D7EF2B4(::System::String* a1)
	{
		return ((::Class_1_92E3E110E38400D6*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_207232411D7EF2B4_OFFSET))(a1);
	}

	static ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig* Method_1_A1E2B53079D1C108(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B00F7C4C3DDAC6B6_METHOD_1_A1E2B53079D1C108_OFFSET))(a1);
	}
};
