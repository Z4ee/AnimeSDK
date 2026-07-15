#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicUnitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_71C30CFE64BC1284_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B5312D0)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_345264079166A471_OFFSET UNITYSDK_OFFSET(0x1B530E70)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_6D290DCC6B722537_OFFSET UNITYSDK_OFFSET(0x1B531680)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_7321F6CC555D4670_OFFSET UNITYSDK_OFFSET(0x1B530A30)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_74050F3F068B982D_OFFSET UNITYSDK_OFFSET(0x1B531320)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_8884D72AB4BEA974_OFFSET UNITYSDK_OFFSET(0x1B530D40)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B531100)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B531190)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_B97A964FBC41BFE9_OFFSET UNITYSDK_OFFSET(0x1B530EF0)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B530CE0)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B530AB0)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B5310C0)
#define CLASS_1_71C30CFE64BC1284_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B531230)
#define CLASS_1_71C30CFE64BC1284__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B531770)

inline static constexpr unsigned int Class_1_71C30CFE64BC1284_TypeDefinitionIndex = 14300;

class Class_1_71C30CFE64BC1284 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C30CFE64BC1284_TypeDefinitionIndex)->GetStaticField(0x4B290);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C30CFE64BC1284_TypeDefinitionIndex)->GetStaticField(0x4B298);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C30CFE64BC1284_TypeDefinitionIndex)->GetStaticField(0x4B2A0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C30CFE64BC1284_TypeDefinitionIndex)->GetStaticField(0xD470);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_71C30CFE64BC1284_TypeDefinitionIndex)->GetStaticField(0xD471);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>* Method_1_7321F6CC555D4670()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_7321F6CC555D4670_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*> Method_1_8884D72AB4BEA974()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_8884D72AB4BEA974_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>, ::RPG::GameCore::RogueMagicUnitRow*> Method_1_345264079166A471()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicUnitRow*>, ::RPG::GameCore::RogueMagicUnitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_345264079166A471_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicUnitRow* Method_1_B97A964FBC41BFE9(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RogueMagicUnitRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_B97A964FBC41BFE9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_74050F3F068B982D(::RPG::GameCore::RogueMagicUnitRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicUnitRow*))((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_74050F3F068B982D_OFFSET))(a1);
	}

	static ::RPG::GameCore::MazeBuffRow* Method_1_6D290DCC6B722537(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MazeBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_71C30CFE64BC1284_METHOD_1_6D290DCC6B722537_OFFSET))(a1, a2);
	}
};
