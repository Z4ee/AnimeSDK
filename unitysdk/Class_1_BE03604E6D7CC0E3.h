#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraWorkRoundRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x183AF770)
#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x183AF590)
#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_3B706105208329BA_OFFSET UNITYSDK_OFFSET(0x183AF7C0)
#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_519DF60033D3176F_OFFSET UNITYSDK_OFFSET(0x183AEF20)
#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x183AEFA0)
#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_98F9804720F58F0E_OFFSET UNITYSDK_OFFSET(0x183AF3D0)
#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x183AF630)
#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x183AF1F0)
#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_D8FDD9EA99F71CB7_OFFSET UNITYSDK_OFFSET(0x183AF250)
#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x183AF550)
#define CLASS_1_BE03604E6D7CC0E3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x183AF6D0)
#define CLASS_1_BE03604E6D7CC0E3__CCTOR_OFFSET UNITYSDK_OFFSET(0x183AFAD0)

inline static constexpr unsigned int Class_1_BE03604E6D7CC0E3_TypeDefinitionIndex = 12306;

class Class_1_BE03604E6D7CC0E3 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE03604E6D7CC0E3_TypeDefinitionIndex)->GetStaticField(0x21E20);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE03604E6D7CC0E3_TypeDefinitionIndex)->GetStaticField(0x21E28);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE03604E6D7CC0E3_TypeDefinitionIndex)->GetStaticField(0x21E30);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE03604E6D7CC0E3_TypeDefinitionIndex)->GetStaticField(0x86F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE03604E6D7CC0E3_TypeDefinitionIndex)->GetStaticField(0x86F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*>* Method_1_519DF60033D3176F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_519DF60033D3176F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*> Method_1_D8FDD9EA99F71CB7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkRoundRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_D8FDD9EA99F71CB7_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraWorkRoundRow* Method_1_98F9804720F58F0E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraWorkRoundRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_98F9804720F58F0E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3B706105208329BA(::RPG::GameCore::ChimeraWorkRoundRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraWorkRoundRow*))((::PBYTE)hIl2Cpp + CLASS_1_BE03604E6D7CC0E3_METHOD_1_3B706105208329BA_OFFSET))(a1);
	}
};
