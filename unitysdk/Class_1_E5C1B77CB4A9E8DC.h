#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeStoryMazeExtraConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CEFE390)
#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_7C27DC775DC958E1_OFFSET UNITYSDK_OFFSET(0x1CEFE3E0)
#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CEFE1C0)
#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_8EF11AEB62F1ECEE_OFFSET UNITYSDK_OFFSET(0x1CEFDBB0)
#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CEFE250)
#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_AF633715B54D60D7_OFFSET UNITYSDK_OFFSET(0x1CEFDEC0)
#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CEFDE60)
#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CEFDC30)
#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CEFE180)
#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CEFE2F0)
#define CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_FC128242953FB1CF_OFFSET UNITYSDK_OFFSET(0x1CEFE030)
#define CLASS_1_E5C1B77CB4A9E8DC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEFE700)

inline static constexpr unsigned int Class_1_E5C1B77CB4A9E8DC_TypeDefinitionIndex = 12888;

class Class_1_E5C1B77CB4A9E8DC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5C1B77CB4A9E8DC_TypeDefinitionIndex)->GetStaticField(0x50E00);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5C1B77CB4A9E8DC_TypeDefinitionIndex)->GetStaticField(0x50E08);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5C1B77CB4A9E8DC_TypeDefinitionIndex)->GetStaticField(0x50E10);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5C1B77CB4A9E8DC_TypeDefinitionIndex)->GetStaticField(0x10E10);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E5C1B77CB4A9E8DC_TypeDefinitionIndex)->GetStaticField(0x10E11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*>* Method_1_8EF11AEB62F1ECEE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_8EF11AEB62F1ECEE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*> Method_1_AF633715B54D60D7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_AF633715B54D60D7_OFFSET))();
	}

	static ::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* Method_1_FC128242953FB1CF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_FC128242953FB1CF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_7C27DC775DC958E1(::RPG::GameCore::ChallengeStoryMazeExtraConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengeStoryMazeExtraConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_E5C1B77CB4A9E8DC_METHOD_1_7C27DC775DC958E1_OFFSET))(a1);
	}
};
