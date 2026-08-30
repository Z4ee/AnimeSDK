#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GMAccountConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_70CCDDE7C80C0246_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CF301C0)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_156E7831AE059357_OFFSET UNITYSDK_OFFSET(0x1CF2FE20)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_3D0CC1D327AB8C4F_OFFSET UNITYSDK_OFFSET(0x1CF2FCB0)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CF2FFF0)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CF30080)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_C15B729718078BA6_OFFSET UNITYSDK_OFFSET(0x1CF2F9A0)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CF2FC50)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CF2FA20)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CF2FFB0)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CF30120)
#define CLASS_1_70CCDDE7C80C0246_METHOD_1_FCE2F93F538A3212_OFFSET UNITYSDK_OFFSET(0x1CF30210)
#define CLASS_1_70CCDDE7C80C0246__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF30580)

inline static constexpr unsigned int Class_1_70CCDDE7C80C0246_TypeDefinitionIndex = 13233;

class Class_1_70CCDDE7C80C0246 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70CCDDE7C80C0246_TypeDefinitionIndex)->GetStaticField(0x5E170);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70CCDDE7C80C0246_TypeDefinitionIndex)->GetStaticField(0x5E178);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_70CCDDE7C80C0246_TypeDefinitionIndex)->GetStaticField(0x5E180);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_70CCDDE7C80C0246_TypeDefinitionIndex)->GetStaticField(0x12F80);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_70CCDDE7C80C0246_TypeDefinitionIndex)->GetStaticField(0x12F81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>* Method_1_C15B729718078BA6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_C15B729718078BA6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*> Method_1_3D0CC1D327AB8C4F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GMAccountConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_3D0CC1D327AB8C4F_OFFSET))();
	}

	static ::RPG::GameCore::GMAccountConfigRow* Method_1_156E7831AE059357(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GMAccountConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_156E7831AE059357_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FCE2F93F538A3212(::RPG::GameCore::GMAccountConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GMAccountConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_70CCDDE7C80C0246_METHOD_1_FCE2F93F538A3212_OFFSET))(a1);
	}
};
