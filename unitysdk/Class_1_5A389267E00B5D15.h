#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class B51RacingStatRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5A389267E00B5D15_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CFD94A0)
#define CLASS_1_5A389267E00B5D15_METHOD_1_13BE977642717442_OFFSET UNITYSDK_OFFSET(0x1CFD9100)
#define CLASS_1_5A389267E00B5D15_METHOD_1_74A81C877674DD2A_OFFSET UNITYSDK_OFFSET(0x1CFD8F90)
#define CLASS_1_5A389267E00B5D15_METHOD_1_86E956A60B3EF50B_OFFSET UNITYSDK_OFFSET(0x1CFD94F0)
#define CLASS_1_5A389267E00B5D15_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CFD92D0)
#define CLASS_1_5A389267E00B5D15_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CFD9360)
#define CLASS_1_5A389267E00B5D15_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CFD8F30)
#define CLASS_1_5A389267E00B5D15_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CFD8D00)
#define CLASS_1_5A389267E00B5D15_METHOD_1_EE7DD3D22BE1A2B5_OFFSET UNITYSDK_OFFSET(0x1CFD8C80)
#define CLASS_1_5A389267E00B5D15_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CFD9290)
#define CLASS_1_5A389267E00B5D15_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CFD9400)
#define CLASS_1_5A389267E00B5D15__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CFD9860)

inline static constexpr unsigned int Class_1_5A389267E00B5D15_TypeDefinitionIndex = 10951;

class Class_1_5A389267E00B5D15 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A389267E00B5D15_TypeDefinitionIndex)->GetStaticField(0x22B00);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A389267E00B5D15_TypeDefinitionIndex)->GetStaticField(0x22B08);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A389267E00B5D15_TypeDefinitionIndex)->GetStaticField(0x22B10);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A389267E00B5D15_TypeDefinitionIndex)->GetStaticField(0xB160);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A389267E00B5D15_TypeDefinitionIndex)->GetStaticField(0xB161);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>* Method_1_EE7DD3D22BE1A2B5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_EE7DD3D22BE1A2B5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*> Method_1_74A81C877674DD2A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::B51RacingStatRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_74A81C877674DD2A_OFFSET))();
	}

	static ::RPG::GameCore::B51RacingStatRow* Method_1_13BE977642717442(::RPG::GameCore::B51RacingStatType a1)
	{
		return ((::RPG::GameCore::B51RacingStatRow*(*)(::RPG::GameCore::B51RacingStatType))((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_13BE977642717442_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_86E956A60B3EF50B(::RPG::GameCore::B51RacingStatRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::B51RacingStatRow*))((::PBYTE)hIl2Cpp + CLASS_1_5A389267E00B5D15_METHOD_1_86E956A60B3EF50B_OFFSET))(a1);
	}
};
