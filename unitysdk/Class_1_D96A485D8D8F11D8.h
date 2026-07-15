#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveEquipRarityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D96A485D8D8F11D8_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B5824D0)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_26D5B23D9B8CDB31_OFFSET UNITYSDK_OFFSET(0x1B581FC0)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B582300)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_8B3BB818AAF4CBA1_OFFSET UNITYSDK_OFFSET(0x1B582130)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_A698E1FA9F9AA660_OFFSET UNITYSDK_OFFSET(0x1B582520)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B582390)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_C410C52E28428484_OFFSET UNITYSDK_OFFSET(0x1B581CB0)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B581F60)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B581D30)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B5822C0)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B582430)
#define CLASS_1_D96A485D8D8F11D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B582890)

inline static constexpr unsigned int Class_1_D96A485D8D8F11D8_TypeDefinitionIndex = 11348;

class Class_1_D96A485D8D8F11D8 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96A485D8D8F11D8_TypeDefinitionIndex)->GetStaticField(0x9040);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96A485D8D8F11D8_TypeDefinitionIndex)->GetStaticField(0x9048);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96A485D8D8F11D8_TypeDefinitionIndex)->GetStaticField(0x9050);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96A485D8D8F11D8_TypeDefinitionIndex)->GetStaticField(0x37F0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96A485D8D8F11D8_TypeDefinitionIndex)->GetStaticField(0x37F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>* Method_1_C410C52E28428484()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_C410C52E28428484_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*> Method_1_26D5B23D9B8CDB31()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_26D5B23D9B8CDB31_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveEquipRarityRow* Method_1_8B3BB818AAF4CBA1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveEquipRarityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_8B3BB818AAF4CBA1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A698E1FA9F9AA660(::RPG::GameCore::IdleLiveEquipRarityRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveEquipRarityRow*))((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_A698E1FA9F9AA660_OFFSET))(a1);
	}
};
