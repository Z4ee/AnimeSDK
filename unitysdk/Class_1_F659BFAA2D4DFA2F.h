#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSeasonItemConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1799C200)
#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_20D24EFD421E689F_OFFSET UNITYSDK_OFFSET(0x1799B8F0)
#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1799C020)
#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_40E990081DC656E1_OFFSET UNITYSDK_OFFSET(0x1799BDD0)
#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_526979F83CB709E4_OFFSET UNITYSDK_OFFSET(0x1799BC20)
#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1799B970)
#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1799C0C0)
#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1799BBC0)
#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1799BFE0)
#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_F2D4AFB30B519E45_OFFSET UNITYSDK_OFFSET(0x1799C250)
#define CLASS_1_F659BFAA2D4DFA2F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1799C160)
#define CLASS_1_F659BFAA2D4DFA2F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1799C600)

inline static constexpr unsigned int Class_1_F659BFAA2D4DFA2F_TypeDefinitionIndex = 12305;

class Class_1_F659BFAA2D4DFA2F : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F659BFAA2D4DFA2F_TypeDefinitionIndex)->GetStaticField(0x259D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F659BFAA2D4DFA2F_TypeDefinitionIndex)->GetStaticField(0x259D8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F659BFAA2D4DFA2F_TypeDefinitionIndex)->GetStaticField(0x259E0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F659BFAA2D4DFA2F_TypeDefinitionIndex)->GetStaticField(0xC240);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F659BFAA2D4DFA2F_TypeDefinitionIndex)->GetStaticField(0xC241);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*>* Method_1_20D24EFD421E689F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_20D24EFD421E689F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*> Method_1_526979F83CB709E4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonItemConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_526979F83CB709E4_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSeasonItemConfigRow* Method_1_40E990081DC656E1(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightSeasonItemConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_40E990081DC656E1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2D4AFB30B519E45(::RPG::GameCore::GridFightSeasonItemConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonItemConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_F659BFAA2D4DFA2F_METHOD_1_F2D4AFB30B519E45_OFFSET))(a1);
	}
};
