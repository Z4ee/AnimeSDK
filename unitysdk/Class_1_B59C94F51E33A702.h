#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightActivityResidentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B59C94F51E33A702_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18FB75C0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_2325D31FF090B079_OFFSET UNITYSDK_OFFSET(0x18FB7130)
#define CLASS_1_B59C94F51E33A702_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18FB73E0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18FB6D00)
#define CLASS_1_B59C94F51E33A702_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FB7480)
#define CLASS_1_B59C94F51E33A702_METHOD_1_B8606FFD1540E10F_OFFSET UNITYSDK_OFFSET(0x18FB7610)
#define CLASS_1_B59C94F51E33A702_METHOD_1_C166826D1B828242_OFFSET UNITYSDK_OFFSET(0x18FB6C80)
#define CLASS_1_B59C94F51E33A702_METHOD_1_C9560484C310B768_OFFSET UNITYSDK_OFFSET(0x18FB71D0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FB6F50)
#define CLASS_1_B59C94F51E33A702_METHOD_1_E86B9E0A32576460_OFFSET UNITYSDK_OFFSET(0x18FB6FB0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FB73A0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FB7520)
#define CLASS_1_B59C94F51E33A702__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FB7920)

inline static constexpr unsigned int Class_1_B59C94F51E33A702_TypeDefinitionIndex = 12713;

class Class_1_B59C94F51E33A702 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B59C94F51E33A702_TypeDefinitionIndex)->GetStaticField(0x29980);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B59C94F51E33A702_TypeDefinitionIndex)->GetStaticField(0x29988);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B59C94F51E33A702_TypeDefinitionIndex)->GetStaticField(0x29990);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B59C94F51E33A702_TypeDefinitionIndex)->GetStaticField(0xB150);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B59C94F51E33A702_TypeDefinitionIndex)->GetStaticField(0xB151);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>* Method_1_C166826D1B828242()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_C166826D1B828242_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*> Method_1_E86B9E0A32576460()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_E86B9E0A32576460_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>, ::RPG::GameCore::GridFightActivityResidentConfigRow*> Method_1_2325D31FF090B079()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>, ::RPG::GameCore::GridFightActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_2325D31FF090B079_OFFSET))();
	}

	static ::RPG::GameCore::GridFightActivityResidentConfigRow* Method_1_C9560484C310B768(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightActivityResidentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_C9560484C310B768_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B8606FFD1540E10F(::RPG::GameCore::GridFightActivityResidentConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightActivityResidentConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_B8606FFD1540E10F_OFFSET))(a1);
	}
};
