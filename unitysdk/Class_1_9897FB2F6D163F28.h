#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ClockParkBuffType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ClockParkBuffTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9897FB2F6D163F28_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1825EAA0)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1825E8C0)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1825E250)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_6C9053F6989B2BF4_OFFSET UNITYSDK_OFFSET(0x1825EAF0)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_8E5B827781F35907_OFFSET UNITYSDK_OFFSET(0x1825E500)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1825E960)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_B1B4EBFE4A75D813_OFFSET UNITYSDK_OFFSET(0x1825E6B0)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1825E4A0)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1825E880)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1825EA00)
#define CLASS_1_9897FB2F6D163F28_METHOD_1_F4A160780F731212_OFFSET UNITYSDK_OFFSET(0x1825E1D0)
#define CLASS_1_9897FB2F6D163F28__CCTOR_OFFSET UNITYSDK_OFFSET(0x1825EE50)

inline static constexpr unsigned int Class_1_9897FB2F6D163F28_TypeDefinitionIndex = 10690;

class Class_1_9897FB2F6D163F28 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9897FB2F6D163F28_TypeDefinitionIndex)->GetStaticField(0x1B970);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9897FB2F6D163F28_TypeDefinitionIndex)->GetStaticField(0x1B978);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9897FB2F6D163F28_TypeDefinitionIndex)->GetStaticField(0x1B980);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9897FB2F6D163F28_TypeDefinitionIndex)->GetStaticField(0x71A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9897FB2F6D163F28_TypeDefinitionIndex)->GetStaticField(0x71A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>* Method_1_F4A160780F731212()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_F4A160780F731212_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*> Method_1_8E5B827781F35907()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClockParkBuffTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_8E5B827781F35907_OFFSET))();
	}

	static ::RPG::GameCore::ClockParkBuffTypeRow* Method_1_B1B4EBFE4A75D813(::RPG::GameCore::ClockParkBuffType a1)
	{
		return ((::RPG::GameCore::ClockParkBuffTypeRow*(*)(::RPG::GameCore::ClockParkBuffType))((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_B1B4EBFE4A75D813_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C9053F6989B2BF4(::RPG::GameCore::ClockParkBuffTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ClockParkBuffTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_9897FB2F6D163F28_METHOD_1_6C9053F6989B2BF4_OFFSET))(a1);
	}
};
