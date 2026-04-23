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

#define CLASS_1_D96A485D8D8F11D8_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18466780)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x184665A0)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_574B2D855D31F60A_OFFSET UNITYSDK_OFFSET(0x18466390)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18465F30)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_A698E1FA9F9AA660_OFFSET UNITYSDK_OFFSET(0x184667D0)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18466640)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_B289CBEE81C42A8D_OFFSET UNITYSDK_OFFSET(0x184661E0)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_C410C52E28428484_OFFSET UNITYSDK_OFFSET(0x18465EB0)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18466180)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18466560)
#define CLASS_1_D96A485D8D8F11D8_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x184666E0)
#define CLASS_1_D96A485D8D8F11D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x18466B30)

inline static constexpr unsigned int Class_1_D96A485D8D8F11D8_TypeDefinitionIndex = 11201;

class Class_1_D96A485D8D8F11D8 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96A485D8D8F11D8_TypeDefinitionIndex)->GetStaticField(0x2EAE0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96A485D8D8F11D8_TypeDefinitionIndex)->GetStaticField(0x2EAE8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96A485D8D8F11D8_TypeDefinitionIndex)->GetStaticField(0x2EAF0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96A485D8D8F11D8_TypeDefinitionIndex)->GetStaticField(0xB970);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D96A485D8D8F11D8_TypeDefinitionIndex)->GetStaticField(0xB971);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*> Method_1_B289CBEE81C42A8D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipRarityRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_B289CBEE81C42A8D_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveEquipRarityRow* Method_1_574B2D855D31F60A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveEquipRarityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_574B2D855D31F60A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D96A485D8D8F11D8_METHOD_1_30D1209326FA87FC_OFFSET))();
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
