#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TarotBookCardPoolRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A488BC1DF155F66A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0xBBE7820)
#define CLASS_1_A488BC1DF155F66A_METHOD_1_0E5FC7FE73261AC7_OFFSET UNITYSDK_OFFSET(0xBBE7870)
#define CLASS_1_A488BC1DF155F66A_METHOD_1_501D164FD318F8FB_OFFSET UNITYSDK_OFFSET(0xBBE7DA0)
#define CLASS_1_A488BC1DF155F66A_METHOD_1_6496FE7C06C3C6B2_OFFSET UNITYSDK_OFFSET(0xBBE7C70)
#define CLASS_1_A488BC1DF155F66A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xBB92FF0)
#define CLASS_1_A488BC1DF155F66A_METHOD_1_8F7934952980F07A_OFFSET UNITYSDK_OFFSET(0xBBE7B90)
#define CLASS_1_A488BC1DF155F66A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0xBBE76E0)
#define CLASS_1_A488BC1DF155F66A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xBBE7C10)
#define CLASS_1_A488BC1DF155F66A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0xBB12E20)
#define CLASS_1_A488BC1DF155F66A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0xBBE76A0)
#define CLASS_1_A488BC1DF155F66A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0xBBE7780)
#define CLASS_1_A488BC1DF155F66A__CCTOR_OFFSET UNITYSDK_OFFSET(0xBBE7F30)

inline static constexpr unsigned int Class_1_A488BC1DF155F66A_TypeDefinitionIndex = 14643;

class Class_1_A488BC1DF155F66A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A488BC1DF155F66A_TypeDefinitionIndex)->GetStaticField(0x622C0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A488BC1DF155F66A_TypeDefinitionIndex)->GetStaticField(0x622C8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A488BC1DF155F66A_TypeDefinitionIndex)->GetStaticField(0x622D0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A488BC1DF155F66A_TypeDefinitionIndex)->GetStaticField(0x12DE0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A488BC1DF155F66A_TypeDefinitionIndex)->GetStaticField(0x12DE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0E5FC7FE73261AC7(::RPG::GameCore::TarotBookCardPoolRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TarotBookCardPoolRow*))((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_0E5FC7FE73261AC7_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*>* Method_1_8F7934952980F07A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_8F7934952980F07A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*> Method_1_6496FE7C06C3C6B2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TarotBookCardPoolRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_6496FE7C06C3C6B2_OFFSET))();
	}

	static ::RPG::GameCore::TarotBookCardPoolRow* Method_1_501D164FD318F8FB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TarotBookCardPoolRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A488BC1DF155F66A_METHOD_1_501D164FD318F8FB_OFFSET))(a1);
	}
};
