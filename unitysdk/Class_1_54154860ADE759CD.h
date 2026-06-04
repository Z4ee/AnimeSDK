#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_54154860ADE759CD_METHOD_1_0128795A65F4AA7B_OFFSET UNITYSDK_OFFSET(0x191849E0)
#define CLASS_1_54154860ADE759CD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19184ED0)
#define CLASS_1_54154860ADE759CD_METHOD_1_33D62453BCC77E9C_OFFSET UNITYSDK_OFFSET(0x19184B70)
#define CLASS_1_54154860ADE759CD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19184D00)
#define CLASS_1_54154860ADE759CD_METHOD_1_912AEB0CB46C34DD_OFFSET UNITYSDK_OFFSET(0x191846D0)
#define CLASS_1_54154860ADE759CD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19184D90)
#define CLASS_1_54154860ADE759CD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19184980)
#define CLASS_1_54154860ADE759CD_METHOD_1_D3FC210285294A87_OFFSET UNITYSDK_OFFSET(0x19184B10)
#define CLASS_1_54154860ADE759CD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19184750)
#define CLASS_1_54154860ADE759CD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19184CC0)
#define CLASS_1_54154860ADE759CD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19184E30)
#define CLASS_1_54154860ADE759CD_METHOD_1_FD3A9C9043E68A1E_OFFSET UNITYSDK_OFFSET(0x19184F20)
#define CLASS_1_54154860ADE759CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x19185240)

inline static constexpr unsigned int Class_1_54154860ADE759CD_TypeDefinitionIndex = 10688;

class Class_1_54154860ADE759CD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54154860ADE759CD_TypeDefinitionIndex)->GetStaticField(0x4BC00);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54154860ADE759CD_TypeDefinitionIndex)->GetStaticField(0x4BC08);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54154860ADE759CD_TypeDefinitionIndex)->GetStaticField(0x4BC10);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_54154860ADE759CD_TypeDefinitionIndex)->GetStaticField(0xE540);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_54154860ADE759CD_TypeDefinitionIndex)->GetStaticField(0xE541);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>* Method_1_912AEB0CB46C34DD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_912AEB0CB46C34DD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*> Method_1_0128795A65F4AA7B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_0128795A65F4AA7B_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>, ::RPG::GameCore::ChimeraDuelItemRow*> Method_1_D3FC210285294A87()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>, ::RPG::GameCore::ChimeraDuelItemRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_D3FC210285294A87_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelItemRow* Method_1_33D62453BCC77E9C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDuelItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_33D62453BCC77E9C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FD3A9C9043E68A1E(::RPG::GameCore::ChimeraDuelItemRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_FD3A9C9043E68A1E_OFFSET))(a1);
	}
};
