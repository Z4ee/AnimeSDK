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

#define CLASS_1_B59C94F51E33A702_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B6214E0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_410918CE2E7385F2_OFFSET UNITYSDK_OFFSET(0x1B620FB0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B621310)
#define CLASS_1_B59C94F51E33A702_METHOD_1_9CD2771F055D87D4_OFFSET UNITYSDK_OFFSET(0x1B6210E0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B6213A0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_B8606FFD1540E10F_OFFSET UNITYSDK_OFFSET(0x1B621530)
#define CLASS_1_B59C94F51E33A702_METHOD_1_C0B96CD577E9A753_OFFSET UNITYSDK_OFFSET(0x1B621140)
#define CLASS_1_B59C94F51E33A702_METHOD_1_C166826D1B828242_OFFSET UNITYSDK_OFFSET(0x1B620CA0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B620F50)
#define CLASS_1_B59C94F51E33A702_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B620D20)
#define CLASS_1_B59C94F51E33A702_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B6212D0)
#define CLASS_1_B59C94F51E33A702_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B621440)
#define CLASS_1_B59C94F51E33A702__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B621850)

inline static constexpr unsigned int Class_1_B59C94F51E33A702_TypeDefinitionIndex = 12940;

class Class_1_B59C94F51E33A702 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B59C94F51E33A702_TypeDefinitionIndex)->GetStaticField(0x63620);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B59C94F51E33A702_TypeDefinitionIndex)->GetStaticField(0x63628);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B59C94F51E33A702_TypeDefinitionIndex)->GetStaticField(0x63630);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B59C94F51E33A702_TypeDefinitionIndex)->GetStaticField(0x130D0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B59C94F51E33A702_TypeDefinitionIndex)->GetStaticField(0x130D1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*> Method_1_410918CE2E7385F2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_410918CE2E7385F2_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>, ::RPG::GameCore::GridFightActivityResidentConfigRow*> Method_1_9CD2771F055D87D4()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightActivityResidentConfigRow*>, ::RPG::GameCore::GridFightActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_9CD2771F055D87D4_OFFSET))();
	}

	static ::RPG::GameCore::GridFightActivityResidentConfigRow* Method_1_C0B96CD577E9A753(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightActivityResidentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_C0B96CD577E9A753_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B59C94F51E33A702_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
