#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class LoadingFuncConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CC08580)
#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_41DEBCD9DF008ECF_OFFSET UNITYSDK_OFFSET(0x1CC080B0)
#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_648072C7A5B0FD98_OFFSET UNITYSDK_OFFSET(0x1CC081E0)
#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC083B0)
#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_A7CC9F4D496453CD_OFFSET UNITYSDK_OFFSET(0x1CC07DA0)
#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC08440)
#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_C881B15F0FE120AA_OFFSET UNITYSDK_OFFSET(0x1CC085D0)
#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC08050)
#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC07E20)
#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC08370)
#define CLASS_1_32F84DD4BD3CDC81_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC084E0)
#define CLASS_1_32F84DD4BD3CDC81__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC088F0)

inline static constexpr unsigned int Class_1_32F84DD4BD3CDC81_TypeDefinitionIndex = 13879;

class Class_1_32F84DD4BD3CDC81 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32F84DD4BD3CDC81_TypeDefinitionIndex)->GetStaticField(0x2E5D0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32F84DD4BD3CDC81_TypeDefinitionIndex)->GetStaticField(0x2E5D8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_32F84DD4BD3CDC81_TypeDefinitionIndex)->GetStaticField(0x2E5E0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_32F84DD4BD3CDC81_TypeDefinitionIndex)->GetStaticField(0xCEB0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_32F84DD4BD3CDC81_TypeDefinitionIndex)->GetStaticField(0xCEB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*>* Method_1_A7CC9F4D496453CD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_A7CC9F4D496453CD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*> Method_1_41DEBCD9DF008ECF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::LoadingFuncConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_41DEBCD9DF008ECF_OFFSET))();
	}

	static ::RPG::GameCore::LoadingFuncConfigRow* Method_1_648072C7A5B0FD98(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::LoadingFuncConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_648072C7A5B0FD98_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C881B15F0FE120AA(::RPG::GameCore::LoadingFuncConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::LoadingFuncConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_32F84DD4BD3CDC81_METHOD_1_C881B15F0FE120AA_OFFSET))(a1);
	}
};
