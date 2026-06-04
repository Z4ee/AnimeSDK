#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StoryTextConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19984620)
#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_45CAC2CC87828159_OFFSET UNITYSDK_OFFSET(0x19983E00)
#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_487E8731D6AC1DD4_OFFSET UNITYSDK_OFFSET(0x19984280)
#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19984450)
#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_92A8DAD74E10340E_OFFSET UNITYSDK_OFFSET(0x19984110)
#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_AAE3A4C9DCA6F2B7_OFFSET UNITYSDK_OFFSET(0x19984670)
#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x199844E0)
#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x199840B0)
#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19983E80)
#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19984410)
#define CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19984580)
#define CLASS_1_C2F44D0DA4ED3B2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x199849E0)

inline static constexpr unsigned int Class_1_C2F44D0DA4ED3B2D_TypeDefinitionIndex = 12082;

class Class_1_C2F44D0DA4ED3B2D : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2F44D0DA4ED3B2D_TypeDefinitionIndex)->GetStaticField(0x47AC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2F44D0DA4ED3B2D_TypeDefinitionIndex)->GetStaticField(0x47AC8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2F44D0DA4ED3B2D_TypeDefinitionIndex)->GetStaticField(0x47AD0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2F44D0DA4ED3B2D_TypeDefinitionIndex)->GetStaticField(0xD1B0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C2F44D0DA4ED3B2D_TypeDefinitionIndex)->GetStaticField(0xD1B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>* Method_1_45CAC2CC87828159()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_45CAC2CC87828159_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*> Method_1_92A8DAD74E10340E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryTextConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_92A8DAD74E10340E_OFFSET))();
	}

	static ::RPG::GameCore::StoryTextConfigRow* Method_1_487E8731D6AC1DD4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::StoryTextConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_487E8731D6AC1DD4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_AAE3A4C9DCA6F2B7(::RPG::GameCore::StoryTextConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StoryTextConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C2F44D0DA4ED3B2D_METHOD_1_AAE3A4C9DCA6F2B7_OFFSET))(a1);
	}
};
