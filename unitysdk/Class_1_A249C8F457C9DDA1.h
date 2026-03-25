#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillComeFrom.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSkillSubIconConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A249C8F457C9DDA1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x179A5010)
#define CLASS_1_A249C8F457C9DDA1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179A4E30)
#define CLASS_1_A249C8F457C9DDA1_METHOD_1_4BD26496AD6913BD_OFFSET UNITYSDK_OFFSET(0x179A4700)
#define CLASS_1_A249C8F457C9DDA1_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179A4780)
#define CLASS_1_A249C8F457C9DDA1_METHOD_1_7CF805BA083620EE_OFFSET UNITYSDK_OFFSET(0x179A4A30)
#define CLASS_1_A249C8F457C9DDA1_METHOD_1_7D8A328A378F1CBA_OFFSET UNITYSDK_OFFSET(0x179A4BE0)
#define CLASS_1_A249C8F457C9DDA1_METHOD_1_A5007CC78C197CC3_OFFSET UNITYSDK_OFFSET(0x179A5060)
#define CLASS_1_A249C8F457C9DDA1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x179A4ED0)
#define CLASS_1_A249C8F457C9DDA1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179A49D0)
#define CLASS_1_A249C8F457C9DDA1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x179A4DF0)
#define CLASS_1_A249C8F457C9DDA1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x179A4F70)
#define CLASS_1_A249C8F457C9DDA1__CCTOR_OFFSET UNITYSDK_OFFSET(0x179A5410)

inline static constexpr unsigned int Class_1_A249C8F457C9DDA1_TypeDefinitionIndex = 12375;

class Class_1_A249C8F457C9DDA1 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A249C8F457C9DDA1_TypeDefinitionIndex)->GetStaticField(0x25D10);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A249C8F457C9DDA1_TypeDefinitionIndex)->GetStaticField(0x25D18);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A249C8F457C9DDA1_TypeDefinitionIndex)->GetStaticField(0x25D20);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A249C8F457C9DDA1_TypeDefinitionIndex)->GetStaticField(0xC3D0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A249C8F457C9DDA1_TypeDefinitionIndex)->GetStaticField(0xC3D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*>* Method_1_4BD26496AD6913BD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_4BD26496AD6913BD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*> Method_1_7CF805BA083620EE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSkillSubIconConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_7CF805BA083620EE_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSkillSubIconConfigRow* Method_1_7D8A328A378F1CBA(::RPG::GameCore::GridFightRoleSkillComeFrom a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightSkillSubIconConfigRow*(*)(::RPG::GameCore::GridFightRoleSkillComeFrom, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_7D8A328A378F1CBA_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A5007CC78C197CC3(::RPG::GameCore::GridFightSkillSubIconConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSkillSubIconConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A249C8F457C9DDA1_METHOD_1_A5007CC78C197CC3_OFFSET))(a1);
	}
};
