#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveTeamRecommendRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EE7B060485E6848A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x193895D0)
#define CLASS_1_EE7B060485E6848A_METHOD_1_1028991ACC6834E7_OFFSET UNITYSDK_OFFSET(0x19389620)
#define CLASS_1_EE7B060485E6848A_METHOD_1_6A4BEE6F545F5892_OFFSET UNITYSDK_OFFSET(0x19388DF0)
#define CLASS_1_EE7B060485E6848A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19389400)
#define CLASS_1_EE7B060485E6848A_METHOD_1_A1F30792CDA2829B_OFFSET UNITYSDK_OFFSET(0x19389230)
#define CLASS_1_EE7B060485E6848A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19389490)
#define CLASS_1_EE7B060485E6848A_METHOD_1_CACF770AEE9ED42E_OFFSET UNITYSDK_OFFSET(0x19389100)
#define CLASS_1_EE7B060485E6848A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x193890A0)
#define CLASS_1_EE7B060485E6848A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19388E70)
#define CLASS_1_EE7B060485E6848A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x193893C0)
#define CLASS_1_EE7B060485E6848A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19389530)
#define CLASS_1_EE7B060485E6848A__CCTOR_OFFSET UNITYSDK_OFFSET(0x19389940)

inline static constexpr unsigned int Class_1_EE7B060485E6848A_TypeDefinitionIndex = 11198;

class Class_1_EE7B060485E6848A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE7B060485E6848A_TypeDefinitionIndex)->GetStaticField(0x57580);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE7B060485E6848A_TypeDefinitionIndex)->GetStaticField(0x57588);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE7B060485E6848A_TypeDefinitionIndex)->GetStaticField(0x57590);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE7B060485E6848A_TypeDefinitionIndex)->GetStaticField(0x114D0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EE7B060485E6848A_TypeDefinitionIndex)->GetStaticField(0x114D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*>* Method_1_6A4BEE6F545F5892()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_6A4BEE6F545F5892_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*> Method_1_CACF770AEE9ED42E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamRecommendRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_CACF770AEE9ED42E_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveTeamRecommendRow* Method_1_A1F30792CDA2829B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveTeamRecommendRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_A1F30792CDA2829B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1028991ACC6834E7(::RPG::GameCore::IdleLiveTeamRecommendRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveTeamRecommendRow*))((::PBYTE)hIl2Cpp + CLASS_1_EE7B060485E6848A_METHOD_1_1028991ACC6834E7_OFFSET))(a1);
	}
};
