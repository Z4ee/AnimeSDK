#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleSealTalkConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1AF885A0)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_339BC0830CCE93AD_OFFSET UNITYSDK_OFFSET(0x1AF87D80)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AF883D0)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AF88460)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AF88030)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_D6691169A3E3C033_OFFSET UNITYSDK_OFFSET(0x1AF885F0)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AF87E00)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_E9919181B26C7EC8_OFFSET UNITYSDK_OFFSET(0x1AF88200)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AF88390)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AF88500)
#define CLASS_1_26B4E7AD02FA0BD1_METHOD_1_FB731E274ED4DD52_OFFSET UNITYSDK_OFFSET(0x1AF88090)
#define CLASS_1_26B4E7AD02FA0BD1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF88960)

inline static constexpr unsigned int Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex = 11446;

class Class_1_26B4E7AD02FA0BD1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex)->GetStaticField(0x67000);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex)->GetStaticField(0x67008);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex)->GetStaticField(0x67010);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex)->GetStaticField(0x13E40);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_26B4E7AD02FA0BD1_TypeDefinitionIndex)->GetStaticField(0x13E41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*>* Method_1_339BC0830CCE93AD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_339BC0830CCE93AD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*> Method_1_FB731E274ED4DD52()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleSealTalkConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_FB731E274ED4DD52_OFFSET))();
	}

	static ::RPG::GameCore::MarbleSealTalkConfigRow* Method_1_E9919181B26C7EC8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleSealTalkConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_E9919181B26C7EC8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_D6691169A3E3C033(::RPG::GameCore::MarbleSealTalkConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MarbleSealTalkConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_26B4E7AD02FA0BD1_METHOD_1_D6691169A3E3C033_OFFSET))(a1);
	}
};
