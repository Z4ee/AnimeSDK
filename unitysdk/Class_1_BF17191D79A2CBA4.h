#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRoleGameRefConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BF17191D79A2CBA4_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16DFAFA0)
#define CLASS_1_BF17191D79A2CBA4_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16DFADC0)
#define CLASS_1_BF17191D79A2CBA4_METHOD_1_454B9E828A825204_OFFSET UNITYSDK_OFFSET(0x16DFAFF0)
#define CLASS_1_BF17191D79A2CBA4_METHOD_1_590826E2DED6E890_OFFSET UNITYSDK_OFFSET(0x16DFA6D0)
#define CLASS_1_BF17191D79A2CBA4_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16DFA750)
#define CLASS_1_BF17191D79A2CBA4_METHOD_1_A2CD7670C82641E6_OFFSET UNITYSDK_OFFSET(0x16DFABB0)
#define CLASS_1_BF17191D79A2CBA4_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16DFAE60)
#define CLASS_1_BF17191D79A2CBA4_METHOD_1_C0EEFFC9361DECE9_OFFSET UNITYSDK_OFFSET(0x16DFAA00)
#define CLASS_1_BF17191D79A2CBA4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16DFA9A0)
#define CLASS_1_BF17191D79A2CBA4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16DFAD80)
#define CLASS_1_BF17191D79A2CBA4_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16DFAF00)
#define CLASS_1_BF17191D79A2CBA4__CCTOR_OFFSET UNITYSDK_OFFSET(0x16DFB350)

inline static constexpr unsigned int Class_1_BF17191D79A2CBA4_TypeDefinitionIndex = 12384;

class Class_1_BF17191D79A2CBA4 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF17191D79A2CBA4_TypeDefinitionIndex)->GetStaticField(0x18180);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF17191D79A2CBA4_TypeDefinitionIndex)->GetStaticField(0x18188);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF17191D79A2CBA4_TypeDefinitionIndex)->GetStaticField(0x18190);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF17191D79A2CBA4_TypeDefinitionIndex)->GetStaticField(0x6DE0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF17191D79A2CBA4_TypeDefinitionIndex)->GetStaticField(0x6DE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*>* Method_1_590826E2DED6E890()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_590826E2DED6E890_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*> Method_1_C0EEFFC9361DECE9()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleGameRefConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_C0EEFFC9361DECE9_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleGameRefConfigRow* Method_1_A2CD7670C82641E6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightRoleGameRefConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_A2CD7670C82641E6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_454B9E828A825204(::RPG::GameCore::GridFightRoleGameRefConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRoleGameRefConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_BF17191D79A2CBA4_METHOD_1_454B9E828A825204_OFFSET))(a1);
	}
};
