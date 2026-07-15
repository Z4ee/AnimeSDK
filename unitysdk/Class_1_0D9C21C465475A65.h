#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AlleyConditionType.h"
#include "unitysdk/System/Object.h"

class Class_1_0D9C21C465475A65_Class_3_BE27BF221D2C7791;
class Class_1_4F30521532511E50;
namespace RPG::GameCore { class AlleyConditionExtendParam; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0D9C21C465475A65_METHOD_1_1B0715019949BFA3_OFFSET UNITYSDK_OFFSET(0x14B0EEC0)
#define CLASS_1_0D9C21C465475A65_METHOD_1_24ED6289627D7BE7_OFFSET UNITYSDK_OFFSET(0x14B0EF90)
#define CLASS_1_0D9C21C465475A65_METHOD_1_510B7E162CEE3E6C_OFFSET UNITYSDK_OFFSET(0x14B0EE00)
#define CLASS_1_0D9C21C465475A65_METHOD_1_7F44CDFE2001210D_OFFSET UNITYSDK_OFFSET(0x14B0ECA0)
#define CLASS_1_0D9C21C465475A65_METHOD_1_97D83E4CB3B11935_OFFSET UNITYSDK_OFFSET(0x14B0E880)
#define CLASS_1_0D9C21C465475A65_METHOD_1_BE0A744D771D75F8_OFFSET UNITYSDK_OFFSET(0x14B0EBE0)
#define CLASS_1_0D9C21C465475A65_METHOD_1_FF2126F609DFC1B5_OFFSET UNITYSDK_OFFSET(0x14B0ED30)

inline static constexpr unsigned int Class_1_0D9C21C465475A65_TypeDefinitionIndex = 59517;

class Class_1_0D9C21C465475A65 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AlleyConditionType, ::Class_1_0D9C21C465475A65_Class_3_BE27BF221D2C7791*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::AlleyConditionType, ::Class_1_0D9C21C465475A65_Class_3_BE27BF221D2C7791*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0D9C21C465475A65_TypeDefinitionIndex)->GetStaticField(0x5E650);
	}

	static ::System::Void Method_1_97D83E4CB3B11935()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0D9C21C465475A65_METHOD_1_97D83E4CB3B11935_OFFSET))();
	}

	static ::System::Boolean Method_1_BE0A744D771D75F8(::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::RPG::GameCore::AlleyConditionExtendParam*>*))((::PBYTE)hIl2Cpp + CLASS_1_0D9C21C465475A65_METHOD_1_BE0A744D771D75F8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_FF2126F609DFC1B5(::Il2CppArray<::Class_1_4F30521532511E50*>* a1)
	{
		return ((::System::Boolean(*)(::Il2CppArray<::Class_1_4F30521532511E50*>*))((::PBYTE)hIl2Cpp + CLASS_1_0D9C21C465475A65_METHOD_1_FF2126F609DFC1B5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_7F44CDFE2001210D(::RPG::GameCore::AlleyConditionType a1, ::System::Object* a2)
	{
		return ((::System::Boolean(*)(::RPG::GameCore::AlleyConditionType, ::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0D9C21C465475A65_METHOD_1_7F44CDFE2001210D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_510B7E162CEE3E6C(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0D9C21C465475A65_METHOD_1_510B7E162CEE3E6C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1B0715019949BFA3(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0D9C21C465475A65_METHOD_1_1B0715019949BFA3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_24ED6289627D7BE7(::System::Object* a1)
	{
		return ((::System::Boolean(*)(::System::Object*))((::PBYTE)hIl2Cpp + CLASS_1_0D9C21C465475A65_METHOD_1_24ED6289627D7BE7_OFFSET))(a1);
	}
};
