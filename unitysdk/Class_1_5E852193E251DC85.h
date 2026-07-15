#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightSkillType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSkillDescModConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5E852193E251DC85_METHOD_1_05B2253BD45C3A5F_OFFSET UNITYSDK_OFFSET(0x1BD47DE0)
#define CLASS_1_5E852193E251DC85_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1BD47D90)
#define CLASS_1_5E852193E251DC85_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BD47BC0)
#define CLASS_1_5E852193E251DC85_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BD47C50)
#define CLASS_1_5E852193E251DC85_METHOD_1_AFB96401A98C7D0E_OFFSET UNITYSDK_OFFSET(0x1BD47830)
#define CLASS_1_5E852193E251DC85_METHOD_1_BE7AD813153CAB89_OFFSET UNITYSDK_OFFSET(0x1BD47520)
#define CLASS_1_5E852193E251DC85_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BD477D0)
#define CLASS_1_5E852193E251DC85_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BD475A0)
#define CLASS_1_5E852193E251DC85_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BD47B80)
#define CLASS_1_5E852193E251DC85_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BD47CF0)
#define CLASS_1_5E852193E251DC85_METHOD_1_F7E7F8B8569F8223_OFFSET UNITYSDK_OFFSET(0x1BD479A0)
#define CLASS_1_5E852193E251DC85__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD48180)

inline static constexpr unsigned int Class_1_5E852193E251DC85_TypeDefinitionIndex = 13059;

class Class_1_5E852193E251DC85 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E852193E251DC85_TypeDefinitionIndex)->GetStaticField(0x37FB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E852193E251DC85_TypeDefinitionIndex)->GetStaticField(0x37FB8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E852193E251DC85_TypeDefinitionIndex)->GetStaticField(0x37FC0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E852193E251DC85_TypeDefinitionIndex)->GetStaticField(0x9560);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5E852193E251DC85_TypeDefinitionIndex)->GetStaticField(0x9561);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*>* Method_1_BE7AD813153CAB89()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_BE7AD813153CAB89_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*> Method_1_AFB96401A98C7D0E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillDescModConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_AFB96401A98C7D0E_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSkillDescModConfigRow* Method_1_F7E7F8B8569F8223(::System::UInt32 a1, ::RPG::GameCore::GridFightSkillType a2)
	{
		return ((::RPG::GameCore::GridFightSkillDescModConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightSkillType))((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_F7E7F8B8569F8223_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_05B2253BD45C3A5F(::RPG::GameCore::GridFightSkillDescModConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSkillDescModConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_5E852193E251DC85_METHOD_1_05B2253BD45C3A5F_OFFSET))(a1);
	}
};
