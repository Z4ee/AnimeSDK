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

#define CLASS_1_DA772DEFE638720B_METHOD_1_1AD5857B8C9C3CBE_OFFSET UNITYSDK_OFFSET(0x87750E0)
#define CLASS_1_DA772DEFE638720B_METHOD_1_503CD42A0C349327_OFFSET UNITYSDK_OFFSET(0x87752F0)
#define CLASS_1_DA772DEFE638720B_METHOD_1_8583C5AC29198FC4_1_OFFSET UNITYSDK_OFFSET(0x8776630)
#define CLASS_1_DA772DEFE638720B_METHOD_1_8583C5AC29198FC4_OFFSET UNITYSDK_OFFSET(0x87762D0)
#define CLASS_1_DA772DEFE638720B_METHOD_1_A018A84479F76FBD_OFFSET UNITYSDK_OFFSET(0x8775460)
#define CLASS_1_DA772DEFE638720B_METHOD_1_A1E2B53079D1C108_OFFSET UNITYSDK_OFFSET(0x8776590)
#define CLASS_1_DA772DEFE638720B_METHOD_1_B7F20700BA59989D_OFFSET UNITYSDK_OFFSET(0x8776380)
#define CLASS_1_DA772DEFE638720B_METHOD_1_D485E1BBF278DEE0_OFFSET UNITYSDK_OFFSET(0x8775030)
#define CLASS_1_DA772DEFE638720B__CCTOR_OFFSET UNITYSDK_OFFSET(0x87766E0)

inline static constexpr unsigned int Class_1_DA772DEFE638720B_TypeDefinitionIndex = 46120;

class Class_1_DA772DEFE638720B : public ::System::Object
{
public:
	static ::RPG::Client::LRUCache_2<::System::String*, ::Class_1_92E3E110E38400D6*>** StaticGet_Field_1_2()
	{
		return (::RPG::Client::LRUCache_2<::System::String*, ::Class_1_92E3E110E38400D6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA772DEFE638720B_TypeDefinitionIndex)->GetStaticField(0x1F4C0);
	}
	static ::System::String** StaticGet_Field_1_0()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA772DEFE638720B_TypeDefinitionIndex)->GetStaticField(0x1F4C8);
	}
	static ::RPG::Client::LRUCache_2<::System::String*, ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*>** StaticGet_Field_1_3()
	{
		return (::RPG::Client::LRUCache_2<::System::String*, ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA772DEFE638720B_TypeDefinitionIndex)->GetStaticField(0x1F4D0);
	}
	static ::RPG::GameCore::FreeStyleCharacterIDMappingConfig** StaticGet_Field_1_1()
	{
		return (::RPG::GameCore::FreeStyleCharacterIDMappingConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DA772DEFE638720B_TypeDefinitionIndex)->GetStaticField(0x1F4D8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DA772DEFE638720B__CCTOR_OFFSET))();
	}

	static ::RPG::GameCore::FreeStyleCharacterInfoConfigRow* Method_1_D485E1BBF278DEE0(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleCharacterInfoConfigRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA772DEFE638720B_METHOD_1_D485E1BBF278DEE0_OFFSET))(a1);
	}

	static ::RPG::GameCore::FreeStyleCharacterIDMapping* Method_1_1AD5857B8C9C3CBE(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleCharacterIDMapping*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA772DEFE638720B_METHOD_1_1AD5857B8C9C3CBE_OFFSET))(a1);
	}

	static ::Class_1_92E3E110E38400D6* Method_1_503CD42A0C349327(::System::String* a1)
	{
		return ((::Class_1_92E3E110E38400D6*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA772DEFE638720B_METHOD_1_503CD42A0C349327_OFFSET))(a1);
	}

	static ::System::Void Method_1_8583C5AC29198FC4(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA772DEFE638720B_METHOD_1_8583C5AC29198FC4_OFFSET))(a1);
	}

	static ::RPG::GameCore::FreeStyleTriggerGraphInfo* Method_1_B7F20700BA59989D(::System::String* a1, ::System::String* a2)
	{
		return ((::RPG::GameCore::FreeStyleTriggerGraphInfo*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA772DEFE638720B_METHOD_1_B7F20700BA59989D_OFFSET))(a1, a2);
	}

	static ::System::Void Method_1_8583C5AC29198FC4_1(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA772DEFE638720B_METHOD_1_8583C5AC29198FC4_1_OFFSET))(a1);
	}

	static ::Class_1_92E3E110E38400D6* Method_1_A018A84479F76FBD(::System::String* a1)
	{
		return ((::Class_1_92E3E110E38400D6*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA772DEFE638720B_METHOD_1_A018A84479F76FBD_OFFSET))(a1);
	}

	static ::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig* Method_1_A1E2B53079D1C108(::System::String* a1)
	{
		return ((::RPG::GameCore::FreeStyleTriggerGraphTemplateConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DA772DEFE638720B_METHOD_1_A1E2B53079D1C108_OFFSET))(a1);
	}
};
