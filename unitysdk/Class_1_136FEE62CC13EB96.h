#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveSpEquipRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_136FEE62CC13EB96_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x192B3ED0)
#define CLASS_1_136FEE62CC13EB96_METHOD_1_1FDADBDB9D67CE12_OFFSET UNITYSDK_OFFSET(0x192B3F20)
#define CLASS_1_136FEE62CC13EB96_METHOD_1_280DD0AACF06B427_OFFSET UNITYSDK_OFFSET(0x192B3B30)
#define CLASS_1_136FEE62CC13EB96_METHOD_1_5D2BC45F8C4D7077_OFFSET UNITYSDK_OFFSET(0x192B39C0)
#define CLASS_1_136FEE62CC13EB96_METHOD_1_6C1DC74586423C16_OFFSET UNITYSDK_OFFSET(0x192B36B0)
#define CLASS_1_136FEE62CC13EB96_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x192B3D00)
#define CLASS_1_136FEE62CC13EB96_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x192B3D90)
#define CLASS_1_136FEE62CC13EB96_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x192B3960)
#define CLASS_1_136FEE62CC13EB96_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x192B3730)
#define CLASS_1_136FEE62CC13EB96_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x192B3CC0)
#define CLASS_1_136FEE62CC13EB96_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x192B3E30)
#define CLASS_1_136FEE62CC13EB96__CCTOR_OFFSET UNITYSDK_OFFSET(0x192B4290)

inline static constexpr unsigned int Class_1_136FEE62CC13EB96_TypeDefinitionIndex = 11251;

class Class_1_136FEE62CC13EB96 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_136FEE62CC13EB96_TypeDefinitionIndex)->GetStaticField(0x54600);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_136FEE62CC13EB96_TypeDefinitionIndex)->GetStaticField(0x54608);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_136FEE62CC13EB96_TypeDefinitionIndex)->GetStaticField(0x54610);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_136FEE62CC13EB96_TypeDefinitionIndex)->GetStaticField(0x10BE0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_136FEE62CC13EB96_TypeDefinitionIndex)->GetStaticField(0x10BE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>* Method_1_6C1DC74586423C16()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_6C1DC74586423C16_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*> Method_1_5D2BC45F8C4D7077()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_5D2BC45F8C4D7077_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveSpEquipRow* Method_1_280DD0AACF06B427(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveSpEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_280DD0AACF06B427_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_1FDADBDB9D67CE12(::RPG::GameCore::IdleLiveSpEquipRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpEquipRow*))((::PBYTE)hIl2Cpp + CLASS_1_136FEE62CC13EB96_METHOD_1_1FDADBDB9D67CE12_OFFSET))(a1);
	}
};
