#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GlobalScheduleDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x195A6960)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_1A5877AFFEC4CBD3_OFFSET UNITYSDK_OFFSET(0x195A6CD0)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_4E51BF989C8E2728_OFFSET UNITYSDK_OFFSET(0x195A6DB0)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x195A6790)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x195A6820)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_C035B011432BC706_OFFSET UNITYSDK_OFFSET(0x195A6F20)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x195A6D50)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_CF54CE9E982F7428_OFFSET UNITYSDK_OFFSET(0x195A69B0)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x195A6560)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x195A6520)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x195A68C0)
#define CLASS_1_F3CEC93CBA6F7C13__CCTOR_OFFSET UNITYSDK_OFFSET(0x195A7070)

inline static constexpr unsigned int Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex = 14356;

class Class_1_F3CEC93CBA6F7C13 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex)->GetStaticField(0x43760);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex)->GetStaticField(0x43768);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex)->GetStaticField(0x43770);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex)->GetStaticField(0xBF50);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex)->GetStaticField(0xBF51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_CF54CE9E982F7428(::RPG::GameCore::GlobalScheduleDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GlobalScheduleDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_CF54CE9E982F7428_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>* Method_1_1A5877AFFEC4CBD3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_1A5877AFFEC4CBD3_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*> Method_1_4E51BF989C8E2728()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_4E51BF989C8E2728_OFFSET))();
	}

	static ::RPG::GameCore::GlobalScheduleDataRow* Method_1_C035B011432BC706(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GlobalScheduleDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_C035B011432BC706_OFFSET))(a1);
	}
};
