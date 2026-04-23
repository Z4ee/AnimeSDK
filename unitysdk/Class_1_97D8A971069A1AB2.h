#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingSkillRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_97D8A971069A1AB2_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x19131800)
#define CLASS_1_97D8A971069A1AB2_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x19131620)
#define CLASS_1_97D8A971069A1AB2_METHOD_1_3720E3070A055053_OFFSET UNITYSDK_OFFSET(0x19131850)
#define CLASS_1_97D8A971069A1AB2_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19130FE0)
#define CLASS_1_97D8A971069A1AB2_METHOD_1_794FDFE203824E16_OFFSET UNITYSDK_OFFSET(0x19131290)
#define CLASS_1_97D8A971069A1AB2_METHOD_1_7F574810273776F4_OFFSET UNITYSDK_OFFSET(0x19131410)
#define CLASS_1_97D8A971069A1AB2_METHOD_1_ACDAC5FC291F2C04_OFFSET UNITYSDK_OFFSET(0x19130F60)
#define CLASS_1_97D8A971069A1AB2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x191316C0)
#define CLASS_1_97D8A971069A1AB2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19131230)
#define CLASS_1_97D8A971069A1AB2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x191315E0)
#define CLASS_1_97D8A971069A1AB2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19131760)
#define CLASS_1_97D8A971069A1AB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x19131B60)

inline static constexpr unsigned int Class_1_97D8A971069A1AB2_TypeDefinitionIndex = 10561;

class Class_1_97D8A971069A1AB2 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97D8A971069A1AB2_TypeDefinitionIndex)->GetStaticField(0x401D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSkillRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSkillRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97D8A971069A1AB2_TypeDefinitionIndex)->GetStaticField(0x401D8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_97D8A971069A1AB2_TypeDefinitionIndex)->GetStaticField(0x401E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_97D8A971069A1AB2_TypeDefinitionIndex)->GetStaticField(0xE6B0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_97D8A971069A1AB2_TypeDefinitionIndex)->GetStaticField(0xE6B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSkillRow*>* Method_1_ACDAC5FC291F2C04()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSkillRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_ACDAC5FC291F2C04_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSkillRow*> Method_1_794FDFE203824E16()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingSkillRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_794FDFE203824E16_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingSkillRow* Method_1_7F574810273776F4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingSkillRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_7F574810273776F4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_3720E3070A055053(::RPG::GameCore::ChenLingSkillRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingSkillRow*))((::PBYTE)hIl2Cpp + CLASS_1_97D8A971069A1AB2_METHOD_1_3720E3070A055053_OFFSET))(a1);
	}
};
