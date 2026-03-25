#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightForgeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ECE03C756F773C2C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x17740390)
#define CLASS_1_ECE03C756F773C2C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x177401B0)
#define CLASS_1_ECE03C756F773C2C_METHOD_1_5BA6C1885CF4F338_OFFSET UNITYSDK_OFFSET(0x1773FAC0)
#define CLASS_1_ECE03C756F773C2C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1773FB40)
#define CLASS_1_ECE03C756F773C2C_METHOD_1_78D967A4F02AD57C_OFFSET UNITYSDK_OFFSET(0x177403E0)
#define CLASS_1_ECE03C756F773C2C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17740250)
#define CLASS_1_ECE03C756F773C2C_METHOD_1_CC225F4D59D0FA0E_OFFSET UNITYSDK_OFFSET(0x1773FFA0)
#define CLASS_1_ECE03C756F773C2C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1773FD90)
#define CLASS_1_ECE03C756F773C2C_METHOD_1_EBA3720365979905_OFFSET UNITYSDK_OFFSET(0x1773FDF0)
#define CLASS_1_ECE03C756F773C2C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17740170)
#define CLASS_1_ECE03C756F773C2C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x177402F0)
#define CLASS_1_ECE03C756F773C2C__CCTOR_OFFSET UNITYSDK_OFFSET(0x17740740)

inline static constexpr unsigned int Class_1_ECE03C756F773C2C_TypeDefinitionIndex = 12295;

class Class_1_ECE03C756F773C2C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightForgeConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightForgeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECE03C756F773C2C_TypeDefinitionIndex)->GetStaticField(0x20A70);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECE03C756F773C2C_TypeDefinitionIndex)->GetStaticField(0x20A78);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECE03C756F773C2C_TypeDefinitionIndex)->GetStaticField(0x20A80);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECE03C756F773C2C_TypeDefinitionIndex)->GetStaticField(0x8AB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ECE03C756F773C2C_TypeDefinitionIndex)->GetStaticField(0x8AB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightForgeConfigRow*>* Method_1_5BA6C1885CF4F338()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightForgeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_5BA6C1885CF4F338_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightForgeConfigRow*> Method_1_EBA3720365979905()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightForgeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_EBA3720365979905_OFFSET))();
	}

	static ::RPG::GameCore::GridFightForgeConfigRow* Method_1_CC225F4D59D0FA0E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightForgeConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_CC225F4D59D0FA0E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_78D967A4F02AD57C(::RPG::GameCore::GridFightForgeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightForgeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_ECE03C756F773C2C_METHOD_1_78D967A4F02AD57C_OFFSET))(a1);
	}
};
