#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlanetFesBuffDescOverrideRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BF2FAE332B24DE49_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B5DE680)
#define CLASS_1_BF2FAE332B24DE49_METHOD_1_3E2ADE1D2B837E92_OFFSET UNITYSDK_OFFSET(0x1B5DE170)
#define CLASS_1_BF2FAE332B24DE49_METHOD_1_51ECD1E9B8A0D6D5_OFFSET UNITYSDK_OFFSET(0x1B5DDE60)
#define CLASS_1_BF2FAE332B24DE49_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B5DE4B0)
#define CLASS_1_BF2FAE332B24DE49_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B5DE540)
#define CLASS_1_BF2FAE332B24DE49_METHOD_1_B14367B86E5445AB_OFFSET UNITYSDK_OFFSET(0x1B5DE6D0)
#define CLASS_1_BF2FAE332B24DE49_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B5DE110)
#define CLASS_1_BF2FAE332B24DE49_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B5DDEE0)
#define CLASS_1_BF2FAE332B24DE49_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B5DE470)
#define CLASS_1_BF2FAE332B24DE49_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B5DE5E0)
#define CLASS_1_BF2FAE332B24DE49_METHOD_1_FDF366B1A6521420_OFFSET UNITYSDK_OFFSET(0x1B5DE2E0)
#define CLASS_1_BF2FAE332B24DE49__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5DEA40)

inline static constexpr unsigned int Class_1_BF2FAE332B24DE49_TypeDefinitionIndex = 11811;

class Class_1_BF2FAE332B24DE49 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF2FAE332B24DE49_TypeDefinitionIndex)->GetStaticField(0x44410);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF2FAE332B24DE49_TypeDefinitionIndex)->GetStaticField(0x44418);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF2FAE332B24DE49_TypeDefinitionIndex)->GetStaticField(0x44420);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF2FAE332B24DE49_TypeDefinitionIndex)->GetStaticField(0xBB40);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BF2FAE332B24DE49_TypeDefinitionIndex)->GetStaticField(0xBB41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>* Method_1_51ECD1E9B8A0D6D5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_51ECD1E9B8A0D6D5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*> Method_1_3E2ADE1D2B837E92()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlanetFesBuffDescOverrideRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_3E2ADE1D2B837E92_OFFSET))();
	}

	static ::RPG::GameCore::PlanetFesBuffDescOverrideRow* Method_1_FDF366B1A6521420(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlanetFesBuffDescOverrideRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_FDF366B1A6521420_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B14367B86E5445AB(::RPG::GameCore::PlanetFesBuffDescOverrideRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlanetFesBuffDescOverrideRow*))((::PBYTE)hIl2Cpp + CLASS_1_BF2FAE332B24DE49_METHOD_1_B14367B86E5445AB_OFFSET))(a1);
	}
};
