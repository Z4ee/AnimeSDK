#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightPrayConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0F6259D0422CD815_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1BB98810)
#define CLASS_1_0F6259D0422CD815_METHOD_1_139E224DEBB80E7C_OFFSET UNITYSDK_OFFSET(0x1BB98470)
#define CLASS_1_0F6259D0422CD815_METHOD_1_18F9EDB3F999D99F_OFFSET UNITYSDK_OFFSET(0x1BB98860)
#define CLASS_1_0F6259D0422CD815_METHOD_1_81B6B5EF5E0002B1_OFFSET UNITYSDK_OFFSET(0x1BB97FF0)
#define CLASS_1_0F6259D0422CD815_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BB98640)
#define CLASS_1_0F6259D0422CD815_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BB986D0)
#define CLASS_1_0F6259D0422CD815_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BB982A0)
#define CLASS_1_0F6259D0422CD815_METHOD_1_D8707C3ED04F16F6_OFFSET UNITYSDK_OFFSET(0x1BB98300)
#define CLASS_1_0F6259D0422CD815_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BB98070)
#define CLASS_1_0F6259D0422CD815_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BB98600)
#define CLASS_1_0F6259D0422CD815_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BB98770)
#define CLASS_1_0F6259D0422CD815__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB98BD0)

inline static constexpr unsigned int Class_1_0F6259D0422CD815_TypeDefinitionIndex = 12992;

class Class_1_0F6259D0422CD815 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F6259D0422CD815_TypeDefinitionIndex)->GetStaticField(0xDCC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F6259D0422CD815_TypeDefinitionIndex)->GetStaticField(0xDCC8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F6259D0422CD815_TypeDefinitionIndex)->GetStaticField(0xDCD0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F6259D0422CD815_TypeDefinitionIndex)->GetStaticField(0x4D20);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0F6259D0422CD815_TypeDefinitionIndex)->GetStaticField(0x4D21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*>* Method_1_81B6B5EF5E0002B1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_81B6B5EF5E0002B1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*> Method_1_D8707C3ED04F16F6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPrayConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_D8707C3ED04F16F6_OFFSET))();
	}

	static ::RPG::GameCore::GridFightPrayConfigRow* Method_1_139E224DEBB80E7C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightPrayConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_139E224DEBB80E7C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_18F9EDB3F999D99F(::RPG::GameCore::GridFightPrayConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightPrayConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_0F6259D0422CD815_METHOD_1_18F9EDB3F999D99F_OFFSET))(a1);
	}
};
