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

#define CLASS_1_A1975C92A579EB51_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1836A7D0)
#define CLASS_1_A1975C92A579EB51_METHOD_1_131CC3F233592C9F_OFFSET UNITYSDK_OFFSET(0x1836A2E0)
#define CLASS_1_A1975C92A579EB51_METHOD_1_1F6E1ECD7C4C0FA5_OFFSET UNITYSDK_OFFSET(0x18369E00)
#define CLASS_1_A1975C92A579EB51_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1836A5F0)
#define CLASS_1_A1975C92A579EB51_METHOD_1_68EF3223CD45668E_OFFSET UNITYSDK_OFFSET(0x1836A130)
#define CLASS_1_A1975C92A579EB51_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18369E80)
#define CLASS_1_A1975C92A579EB51_METHOD_1_916B11E3DDAD5333_OFFSET UNITYSDK_OFFSET(0x1836A3A0)
#define CLASS_1_A1975C92A579EB51_METHOD_1_A6289FADCC5E6A53_OFFSET UNITYSDK_OFFSET(0x1836A820)
#define CLASS_1_A1975C92A579EB51_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1836A690)
#define CLASS_1_A1975C92A579EB51_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1836A0D0)
#define CLASS_1_A1975C92A579EB51_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1836A5B0)
#define CLASS_1_A1975C92A579EB51_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1836A730)
#define CLASS_1_A1975C92A579EB51__CCTOR_OFFSET UNITYSDK_OFFSET(0x1836ABD0)

inline static constexpr unsigned int Class_1_A1975C92A579EB51_TypeDefinitionIndex = 11136;

class Class_1_A1975C92A579EB51 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1975C92A579EB51_TypeDefinitionIndex)->GetStaticField(0x2E010);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1975C92A579EB51_TypeDefinitionIndex)->GetStaticField(0x2E018);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1975C92A579EB51_TypeDefinitionIndex)->GetStaticField(0x2E020);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1975C92A579EB51_TypeDefinitionIndex)->GetStaticField(0xB630);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A1975C92A579EB51_TypeDefinitionIndex)->GetStaticField(0xB631);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*> Method_1_68EF3223CD45668E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_68EF3223CD45668E_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>, ::RPG::GameCore::IdleLiveNodeRow*> Method_1_131CC3F233592C9F()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveNodeRow*>, ::RPG::GameCore::IdleLiveNodeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_131CC3F233592C9F_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveNodeRow* Method_1_916B11E3DDAD5333(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::IdleLiveNodeRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_916B11E3DDAD5333_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A1975C92A579EB51_METHOD_1_30D1209326FA87FC_OFFSET))();
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
