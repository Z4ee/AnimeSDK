#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CakeRaceSectionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_72F177D39EE94AB5_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B3FC830)
#define CLASS_1_72F177D39EE94AB5_METHOD_1_264DD459854FE89F_OFFSET UNITYSDK_OFFSET(0x1B3FC880)
#define CLASS_1_72F177D39EE94AB5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B3FC660)
#define CLASS_1_72F177D39EE94AB5_METHOD_1_99282839C3AA7442_OFFSET UNITYSDK_OFFSET(0x1B3FC320)
#define CLASS_1_72F177D39EE94AB5_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B3FC6F0)
#define CLASS_1_72F177D39EE94AB5_METHOD_1_B107CA620AC9EB0C_OFFSET UNITYSDK_OFFSET(0x1B3FC490)
#define CLASS_1_72F177D39EE94AB5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B3FC2C0)
#define CLASS_1_72F177D39EE94AB5_METHOD_1_D54A42195762BD8D_OFFSET UNITYSDK_OFFSET(0x1B3FC010)
#define CLASS_1_72F177D39EE94AB5_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B3FC090)
#define CLASS_1_72F177D39EE94AB5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B3FC620)
#define CLASS_1_72F177D39EE94AB5_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B3FC790)
#define CLASS_1_72F177D39EE94AB5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3FCBF0)

inline static constexpr unsigned int Class_1_72F177D39EE94AB5_TypeDefinitionIndex = 10603;

class Class_1_72F177D39EE94AB5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceSectionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceSectionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72F177D39EE94AB5_TypeDefinitionIndex)->GetStaticField(0x44010);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72F177D39EE94AB5_TypeDefinitionIndex)->GetStaticField(0x44018);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72F177D39EE94AB5_TypeDefinitionIndex)->GetStaticField(0x44020);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_72F177D39EE94AB5_TypeDefinitionIndex)->GetStaticField(0xB9D0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_72F177D39EE94AB5_TypeDefinitionIndex)->GetStaticField(0xB9D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceSectionRow*>* Method_1_D54A42195762BD8D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceSectionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_D54A42195762BD8D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceSectionRow*> Method_1_99282839C3AA7442()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CakeRaceSectionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_99282839C3AA7442_OFFSET))();
	}

	static ::RPG::GameCore::CakeRaceSectionRow* Method_1_B107CA620AC9EB0C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CakeRaceSectionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_B107CA620AC9EB0C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_264DD459854FE89F(::RPG::GameCore::CakeRaceSectionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CakeRaceSectionRow*))((::PBYTE)hIl2Cpp + CLASS_1_72F177D39EE94AB5_METHOD_1_264DD459854FE89F_OFFSET))(a1);
	}
};
