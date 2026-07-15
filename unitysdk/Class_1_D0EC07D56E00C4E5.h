#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class OverrideFloorConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B45E280)
#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_47CF75085B2D7796_OFFSET UNITYSDK_OFFSET(0x1B45E2D0)
#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_4885A97226B64EF1_OFFSET UNITYSDK_OFFSET(0x1B45DA60)
#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_714370A7FBCD8772_OFFSET UNITYSDK_OFFSET(0x1B45DEA0)
#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_87B909259FA2C7EB_OFFSET UNITYSDK_OFFSET(0x1B45DD70)
#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B45E0B0)
#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B45E140)
#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B45DD10)
#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B45DAE0)
#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B45E070)
#define CLASS_1_D0EC07D56E00C4E5_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B45E1E0)
#define CLASS_1_D0EC07D56E00C4E5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B45E630)

inline static constexpr unsigned int Class_1_D0EC07D56E00C4E5_TypeDefinitionIndex = 12599;

class Class_1_D0EC07D56E00C4E5 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0EC07D56E00C4E5_TypeDefinitionIndex)->GetStaticField(0x3F000);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0EC07D56E00C4E5_TypeDefinitionIndex)->GetStaticField(0x3F008);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0EC07D56E00C4E5_TypeDefinitionIndex)->GetStaticField(0x3F010);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0EC07D56E00C4E5_TypeDefinitionIndex)->GetStaticField(0xA6B0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D0EC07D56E00C4E5_TypeDefinitionIndex)->GetStaticField(0xA6B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*>* Method_1_4885A97226B64EF1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_4885A97226B64EF1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*> Method_1_87B909259FA2C7EB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::OverrideFloorConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_87B909259FA2C7EB_OFFSET))();
	}

	static ::RPG::GameCore::OverrideFloorConfigRow* Method_1_714370A7FBCD8772(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::OverrideFloorConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_714370A7FBCD8772_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_47CF75085B2D7796(::RPG::GameCore::OverrideFloorConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::OverrideFloorConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_D0EC07D56E00C4E5_METHOD_1_47CF75085B2D7796_OFFSET))(a1);
	}
};
