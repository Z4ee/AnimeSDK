#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityModulePunkLordConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_27A50A3C14769407_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CA8ECD0)
#define CLASS_1_27A50A3C14769407_METHOD_1_3108FD10D8187187_OFFSET UNITYSDK_OFFSET(0x1CA8ED20)
#define CLASS_1_27A50A3C14769407_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CA8EB00)
#define CLASS_1_27A50A3C14769407_METHOD_1_8E81613E930D52FC_OFFSET UNITYSDK_OFFSET(0x1CA8E7C0)
#define CLASS_1_27A50A3C14769407_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CA8EB90)
#define CLASS_1_27A50A3C14769407_METHOD_1_B663D285E611B084_OFFSET UNITYSDK_OFFSET(0x1CA8E930)
#define CLASS_1_27A50A3C14769407_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CA8E760)
#define CLASS_1_27A50A3C14769407_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CA8E530)
#define CLASS_1_27A50A3C14769407_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CA8EAC0)
#define CLASS_1_27A50A3C14769407_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CA8EC30)
#define CLASS_1_27A50A3C14769407_METHOD_1_F8F6A40DB6D1DD2F_OFFSET UNITYSDK_OFFSET(0x1CA8E4B0)
#define CLASS_1_27A50A3C14769407__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA8F090)

inline static constexpr unsigned int Class_1_27A50A3C14769407_TypeDefinitionIndex = 12207;

class Class_1_27A50A3C14769407 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27A50A3C14769407_TypeDefinitionIndex)->GetStaticField(0x21A70);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27A50A3C14769407_TypeDefinitionIndex)->GetStaticField(0x21A78);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27A50A3C14769407_TypeDefinitionIndex)->GetStaticField(0x21A80);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27A50A3C14769407_TypeDefinitionIndex)->GetStaticField(0xACB0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27A50A3C14769407_TypeDefinitionIndex)->GetStaticField(0xACB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*>* Method_1_F8F6A40DB6D1DD2F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_F8F6A40DB6D1DD2F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*> Method_1_8E81613E930D52FC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityModulePunkLordConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_8E81613E930D52FC_OFFSET))();
	}

	static ::RPG::GameCore::ActivityModulePunkLordConfigRow* Method_1_B663D285E611B084(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityModulePunkLordConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_B663D285E611B084_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_3108FD10D8187187(::RPG::GameCore::ActivityModulePunkLordConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityModulePunkLordConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_27A50A3C14769407_METHOD_1_3108FD10D8187187_OFFSET))(a1);
	}
};
