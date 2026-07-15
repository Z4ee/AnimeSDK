#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/EvolveBuildCardType.h"
#include "unitysdk/RPG/GameCore/EvolveBuildSeason.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveBuildCardTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B3D7C40)
#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_105F9C3DF4371D0E_OFFSET UNITYSDK_OFFSET(0x1B3D73D0)
#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_5B6BC294324E76EA_OFFSET UNITYSDK_OFFSET(0x1B3D7C90)
#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B3D7A70)
#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_9FB8917C142A32CF_OFFSET UNITYSDK_OFFSET(0x1B3D7850)
#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B3D7B00)
#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B3D7680)
#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B3D7450)
#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B3D7A30)
#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B3D7BA0)
#define CLASS_1_852DB8CBF07B1DFE_METHOD_1_FBC5E8B1372096B7_OFFSET UNITYSDK_OFFSET(0x1B3D76E0)
#define CLASS_1_852DB8CBF07B1DFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3D8030)

inline static constexpr unsigned int Class_1_852DB8CBF07B1DFE_TypeDefinitionIndex = 11046;

class Class_1_852DB8CBF07B1DFE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_852DB8CBF07B1DFE_TypeDefinitionIndex)->GetStaticField(0x465F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_852DB8CBF07B1DFE_TypeDefinitionIndex)->GetStaticField(0x465F8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_852DB8CBF07B1DFE_TypeDefinitionIndex)->GetStaticField(0x46600);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_852DB8CBF07B1DFE_TypeDefinitionIndex)->GetStaticField(0xC700);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_852DB8CBF07B1DFE_TypeDefinitionIndex)->GetStaticField(0xC701);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*>* Method_1_105F9C3DF4371D0E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_105F9C3DF4371D0E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*> Method_1_FBC5E8B1372096B7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildCardTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_FBC5E8B1372096B7_OFFSET))();
	}

	static ::RPG::GameCore::EvolveBuildCardTypeRow* Method_1_9FB8917C142A32CF(::RPG::GameCore::EvolveBuildCardType a1, ::RPG::GameCore::EvolveBuildSeason a2)
	{
		return ((::RPG::GameCore::EvolveBuildCardTypeRow*(*)(::RPG::GameCore::EvolveBuildCardType, ::RPG::GameCore::EvolveBuildSeason))((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_9FB8917C142A32CF_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5B6BC294324E76EA(::RPG::GameCore::EvolveBuildCardTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::EvolveBuildCardTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_852DB8CBF07B1DFE_METHOD_1_5B6BC294324E76EA_OFFSET))(a1);
	}
};
