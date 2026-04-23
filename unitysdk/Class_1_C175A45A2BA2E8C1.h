#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeSkipConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_0B4C38B8CA9DA8F9_OFFSET UNITYSDK_OFFSET(0x1821DDB0)
#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1821E640)
#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1821E460)
#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_5CD9BC23BBCC7066_OFFSET UNITYSDK_OFFSET(0x1821E690)
#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1821DE30)
#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_729D80874C34A8B0_OFFSET UNITYSDK_OFFSET(0x1821E290)
#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_9B48621037DF4712_OFFSET UNITYSDK_OFFSET(0x1821E0E0)
#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1821E500)
#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1821E080)
#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1821E420)
#define CLASS_1_C175A45A2BA2E8C1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1821E5A0)
#define CLASS_1_C175A45A2BA2E8C1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1821E9A0)

inline static constexpr unsigned int Class_1_C175A45A2BA2E8C1_TypeDefinitionIndex = 12228;

class Class_1_C175A45A2BA2E8C1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeSkipConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeSkipConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C175A45A2BA2E8C1_TypeDefinitionIndex)->GetStaticField(0x22460);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C175A45A2BA2E8C1_TypeDefinitionIndex)->GetStaticField(0x22468);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C175A45A2BA2E8C1_TypeDefinitionIndex)->GetStaticField(0x22470);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C175A45A2BA2E8C1_TypeDefinitionIndex)->GetStaticField(0x89D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C175A45A2BA2E8C1_TypeDefinitionIndex)->GetStaticField(0x89D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeSkipConfigRow*>* Method_1_0B4C38B8CA9DA8F9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeSkipConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_0B4C38B8CA9DA8F9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeSkipConfigRow*> Method_1_9B48621037DF4712()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeSkipConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_9B48621037DF4712_OFFSET))();
	}

	static ::RPG::GameCore::ChallengeSkipConfigRow* Method_1_729D80874C34A8B0(::RPG::GameCore::ChallengeGroupType a1)
	{
		return ((::RPG::GameCore::ChallengeSkipConfigRow*(*)(::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_729D80874C34A8B0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_5CD9BC23BBCC7066(::RPG::GameCore::ChallengeSkipConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengeSkipConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C175A45A2BA2E8C1_METHOD_1_5CD9BC23BBCC7066_OFFSET))(a1);
	}
};
