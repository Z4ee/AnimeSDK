#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatStageRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_543C6B7886F9EBFD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x187795C0)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_1D08A1905CCC1372_OFFSET UNITYSDK_OFFSET(0x18779610)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_30B9D9E3E3E288E1_OFFSET UNITYSDK_OFFSET(0x18779160)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x187793E0)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_4CA16BB436B52796_OFFSET UNITYSDK_OFFSET(0x18779220)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18778D00)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_6F92BC51A01489A5_OFFSET UNITYSDK_OFFSET(0x18778C80)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_80EF8497553802EE_OFFSET UNITYSDK_OFFSET(0x18778FB0)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18779480)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18778F50)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x187793A0)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18779520)
#define CLASS_1_543C6B7886F9EBFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x18779920)

inline static constexpr unsigned int Class_1_543C6B7886F9EBFD_TypeDefinitionIndex = 10765;

class Class_1_543C6B7886F9EBFD : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_543C6B7886F9EBFD_TypeDefinitionIndex)->GetStaticField(0x1B770);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_543C6B7886F9EBFD_TypeDefinitionIndex)->GetStaticField(0x1B778);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_543C6B7886F9EBFD_TypeDefinitionIndex)->GetStaticField(0x1B780);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_543C6B7886F9EBFD_TypeDefinitionIndex)->GetStaticField(0x7130);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_543C6B7886F9EBFD_TypeDefinitionIndex)->GetStaticField(0x7131);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>* Method_1_6F92BC51A01489A5()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_6F92BC51A01489A5_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*> Method_1_80EF8497553802EE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_80EF8497553802EE_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>, ::RPG::GameCore::ActivityDiceCombatStageRow*> Method_1_30B9D9E3E3E288E1()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>, ::RPG::GameCore::ActivityDiceCombatStageRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_30B9D9E3E3E288E1_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatStageRow* Method_1_4CA16BB436B52796(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_4CA16BB436B52796_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1D08A1905CCC1372(::RPG::GameCore::ActivityDiceCombatStageRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatStageRow*))((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_1D08A1905CCC1372_OFFSET))(a1);
	}
};
