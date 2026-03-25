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

#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16E2B5B0)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_1C51DF081BC1DAE6_OFFSET UNITYSDK_OFFSET(0x16E2ACA0)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16E2B3D0)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_5405B89C8DA03CC9_OFFSET UNITYSDK_OFFSET(0x16E2B180)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_5E672EDD4639AD62_OFFSET UNITYSDK_OFFSET(0x16E2B600)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16E2AD20)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16E2B470)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16E2AF70)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16E2B390)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_F24397CDAFC3F06B_OFFSET UNITYSDK_OFFSET(0x16E2AFD0)
#define CLASS_1_B8C1EDF41AFD08E6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16E2B510)
#define CLASS_1_B8C1EDF41AFD08E6__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E2B9B0)

inline static constexpr unsigned int Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex = 12358;

class Class_1_B8C1EDF41AFD08E6 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex)->GetStaticField(0x19A70);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex)->GetStaticField(0x19A78);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex)->GetStaticField(0x19A80);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex)->GetStaticField(0x7430);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8C1EDF41AFD08E6_TypeDefinitionIndex)->GetStaticField(0x7431);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*> Method_1_F24397CDAFC3F06B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_F24397CDAFC3F06B_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleSkillDisplayConfigRow* Method_1_5405B89C8DA03CC9(::System::UInt32 a1, ::RPG::GameCore::GridFightPreset a2)
	{
		return ((::RPG::GameCore::GridFightRoleSkillDisplayConfigRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightPreset))((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_5405B89C8DA03CC9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8C1EDF41AFD08E6_METHOD_1_30D1209326FA87FC_OFFSET))();
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
