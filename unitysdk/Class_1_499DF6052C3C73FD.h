#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StoryPropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_499DF6052C3C73FD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CD1C400)
#define CLASS_1_499DF6052C3C73FD_METHOD_1_32DB1EE78108FDAA_OFFSET UNITYSDK_OFFSET(0x1CD1C9C0)
#define CLASS_1_499DF6052C3C73FD_METHOD_1_66A4661F3A909ABA_OFFSET UNITYSDK_OFFSET(0x1CD1C850)
#define CLASS_1_499DF6052C3C73FD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CD1C230)
#define CLASS_1_499DF6052C3C73FD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CD1C2C0)
#define CLASS_1_499DF6052C3C73FD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CD1C7F0)
#define CLASS_1_499DF6052C3C73FD_METHOD_1_D073A8E64C723329_OFFSET UNITYSDK_OFFSET(0x1CD1C770)
#define CLASS_1_499DF6052C3C73FD_METHOD_1_D2BFE2D6DD61C5CE_OFFSET UNITYSDK_OFFSET(0x1CD1C450)
#define CLASS_1_499DF6052C3C73FD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CD1C000)
#define CLASS_1_499DF6052C3C73FD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CD1BFC0)
#define CLASS_1_499DF6052C3C73FD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CD1C360)
#define CLASS_1_499DF6052C3C73FD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD1CB30)

inline static constexpr unsigned int Class_1_499DF6052C3C73FD_TypeDefinitionIndex = 15015;

class Class_1_499DF6052C3C73FD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_499DF6052C3C73FD_TypeDefinitionIndex)->GetStaticField(0x445B0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_499DF6052C3C73FD_TypeDefinitionIndex)->GetStaticField(0x445B8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_499DF6052C3C73FD_TypeDefinitionIndex)->GetStaticField(0x445C0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_499DF6052C3C73FD_TypeDefinitionIndex)->GetStaticField(0x10240);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_499DF6052C3C73FD_TypeDefinitionIndex)->GetStaticField(0x10241);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D2BFE2D6DD61C5CE(::RPG::GameCore::StoryPropRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StoryPropRow*))((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_D2BFE2D6DD61C5CE_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*>* Method_1_D073A8E64C723329()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_D073A8E64C723329_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*> Method_1_66A4661F3A909ABA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryPropRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_66A4661F3A909ABA_OFFSET))();
	}

	static ::RPG::GameCore::StoryPropRow* Method_1_32DB1EE78108FDAA(::System::String* a1)
	{
		return ((::RPG::GameCore::StoryPropRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_499DF6052C3C73FD_METHOD_1_32DB1EE78108FDAA_OFFSET))(a1);
	}
};
