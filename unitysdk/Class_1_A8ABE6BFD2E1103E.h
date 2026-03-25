#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelItemGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16CA1F80)
#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_0C22D5EF15CE6258_OFFSET UNITYSDK_OFFSET(0x16CA16B0)
#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_116EBEE755911C95_OFFSET UNITYSDK_OFFSET(0x16CA19E0)
#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_15713736B3FBE0CE_OFFSET UNITYSDK_OFFSET(0x16CA1B90)
#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16CA1DA0)
#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_4D031C3C5B4BC5BC_OFFSET UNITYSDK_OFFSET(0x16CA1FD0)
#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16CA1730)
#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16CA1E40)
#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16CA1980)
#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16CA1D60)
#define CLASS_1_A8ABE6BFD2E1103E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16CA1EE0)
#define CLASS_1_A8ABE6BFD2E1103E__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CA2330)

inline static constexpr unsigned int Class_1_A8ABE6BFD2E1103E_TypeDefinitionIndex = 10422;

class Class_1_A8ABE6BFD2E1103E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8ABE6BFD2E1103E_TypeDefinitionIndex)->GetStaticField(0x55C0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8ABE6BFD2E1103E_TypeDefinitionIndex)->GetStaticField(0x55C8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8ABE6BFD2E1103E_TypeDefinitionIndex)->GetStaticField(0x55D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8ABE6BFD2E1103E_TypeDefinitionIndex)->GetStaticField(0x2D10);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A8ABE6BFD2E1103E_TypeDefinitionIndex)->GetStaticField(0x2D11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*>* Method_1_0C22D5EF15CE6258()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_0C22D5EF15CE6258_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*> Method_1_116EBEE755911C95()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelItemGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_116EBEE755911C95_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelItemGroupRow* Method_1_15713736B3FBE0CE(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDuelItemGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_15713736B3FBE0CE_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D031C3C5B4BC5BC(::RPG::GameCore::ChimeraDuelItemGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelItemGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_A8ABE6BFD2E1103E_METHOD_1_4D031C3C5B4BC5BC_OFFSET))(a1);
	}
};
