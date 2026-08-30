#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRoleSkillDisplayConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C8DBBB0)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_1C51DF081BC1DAE6_OFFSET UNITYSDK_OFFSET(0x1C8DB340)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_1EEEFB35AB40AB0F_OFFSET UNITYSDK_OFFSET(0x1C8DB650)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_2672D3F0C56D1300_OFFSET UNITYSDK_OFFSET(0x1C8DB7C0)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_5E672EDD4639AD62_OFFSET UNITYSDK_OFFSET(0x1C8DBC00)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C8DB9E0)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8DBA70)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C8DB5F0)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C8DB3C0)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8DB9A0)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C8DBB10)
#define CLASS_1_B8C1EDF41AFD08E6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8DBFA0)

inline static constexpr unsigned int Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex = 13417;

class Class_1_B8C1EDF41AFD08E6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex)->GetStaticField(0x556E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex)->GetStaticField(0x556E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex)->GetStaticField(0x556F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex)->GetStaticField(0x118C0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex)->GetStaticField(0x118C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>* Method_1_1C51DF081BC1DAE6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_1C51DF081BC1DAE6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*> Method_1_1EEEFB35AB40AB0F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_1EEEFB35AB40AB0F_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow* Method_1_2672D3F0C56D1300(::System::UInt32 a1, ::RPG::GameCore::GridFightPreset a2)
	{
		return ((::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_2672D3F0C56D1300_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5E672EDD4639AD62(::RPG::GameCore::GridFightRoleSkillDisplayConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_5E672EDD4639AD62_OFFSET))(a1);
	}
};
