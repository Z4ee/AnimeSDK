#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceHintRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FEF357BC4C054F52_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x179362D0)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179360F0)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179359C0)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_75C5CDBA454A4200_OFFSET UNITYSDK_OFFSET(0x17935940)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_94B14F872FC02A0E_OFFSET UNITYSDK_OFFSET(0x17935EE0)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_94FC44F9F3DF10DA_OFFSET UNITYSDK_OFFSET(0x17935E20)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17936190)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_B2C3E5F31CC1FB7D_OFFSET UNITYSDK_OFFSET(0x17935C70)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_CB81FC35BFD3A17C_OFFSET UNITYSDK_OFFSET(0x17936320)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17935C10)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x179360B0)
#define CLASS_1_FEF357BC4C054F52_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17936230)
#define CLASS_1_FEF357BC4C054F52__CCTOR_OFFSET UNITYSDK_OFFSET(0x17936680)

inline static constexpr unsigned int Class_1_FEF357BC4C054F52_TypeDefinitionIndex = 10556;

class Class_1_FEF357BC4C054F52 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF357BC4C054F52_TypeDefinitionIndex)->GetStaticField(0x23070);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF357BC4C054F52_TypeDefinitionIndex)->GetStaticField(0x23078);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF357BC4C054F52_TypeDefinitionIndex)->GetStaticField(0x23080);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF357BC4C054F52_TypeDefinitionIndex)->GetStaticField(0x9280);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FEF357BC4C054F52_TypeDefinitionIndex)->GetStaticField(0x9281);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>* Method_1_75C5CDBA454A4200()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_75C5CDBA454A4200_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*> Method_1_B2C3E5F31CC1FB7D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_B2C3E5F31CC1FB7D_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>, ::RPG::GameCore::ActivityDiceHintRow*> Method_1_94FC44F9F3DF10DA()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceHintRow*>, ::RPG::GameCore::ActivityDiceHintRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_94FC44F9F3DF10DA_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceHintRow* Method_1_94B14F872FC02A0E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceHintRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_94B14F872FC02A0E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_CB81FC35BFD3A17C(::RPG::GameCore::ActivityDiceHintRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceHintRow*))((::PBYTE)hIl2Cpp + CLASS_1_FEF357BC4C054F52_METHOD_1_CB81FC35BFD3A17C_OFFSET))(a1);
	}
};
