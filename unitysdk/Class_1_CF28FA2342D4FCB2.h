#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDialogueOptionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1B481B30)
#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_4FA355C97061F3BD_OFFSET UNITYSDK_OFFSET(0x1B4817D0)
#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_5B42BEA785AFF94F_OFFSET UNITYSDK_OFFSET(0x1B481B80)
#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_69683243FCB97E8A_OFFSET UNITYSDK_OFFSET(0x1B481350)
#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_7F3E0836BC1E4133_OFFSET UNITYSDK_OFFSET(0x1B481660)
#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B481960)
#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B4819F0)
#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B481600)
#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B4813D0)
#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B481920)
#define CLASS_1_CF28FA2342D4FCB2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B481A90)
#define CLASS_1_CF28FA2342D4FCB2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B481EA0)

inline static constexpr unsigned int Class_1_CF28FA2342D4FCB2_TypeDefinitionIndex = 14234;

class Class_1_CF28FA2342D4FCB2 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF28FA2342D4FCB2_TypeDefinitionIndex)->GetStaticField(0x401A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF28FA2342D4FCB2_TypeDefinitionIndex)->GetStaticField(0x401A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF28FA2342D4FCB2_TypeDefinitionIndex)->GetStaticField(0x401B0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF28FA2342D4FCB2_TypeDefinitionIndex)->GetStaticField(0xABD0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF28FA2342D4FCB2_TypeDefinitionIndex)->GetStaticField(0xABD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionRow*>* Method_1_69683243FCB97E8A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_69683243FCB97E8A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionRow*> Method_1_7F3E0836BC1E4133()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDialogueOptionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_7F3E0836BC1E4133_OFFSET))();
	}

	static ::RPG::GameCore::RogueDialogueOptionRow* Method_1_4FA355C97061F3BD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDialogueOptionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_4FA355C97061F3BD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_5B42BEA785AFF94F(::RPG::GameCore::RogueDialogueOptionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDialogueOptionRow*))((::PBYTE)hIl2Cpp + CLASS_1_CF28FA2342D4FCB2_METHOD_1_5B42BEA785AFF94F_OFFSET))(a1);
	}
};
