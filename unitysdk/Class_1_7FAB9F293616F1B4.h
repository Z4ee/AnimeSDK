#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityRaidOrderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7FAB9F293616F1B4_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B41C170)
#define CLASS_1_7FAB9F293616F1B4_METHOD_1_26B32C58CEC61A0B_OFFSET UNITYSDK_OFFSET(0x1B41BC60)
#define CLASS_1_7FAB9F293616F1B4_METHOD_1_2C75AFAD490EE025_OFFSET UNITYSDK_OFFSET(0x1B41BDD0)
#define CLASS_1_7FAB9F293616F1B4_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B41BFA0)
#define CLASS_1_7FAB9F293616F1B4_METHOD_1_9EA0D24D86861C22_OFFSET UNITYSDK_OFFSET(0x1B41B950)
#define CLASS_1_7FAB9F293616F1B4_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B41C030)
#define CLASS_1_7FAB9F293616F1B4_METHOD_1_B52D17CB318BF09C_OFFSET UNITYSDK_OFFSET(0x1B41C1C0)
#define CLASS_1_7FAB9F293616F1B4_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B41BC00)
#define CLASS_1_7FAB9F293616F1B4_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B41B9D0)
#define CLASS_1_7FAB9F293616F1B4_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B41BF60)
#define CLASS_1_7FAB9F293616F1B4_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B41C0D0)
#define CLASS_1_7FAB9F293616F1B4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B41C530)

inline static constexpr unsigned int Class_1_7FAB9F293616F1B4_TypeDefinitionIndex = 12164;

class Class_1_7FAB9F293616F1B4 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FAB9F293616F1B4_TypeDefinitionIndex)->GetStaticField(0x44D00);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FAB9F293616F1B4_TypeDefinitionIndex)->GetStaticField(0x44D08);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FAB9F293616F1B4_TypeDefinitionIndex)->GetStaticField(0x44D10);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FAB9F293616F1B4_TypeDefinitionIndex)->GetStaticField(0xBE60);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7FAB9F293616F1B4_TypeDefinitionIndex)->GetStaticField(0xBE61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*>* Method_1_9EA0D24D86861C22()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_9EA0D24D86861C22_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*> Method_1_26B32C58CEC61A0B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityRaidOrderRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_26B32C58CEC61A0B_OFFSET))();
	}

	static ::RPG::GameCore::ActivityRaidOrderRow* Method_1_2C75AFAD490EE025(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityRaidOrderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_2C75AFAD490EE025_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B52D17CB318BF09C(::RPG::GameCore::ActivityRaidOrderRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityRaidOrderRow*))((::PBYTE)hIl2Cpp + CLASS_1_7FAB9F293616F1B4_METHOD_1_B52D17CB318BF09C_OFFSET))(a1);
	}
};
