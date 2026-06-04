#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraWorkDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19275880)
#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_3599B8366D642535_OFFSET UNITYSDK_OFFSET(0x192758D0)
#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x192756B0)
#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19275740)
#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19275310)
#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_D41670FEBB594F9E_OFFSET UNITYSDK_OFFSET(0x192754E0)
#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x192750E0)
#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_E2169F34BDBD5BA1_OFFSET UNITYSDK_OFFSET(0x19275060)
#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_E87A6BECA6C33F16_OFFSET UNITYSDK_OFFSET(0x19275370)
#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19275670)
#define CLASS_1_C6A5F2800C9F4D99_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x192757E0)
#define CLASS_1_C6A5F2800C9F4D99__CCTOR_OFFSET UNITYSDK_OFFSET(0x19275C40)

inline static constexpr unsigned int Class_1_C6A5F2800C9F4D99_TypeDefinitionIndex = 12413;

class Class_1_C6A5F2800C9F4D99 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDisplayRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6A5F2800C9F4D99_TypeDefinitionIndex)->GetStaticField(0x52A30);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6A5F2800C9F4D99_TypeDefinitionIndex)->GetStaticField(0x52A38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6A5F2800C9F4D99_TypeDefinitionIndex)->GetStaticField(0x52A40);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6A5F2800C9F4D99_TypeDefinitionIndex)->GetStaticField(0x104B0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6A5F2800C9F4D99_TypeDefinitionIndex)->GetStaticField(0x104B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDisplayRow*>* Method_1_E2169F34BDBD5BA1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_E2169F34BDBD5BA1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDisplayRow*> Method_1_E87A6BECA6C33F16()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraWorkDisplayRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_E87A6BECA6C33F16_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraWorkDisplayRow* Method_1_D41670FEBB594F9E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraWorkDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_D41670FEBB594F9E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_3599B8366D642535(::RPG::GameCore::ChimeraWorkDisplayRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraWorkDisplayRow*))((::PBYTE)hIl2Cpp + CLASS_1_C6A5F2800C9F4D99_METHOD_1_3599B8366D642535_OFFSET))(a1);
	}
};
