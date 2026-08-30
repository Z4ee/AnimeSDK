#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkCardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CAA4B10)
#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_1211788DD354E3D2_OFFSET UNITYSDK_OFFSET(0x1CAA4600)
#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_33BD3FA98C93045B_OFFSET UNITYSDK_OFFSET(0x1CAA4B60)
#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_67FDEB4FC0EC1A7D_OFFSET UNITYSDK_OFFSET(0x1CAA42F0)
#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CAA4940)
#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_A5CC3B7DF7CB97B0_OFFSET UNITYSDK_OFFSET(0x1CAA4770)
#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CAA49D0)
#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CAA45A0)
#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CAA4370)
#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CAA4900)
#define CLASS_1_4EED6E48A9E0B43D_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CAA4A70)
#define CLASS_1_4EED6E48A9E0B43D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAA4ED0)

inline static constexpr unsigned int Class_1_4EED6E48A9E0B43D_TypeDefinitionIndex = 11156;

class Class_1_4EED6E48A9E0B43D : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EED6E48A9E0B43D_TypeDefinitionIndex)->GetStaticField(0x224B0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EED6E48A9E0B43D_TypeDefinitionIndex)->GetStaticField(0x224B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EED6E48A9E0B43D_TypeDefinitionIndex)->GetStaticField(0x224C0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EED6E48A9E0B43D_TypeDefinitionIndex)->GetStaticField(0xAFD0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4EED6E48A9E0B43D_TypeDefinitionIndex)->GetStaticField(0xAFD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*>* Method_1_67FDEB4FC0EC1A7D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_67FDEB4FC0EC1A7D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*> Method_1_1211788DD354E3D2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkCardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_1211788DD354E3D2_OFFSET))();
	}

	static ::RPG::GameCore::ClockParkCardRow* Method_1_A5CC3B7DF7CB97B0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ClockParkCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_A5CC3B7DF7CB97B0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_33BD3FA98C93045B(::RPG::GameCore::ClockParkCardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ClockParkCardRow*))((::PBYTE)hIl2Cpp + CLASS_1_4EED6E48A9E0B43D_METHOD_1_33BD3FA98C93045B_OFFSET))(a1);
	}
};
