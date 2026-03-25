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

#define CLASS_1_54154860ADE759CD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16E106B0)
#define CLASS_1_54154860ADE759CD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16E104D0)
#define CLASS_1_54154860ADE759CD_METHOD_1_53A0BD4182DA00B1_OFFSET UNITYSDK_OFFSET(0x16E100F0)
#define CLASS_1_54154860ADE759CD_METHOD_1_59553E3AE14E9CAA_OFFSET UNITYSDK_OFFSET(0x16E10310)
#define CLASS_1_54154860ADE759CD_METHOD_1_614339BE97CB49D2_OFFSET UNITYSDK_OFFSET(0x16E10270)
#define CLASS_1_54154860ADE759CD_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16E0FE40)
#define CLASS_1_54154860ADE759CD_METHOD_1_912AEB0CB46C34DD_OFFSET UNITYSDK_OFFSET(0x16E0FDC0)
#define CLASS_1_54154860ADE759CD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16E10570)
#define CLASS_1_54154860ADE759CD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16E10090)
#define CLASS_1_54154860ADE759CD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16E10490)
#define CLASS_1_54154860ADE759CD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16E10610)
#define CLASS_1_54154860ADE759CD_METHOD_1_FD3A9C9043E68A1E_OFFSET UNITYSDK_OFFSET(0x16E10700)
#define CLASS_1_54154860ADE759CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E10A10)

inline static constexpr unsigned int Class_1_54154860ADE759CD_TypeDefinitionIndex = 10407;

class Class_1_54154860ADE759CD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54154860ADE759CD_TypeDefinitionIndex)->GetStaticField(0x18640);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54154860ADE759CD_TypeDefinitionIndex)->GetStaticField(0x18648);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_54154860ADE759CD_TypeDefinitionIndex)->GetStaticField(0x18650);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_54154860ADE759CD_TypeDefinitionIndex)->GetStaticField(0x6F80);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_54154860ADE759CD_TypeDefinitionIndex)->GetStaticField(0x6F81);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*> Method_1_53A0BD4182DA00B1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_53A0BD4182DA00B1_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>, ::RPG::GameCore::ChimeraDuelItemRow*> Method_1_614339BE97CB49D2()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemRow*>, ::RPG::GameCore::ChimeraDuelItemRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_614339BE97CB49D2_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelItemRow* Method_1_59553E3AE14E9CAA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDuelItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_59553E3AE14E9CAA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_54154860ADE759CD_METHOD_1_30D1209326FA87FC_OFFSET))();
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
