#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityHipplenInteractionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7D4722E618314BDA_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C8CF470)
#define CLASS_1_7D4722E618314BDA_METHOD_1_26F91CAE3F919D48_OFFSET UNITYSDK_OFFSET(0x1C8CF4C0)
#define CLASS_1_7D4722E618314BDA_METHOD_1_3BA2868C5B425819_OFFSET UNITYSDK_OFFSET(0x1C8CF0D0)
#define CLASS_1_7D4722E618314BDA_METHOD_1_80DAA2B7205DE188_OFFSET UNITYSDK_OFFSET(0x1C8CEC50)
#define CLASS_1_7D4722E618314BDA_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C8CF2A0)
#define CLASS_1_7D4722E618314BDA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8CF330)
#define CLASS_1_7D4722E618314BDA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C8CEF00)
#define CLASS_1_7D4722E618314BDA_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C8CECD0)
#define CLASS_1_7D4722E618314BDA_METHOD_1_E14ADC03068DAC89_OFFSET UNITYSDK_OFFSET(0x1C8CEF60)
#define CLASS_1_7D4722E618314BDA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8CF260)
#define CLASS_1_7D4722E618314BDA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C8CF3D0)
#define CLASS_1_7D4722E618314BDA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8CF830)

inline static constexpr unsigned int Class_1_7D4722E618314BDA_TypeDefinitionIndex = 11633;

class Class_1_7D4722E618314BDA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D4722E618314BDA_TypeDefinitionIndex)->GetStaticField(0x54B90);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D4722E618314BDA_TypeDefinitionIndex)->GetStaticField(0x54B98);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D4722E618314BDA_TypeDefinitionIndex)->GetStaticField(0x54BA0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D4722E618314BDA_TypeDefinitionIndex)->GetStaticField(0x11600);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7D4722E618314BDA_TypeDefinitionIndex)->GetStaticField(0x11601);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*>* Method_1_80DAA2B7205DE188()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_80DAA2B7205DE188_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*> Method_1_E14ADC03068DAC89()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_E14ADC03068DAC89_OFFSET))();
	}

	static ::RPG::GameCore::ActivityHipplenInteractionRow* Method_1_3BA2868C5B425819(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityHipplenInteractionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_3BA2868C5B425819_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_26F91CAE3F919D48(::RPG::GameCore::ActivityHipplenInteractionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenInteractionRow*))((::PBYTE)hIl2Cpp + CLASS_1_7D4722E618314BDA_METHOD_1_26F91CAE3F919D48_OFFSET))(a1);
	}
};
