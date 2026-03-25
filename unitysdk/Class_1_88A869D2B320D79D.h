#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesSkillTreePhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_88A869D2B320D79D_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x16C4F410)
#define CLASS_1_88A869D2B320D79D_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C4F230)
#define CLASS_1_88A869D2B320D79D_METHOD_1_4219082E3F9A18B1_OFFSET UNITYSDK_OFFSET(0x16C4EBC0)
#define CLASS_1_88A869D2B320D79D_METHOD_1_4DB1C4FE503D5DEE_OFFSET UNITYSDK_OFFSET(0x16C4F460)
#define CLASS_1_88A869D2B320D79D_METHOD_1_5AEAD5BACD50B9B1_OFFSET UNITYSDK_OFFSET(0x16C4EEF0)
#define CLASS_1_88A869D2B320D79D_METHOD_1_66BFF10A62A2B1EA_OFFSET UNITYSDK_OFFSET(0x16C4F070)
#define CLASS_1_88A869D2B320D79D_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C4EC40)
#define CLASS_1_88A869D2B320D79D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C4F2D0)
#define CLASS_1_88A869D2B320D79D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C4EE90)
#define CLASS_1_88A869D2B320D79D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C4F1F0)
#define CLASS_1_88A869D2B320D79D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C4F370)
#define CLASS_1_88A869D2B320D79D__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C4F770)

inline static constexpr unsigned int Class_1_88A869D2B320D79D_TypeDefinitionIndex = 11134;

class Class_1_88A869D2B320D79D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88A869D2B320D79D_TypeDefinitionIndex)->GetStaticField(0x2BCB0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88A869D2B320D79D_TypeDefinitionIndex)->GetStaticField(0x2BCB8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88A869D2B320D79D_TypeDefinitionIndex)->GetStaticField(0x2BCC0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88A869D2B320D79D_TypeDefinitionIndex)->GetStaticField(0xE930);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88A869D2B320D79D_TypeDefinitionIndex)->GetStaticField(0xE931);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*>* Method_1_4219082E3F9A18B1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_4219082E3F9A18B1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*> Method_1_5AEAD5BACD50B9B1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesSkillTreePhaseRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_5AEAD5BACD50B9B1_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesSkillTreePhaseRow* Method_1_66BFF10A62A2B1EA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesSkillTreePhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_66BFF10A62A2B1EA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_4DB1C4FE503D5DEE(::RPG::GameCore::PlanetFesSkillTreePhaseRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesSkillTreePhaseRow*))((::PBYTE)hIl2Cpp + CLASS_1_88A869D2B320D79D_METHOD_1_4DB1C4FE503D5DEE_OFFSET))(a1);
	}
};
