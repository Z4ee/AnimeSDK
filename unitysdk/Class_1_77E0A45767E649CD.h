#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournUseBuffTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_77E0A45767E649CD_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1771B690)
#define CLASS_1_77E0A45767E649CD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1771B4B0)
#define CLASS_1_77E0A45767E649CD_METHOD_1_6394076EBAB5BDE9_OFFSET UNITYSDK_OFFSET(0x1771AE00)
#define CLASS_1_77E0A45767E649CD_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1771AE80)
#define CLASS_1_77E0A45767E649CD_METHOD_1_AC190712A273E5EE_OFFSET UNITYSDK_OFFSET(0x1771B6E0)
#define CLASS_1_77E0A45767E649CD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1771B550)
#define CLASS_1_77E0A45767E649CD_METHOD_1_B457EDA1B05502FA_OFFSET UNITYSDK_OFFSET(0x1771B130)
#define CLASS_1_77E0A45767E649CD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1771B0D0)
#define CLASS_1_77E0A45767E649CD_METHOD_1_E7C17E12E22279E9_OFFSET UNITYSDK_OFFSET(0x1771B2E0)
#define CLASS_1_77E0A45767E649CD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1771B470)
#define CLASS_1_77E0A45767E649CD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1771B5F0)
#define CLASS_1_77E0A45767E649CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1771B9F0)

inline static constexpr unsigned int Class_1_77E0A45767E649CD_TypeDefinitionIndex = 13757;

class Class_1_77E0A45767E649CD : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E0A45767E649CD_TypeDefinitionIndex)->GetStaticField(0x1FFF0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E0A45767E649CD_TypeDefinitionIndex)->GetStaticField(0x1FFF8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E0A45767E649CD_TypeDefinitionIndex)->GetStaticField(0x20000);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E0A45767E649CD_TypeDefinitionIndex)->GetStaticField(0x8670);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_77E0A45767E649CD_TypeDefinitionIndex)->GetStaticField(0x8671);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*>* Method_1_6394076EBAB5BDE9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_6394076EBAB5BDE9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*> Method_1_B457EDA1B05502FA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournUseBuffTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_B457EDA1B05502FA_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournUseBuffTypeRow* Method_1_E7C17E12E22279E9(::RPG::GameCore::RogueTournMode a1)
	{
		return ((::RPG::GameCore::RogueTournUseBuffTypeRow*(*)(::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_E7C17E12E22279E9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_AC190712A273E5EE(::RPG::GameCore::RogueTournUseBuffTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournUseBuffTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_77E0A45767E649CD_METHOD_1_AC190712A273E5EE_OFFSET))(a1);
	}
};
