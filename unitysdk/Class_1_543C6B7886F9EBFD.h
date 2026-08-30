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

#define CLASS_1_543C6B7886F9EBFD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1DC74310)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_1D08A1905CCC1372_OFFSET UNITYSDK_OFFSET(0x1DC74360)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_2616A2FD900EE820_OFFSET UNITYSDK_OFFSET(0x1DC73FB0)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_4C2E01C5DF8EC6BA_OFFSET UNITYSDK_OFFSET(0x1DC73DC0)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_569C7F96BBC02BD8_OFFSET UNITYSDK_OFFSET(0x1DC73F30)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_6F92BC51A01489A5_OFFSET UNITYSDK_OFFSET(0x1DC73AB0)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1DC74140)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1DC741D0)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1DC73D60)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1DC73B30)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1DC74100)
#define CLASS_1_543C6B7886F9EBFD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1DC74270)
#define CLASS_1_543C6B7886F9EBFD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC74680)

inline static constexpr unsigned int Class_1_543C6B7886F9EBFD_TypeDefinitionIndex = 11245;

class Class_1_543C6B7886F9EBFD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_543C6B7886F9EBFD_TypeDefinitionIndex)->GetStaticField(0x58E00);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_543C6B7886F9EBFD_TypeDefinitionIndex)->GetStaticField(0x58E08);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_543C6B7886F9EBFD_TypeDefinitionIndex)->GetStaticField(0x58E10);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_543C6B7886F9EBFD_TypeDefinitionIndex)->GetStaticField(0x120A0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_543C6B7886F9EBFD_TypeDefinitionIndex)->GetStaticField(0x120A1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*> Method_1_4C2E01C5DF8EC6BA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_4C2E01C5DF8EC6BA_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>, ::RPG::GameCore::ActivityDiceCombatStageRow*> Method_1_569C7F96BBC02BD8()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatStageRow*>, ::RPG::GameCore::ActivityDiceCombatStageRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_569C7F96BBC02BD8_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatStageRow* Method_1_2616A2FD900EE820(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatStageRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_2616A2FD900EE820_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_543C6B7886F9EBFD_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
