#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveNodeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A1975C92A579EB51_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CC27130)
#define CLASS_1_A1975C92A579EB51_METHOD_1_1786A77AB098A4DA_OFFSET UNITYSDK_OFFSET(0x1CC26B60)
#define CLASS_1_A1975C92A579EB51_METHOD_1_1F6E1ECD7C4C0FA5_OFFSET UNITYSDK_OFFSET(0x1CC26850)
#define CLASS_1_A1975C92A579EB51_METHOD_1_6AC496A5B6E7862A_OFFSET UNITYSDK_OFFSET(0x1CC26D50)
#define CLASS_1_A1975C92A579EB51_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC26F60)
#define CLASS_1_A1975C92A579EB51_METHOD_1_8AA52FA0EA8A85A6_OFFSET UNITYSDK_OFFSET(0x1CC26CD0)
#define CLASS_1_A1975C92A579EB51_METHOD_1_A6289FADCC5E6A53_OFFSET UNITYSDK_OFFSET(0x1CC27180)
#define CLASS_1_A1975C92A579EB51_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC26FF0)
#define CLASS_1_A1975C92A579EB51_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC26B00)
#define CLASS_1_A1975C92A579EB51_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC268D0)
#define CLASS_1_A1975C92A579EB51_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC26F20)
#define CLASS_1_A1975C92A579EB51_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC27090)
#define CLASS_1_A1975C92A579EB51__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC27520)

inline static constexpr unsigned int Class_1_A1975C92A579EB51_TypeDefinitionIndex = 11673;

class Class_1_A1975C92A579EB51 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1975C92A579EB51_TypeDefinitionIndex)->GetStaticField(0x2DE00);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1975C92A579EB51_TypeDefinitionIndex)->GetStaticField(0x2DE08);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1975C92A579EB51_TypeDefinitionIndex)->GetStaticField(0x2DE10);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1975C92A579EB51_TypeDefinitionIndex)->GetStaticField(0xCD60);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1975C92A579EB51_TypeDefinitionIndex)->GetStaticField(0xCD61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>* Method_1_1F6E1ECD7C4C0FA5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_1F6E1ECD7C4C0FA5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*> Method_1_1786A77AB098A4DA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_1786A77AB098A4DA_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>, ::RPG::GameCore::IdleLiveNodeRow*> Method_1_8AA52FA0EA8A85A6()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>, ::RPG::GameCore::IdleLiveNodeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_8AA52FA0EA8A85A6_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveNodeRow* Method_1_6AC496A5B6E7862A(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::IdleLiveNodeRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_6AC496A5B6E7862A_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A6289FADCC5E6A53(::RPG::GameCore::IdleLiveNodeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveNodeRow*))((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_A6289FADCC5E6A53_OFFSET))(a1);
	}
};
