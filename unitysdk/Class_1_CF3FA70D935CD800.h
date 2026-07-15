#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FightFestScoreRaceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CF3FA70D935CD800_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1BBB8F10)
#define CLASS_1_CF3FA70D935CD800_METHOD_1_1DB1E9492BDDA35C_OFFSET UNITYSDK_OFFSET(0x1BBB8A40)
#define CLASS_1_CF3FA70D935CD800_METHOD_1_4EA80D04621C32B1_OFFSET UNITYSDK_OFFSET(0x1BBB8F60)
#define CLASS_1_CF3FA70D935CD800_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BBB8D40)
#define CLASS_1_CF3FA70D935CD800_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BBB8DD0)
#define CLASS_1_CF3FA70D935CD800_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BBB89E0)
#define CLASS_1_CF3FA70D935CD800_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BBB87B0)
#define CLASS_1_CF3FA70D935CD800_METHOD_1_E21CB00DBD5BF149_OFFSET UNITYSDK_OFFSET(0x1BBB8B70)
#define CLASS_1_CF3FA70D935CD800_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BBB8D00)
#define CLASS_1_CF3FA70D935CD800_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BBB8E70)
#define CLASS_1_CF3FA70D935CD800_METHOD_1_FEF3F9421D5D38D4_OFFSET UNITYSDK_OFFSET(0x1BBB8730)
#define CLASS_1_CF3FA70D935CD800__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBB9280)

inline static constexpr unsigned int Class_1_CF3FA70D935CD800_TypeDefinitionIndex = 12779;

class Class_1_CF3FA70D935CD800 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF3FA70D935CD800_TypeDefinitionIndex)->GetStaticField(0xEA30);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF3FA70D935CD800_TypeDefinitionIndex)->GetStaticField(0xEA38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF3FA70D935CD800_TypeDefinitionIndex)->GetStaticField(0xEA40);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF3FA70D935CD800_TypeDefinitionIndex)->GetStaticField(0x5040);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CF3FA70D935CD800_TypeDefinitionIndex)->GetStaticField(0x5041);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*>* Method_1_FEF3F9421D5D38D4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_FEF3F9421D5D38D4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*> Method_1_1DB1E9492BDDA35C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScoreRaceRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_1DB1E9492BDDA35C_OFFSET))();
	}

	static ::RPG::GameCore::FightFestScoreRaceRow* Method_1_E21CB00DBD5BF149(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FightFestScoreRaceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_E21CB00DBD5BF149_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4EA80D04621C32B1(::RPG::GameCore::FightFestScoreRaceRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FightFestScoreRaceRow*))((::PBYTE)hIl2Cpp + CLASS_1_CF3FA70D935CD800_METHOD_1_4EA80D04621C32B1_OFFSET))(a1);
	}
};
