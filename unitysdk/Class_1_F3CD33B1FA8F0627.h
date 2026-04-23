#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTutorialStageNodeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1843B1A0)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_25CF1C9E458C2BDB_OFFSET UNITYSDK_OFFSET(0x1843B1F0)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1843AFC0)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1843A7E0)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_A5687693A0CC5C45_OFFSET UNITYSDK_OFFSET(0x1843A760)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1843B060)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_C343D5629DE84C6E_OFFSET UNITYSDK_OFFSET(0x1843AA90)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1843AA30)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_D9C63961797A4CDF_OFFSET UNITYSDK_OFFSET(0x1843AC40)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1843AF80)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1843B100)
#define CLASS_1_F3CD33B1FA8F0627_METHOD_1_FC98C1E9418A2F1D_OFFSET UNITYSDK_OFFSET(0x1843AD00)
#define CLASS_1_F3CD33B1FA8F0627__CCTOR_OFFSET UNITYSDK_OFFSET(0x1843B5F0)

inline static constexpr unsigned int Class_1_F3CD33B1FA8F0627_TypeDefinitionIndex = 12918;

class Class_1_F3CD33B1FA8F0627 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CD33B1FA8F0627_TypeDefinitionIndex)->GetStaticField(0x29CC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CD33B1FA8F0627_TypeDefinitionIndex)->GetStaticField(0x29CC8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CD33B1FA8F0627_TypeDefinitionIndex)->GetStaticField(0x29CD0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CD33B1FA8F0627_TypeDefinitionIndex)->GetStaticField(0xB270);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CD33B1FA8F0627_TypeDefinitionIndex)->GetStaticField(0xB271);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>* Method_1_A5687693A0CC5C45()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_A5687693A0CC5C45_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*> Method_1_C343D5629DE84C6E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_C343D5629DE84C6E_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*> Method_1_D9C63961797A4CDF()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_D9C63961797A4CDF_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTutorialStageNodeConfigRow* Method_1_FC98C1E9418A2F1D(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::GridFightTutorialStageNodeConfigRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_FC98C1E9418A2F1D_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_25CF1C9E458C2BDB(::RPG::GameCore::GridFightTutorialStageNodeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTutorialStageNodeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_F3CD33B1FA8F0627_METHOD_1_25CF1C9E458C2BDB_OFFSET))(a1);
	}
};
