#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraTalkConditionType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraGalleryTalkRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5D7A4E69C3172206_METHOD_1_0E8A91E0D90E1D42_OFFSET UNITYSDK_OFFSET(0x16EF39C0)
#define CLASS_1_5D7A4E69C3172206_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x16EF3F30)
#define CLASS_1_5D7A4E69C3172206_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16EF3D50)
#define CLASS_1_5D7A4E69C3172206_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16EF3710)
#define CLASS_1_5D7A4E69C3172206_METHOD_1_8E792C20A75BE420_OFFSET UNITYSDK_OFFSET(0x16EF3690)
#define CLASS_1_5D7A4E69C3172206_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16EF3DF0)
#define CLASS_1_5D7A4E69C3172206_METHOD_1_B61E068876591E7D_OFFSET UNITYSDK_OFFSET(0x16EF3F80)
#define CLASS_1_5D7A4E69C3172206_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16EF3960)
#define CLASS_1_5D7A4E69C3172206_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16EF3D10)
#define CLASS_1_5D7A4E69C3172206_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16EF3E90)
#define CLASS_1_5D7A4E69C3172206_METHOD_1_F8B86B12A321FEAA_OFFSET UNITYSDK_OFFSET(0x16EF3B40)
#define CLASS_1_5D7A4E69C3172206__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EF4290)

inline static constexpr unsigned int Class_1_5D7A4E69C3172206_TypeDefinitionIndex = 11904;

class Class_1_5D7A4E69C3172206 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D7A4E69C3172206_TypeDefinitionIndex)->GetStaticField(0x2D860);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D7A4E69C3172206_TypeDefinitionIndex)->GetStaticField(0x2D868);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D7A4E69C3172206_TypeDefinitionIndex)->GetStaticField(0x2D870);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D7A4E69C3172206_TypeDefinitionIndex)->GetStaticField(0xF2A0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D7A4E69C3172206_TypeDefinitionIndex)->GetStaticField(0xF2A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*>* Method_1_8E792C20A75BE420()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_8E792C20A75BE420_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*> Method_1_0E8A91E0D90E1D42()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraGalleryTalkRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_0E8A91E0D90E1D42_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraGalleryTalkRow* Method_1_F8B86B12A321FEAA(::RPG::GameCore::ChimeraTalkConditionType a1)
	{
		return ((::RPG::GameCore::ChimeraGalleryTalkRow*(*)(::RPG::GameCore::ChimeraTalkConditionType))((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_F8B86B12A321FEAA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_B61E068876591E7D(::RPG::GameCore::ChimeraGalleryTalkRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraGalleryTalkRow*))((::PBYTE)hIl2Cpp + CLASS_1_5D7A4E69C3172206_METHOD_1_B61E068876591E7D_OFFSET))(a1);
	}
};
