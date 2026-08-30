#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarEnhancedHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2F761205FCE62C25_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D076570)
#define CLASS_1_2F761205FCE62C25_METHOD_1_7343BD32A4D576A0_OFFSET UNITYSDK_OFFSET(0x1D076190)
#define CLASS_1_2F761205FCE62C25_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D0763A0)
#define CLASS_1_2F761205FCE62C25_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D076430)
#define CLASS_1_2F761205FCE62C25_METHOD_1_B9CA85561C12655D_OFFSET UNITYSDK_OFFSET(0x1D0765C0)
#define CLASS_1_2F761205FCE62C25_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D075FC0)
#define CLASS_1_2F761205FCE62C25_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D075D90)
#define CLASS_1_2F761205FCE62C25_METHOD_1_E1E4A19E8C1F9C5E_OFFSET UNITYSDK_OFFSET(0x1D076020)
#define CLASS_1_2F761205FCE62C25_METHOD_1_EB09949004E78549_OFFSET UNITYSDK_OFFSET(0x1D075D10)
#define CLASS_1_2F761205FCE62C25_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D076360)
#define CLASS_1_2F761205FCE62C25_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D0764D0)
#define CLASS_1_2F761205FCE62C25__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D076960)

inline static constexpr unsigned int Class_1_2F761205FCE62C25_TypeDefinitionIndex = 12696;

class Class_1_2F761205FCE62C25 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F761205FCE62C25_TypeDefinitionIndex)->GetStaticField(0x1E5E0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F761205FCE62C25_TypeDefinitionIndex)->GetStaticField(0x1E5E8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F761205FCE62C25_TypeDefinitionIndex)->GetStaticField(0x1E5F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F761205FCE62C25_TypeDefinitionIndex)->GetStaticField(0xA230);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2F761205FCE62C25_TypeDefinitionIndex)->GetStaticField(0xA231);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>* Method_1_EB09949004E78549()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_EB09949004E78549_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*> Method_1_E1E4A19E8C1F9C5E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedHintRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_E1E4A19E8C1F9C5E_OFFSET))();
	}

	static ::RPG::GameCore::AvatarEnhancedHintRow* Method_1_7343BD32A4D576A0(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::AvatarEnhancedHintRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_7343BD32A4D576A0_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B9CA85561C12655D(::RPG::GameCore::AvatarEnhancedHintRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedHintRow*))((::PBYTE)hIl2Cpp + CLASS_1_2F761205FCE62C25_METHOD_1_B9CA85561C12655D_OFFSET))(a1);
	}
};
