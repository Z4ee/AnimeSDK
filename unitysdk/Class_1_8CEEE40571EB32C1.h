#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengePeakRewardORRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8CEEE40571EB32C1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1927CD50)
#define CLASS_1_8CEEE40571EB32C1_METHOD_1_57CF6106D6370955_OFFSET UNITYSDK_OFFSET(0x1927C520)
#define CLASS_1_8CEEE40571EB32C1_METHOD_1_746AD2E13C806D07_OFFSET UNITYSDK_OFFSET(0x1927CDA0)
#define CLASS_1_8CEEE40571EB32C1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1927CB80)
#define CLASS_1_8CEEE40571EB32C1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1927CC10)
#define CLASS_1_8CEEE40571EB32C1_METHOD_1_C996662AA013180A_OFFSET UNITYSDK_OFFSET(0x1927C830)
#define CLASS_1_8CEEE40571EB32C1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1927C7D0)
#define CLASS_1_8CEEE40571EB32C1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1927C5A0)
#define CLASS_1_8CEEE40571EB32C1_METHOD_1_ECC0AD52719DFB0E_OFFSET UNITYSDK_OFFSET(0x1927C9A0)
#define CLASS_1_8CEEE40571EB32C1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1927CB40)
#define CLASS_1_8CEEE40571EB32C1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1927CCB0)
#define CLASS_1_8CEEE40571EB32C1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1927D150)

inline static constexpr unsigned int Class_1_8CEEE40571EB32C1_TypeDefinitionIndex = 12357;

class Class_1_8CEEE40571EB32C1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CEEE40571EB32C1_TypeDefinitionIndex)->GetStaticField(0x52D80);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CEEE40571EB32C1_TypeDefinitionIndex)->GetStaticField(0x52D88);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CEEE40571EB32C1_TypeDefinitionIndex)->GetStaticField(0x52D90);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CEEE40571EB32C1_TypeDefinitionIndex)->GetStaticField(0x105B0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8CEEE40571EB32C1_TypeDefinitionIndex)->GetStaticField(0x105B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*>* Method_1_57CF6106D6370955()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_57CF6106D6370955_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*> Method_1_C996662AA013180A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardORRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_C996662AA013180A_OFFSET))();
	}

	static ::RPG::GameCore::ChallengePeakRewardORRow* Method_1_ECC0AD52719DFB0E(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ChallengePeakRewardORRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_ECC0AD52719DFB0E_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_746AD2E13C806D07(::RPG::GameCore::ChallengePeakRewardORRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengePeakRewardORRow*))((::PBYTE)hIl2Cpp + CLASS_1_8CEEE40571EB32C1_METHOD_1_746AD2E13C806D07_OFFSET))(a1);
	}
};
