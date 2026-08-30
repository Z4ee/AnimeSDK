#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyEventBgConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F2577961CD023D78_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C7A8020)
#define CLASS_1_F2577961CD023D78_METHOD_1_2C9582E0C3C29EA0_OFFSET UNITYSDK_OFFSET(0x1C7A8070)
#define CLASS_1_F2577961CD023D78_METHOD_1_86F5BFF52D9FD401_OFFSET UNITYSDK_OFFSET(0x1C7A8630)
#define CLASS_1_F2577961CD023D78_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C7A7E50)
#define CLASS_1_F2577961CD023D78_METHOD_1_AD2CB1058B2EB775_OFFSET UNITYSDK_OFFSET(0x1C7A84C0)
#define CLASS_1_F2577961CD023D78_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C7A7EE0)
#define CLASS_1_F2577961CD023D78_METHOD_1_B575D3BDC3D61604_OFFSET UNITYSDK_OFFSET(0x1C7A83E0)
#define CLASS_1_F2577961CD023D78_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C7A8460)
#define CLASS_1_F2577961CD023D78_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C7A7C20)
#define CLASS_1_F2577961CD023D78_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C7A7BE0)
#define CLASS_1_F2577961CD023D78_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C7A7F80)
#define CLASS_1_F2577961CD023D78__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7A87C0)

inline static constexpr unsigned int Class_1_F2577961CD023D78_TypeDefinitionIndex = 15180;

class Class_1_F2577961CD023D78 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2577961CD023D78_TypeDefinitionIndex)->GetStaticField(0x6670);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2577961CD023D78_TypeDefinitionIndex)->GetStaticField(0x6678);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2577961CD023D78_TypeDefinitionIndex)->GetStaticField(0x6680);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2577961CD023D78_TypeDefinitionIndex)->GetStaticField(0x1CF0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F2577961CD023D78_TypeDefinitionIndex)->GetStaticField(0x1CF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_2C9582E0C3C29EA0(::RPG::GameCore::TrainPartyEventBgConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyEventBgConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_2C9582E0C3C29EA0_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*>* Method_1_B575D3BDC3D61604()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_B575D3BDC3D61604_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*> Method_1_AD2CB1058B2EB775()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyEventBgConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_AD2CB1058B2EB775_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyEventBgConfigRow* Method_1_86F5BFF52D9FD401(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TrainPartyEventBgConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F2577961CD023D78_METHOD_1_86F5BFF52D9FD401_OFFSET))(a1);
	}
};
