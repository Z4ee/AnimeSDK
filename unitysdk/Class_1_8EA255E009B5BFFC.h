#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarLinkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8EA255E009B5BFFC_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16D8E9F0)
#define CLASS_1_8EA255E009B5BFFC_METHOD_1_1E7D3681D254BA76_OFFSET UNITYSDK_OFFSET(0x16D8E5C0)
#define CLASS_1_8EA255E009B5BFFC_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16D8E810)
#define CLASS_1_8EA255E009B5BFFC_METHOD_1_4242CB66D67B8E86_OFFSET UNITYSDK_OFFSET(0x16D8E0E0)
#define CLASS_1_8EA255E009B5BFFC_METHOD_1_48714F4A2F16236B_OFFSET UNITYSDK_OFFSET(0x16D8E410)
#define CLASS_1_8EA255E009B5BFFC_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16D8E160)
#define CLASS_1_8EA255E009B5BFFC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16D8E8B0)
#define CLASS_1_8EA255E009B5BFFC_METHOD_1_C31A9D008366DABA_OFFSET UNITYSDK_OFFSET(0x16D8EA40)
#define CLASS_1_8EA255E009B5BFFC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16D8E3B0)
#define CLASS_1_8EA255E009B5BFFC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16D8E7D0)
#define CLASS_1_8EA255E009B5BFFC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16D8E950)
#define CLASS_1_8EA255E009B5BFFC__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D8EDF0)

inline static constexpr unsigned int Class_1_8EA255E009B5BFFC_TypeDefinitionIndex = 11684;

class Class_1_8EA255E009B5BFFC : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EA255E009B5BFFC_TypeDefinitionIndex)->GetStaticField(0x14DB0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EA255E009B5BFFC_TypeDefinitionIndex)->GetStaticField(0x14DB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EA255E009B5BFFC_TypeDefinitionIndex)->GetStaticField(0x14DC0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EA255E009B5BFFC_TypeDefinitionIndex)->GetStaticField(0x6200);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8EA255E009B5BFFC_TypeDefinitionIndex)->GetStaticField(0x6201);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*>* Method_1_4242CB66D67B8E86()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_4242CB66D67B8E86_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*> Method_1_48714F4A2F16236B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarLinkRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_48714F4A2F16236B_OFFSET))();
	}

	static ::RPG::GameCore::AvatarLinkRow* Method_1_1E7D3681D254BA76(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::AvatarLinkRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_1E7D3681D254BA76_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_C31A9D008366DABA(::RPG::GameCore::AvatarLinkRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarLinkRow*))((::PBYTE)hIl2Cpp + CLASS_1_8EA255E009B5BFFC_METHOD_1_C31A9D008366DABA_OFFSET))(a1);
	}
};
