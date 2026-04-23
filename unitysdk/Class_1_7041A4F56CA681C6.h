#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCEndGameRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7041A4F56CA681C6_METHOD_1_054227C4EA61DDCE_OFFSET UNITYSDK_OFFSET(0x18D88EE0)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18D89780)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18D895A0)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_4B4C1588D7353DBC_OFFSET UNITYSDK_OFFSET(0x18D89390)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18D88F60)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_7DCB525E285DE768_OFFSET UNITYSDK_OFFSET(0x18D89210)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_9CB67A00F636C8BB_OFFSET UNITYSDK_OFFSET(0x18D897D0)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18D89640)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18D891B0)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18D89560)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18D896E0)
#define CLASS_1_7041A4F56CA681C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D89AE0)

inline static constexpr unsigned int Class_1_7041A4F56CA681C6_TypeDefinitionIndex = 14005;

class Class_1_7041A4F56CA681C6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7041A4F56CA681C6_TypeDefinitionIndex)->GetStaticField(0x26300);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7041A4F56CA681C6_TypeDefinitionIndex)->GetStaticField(0x26308);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7041A4F56CA681C6_TypeDefinitionIndex)->GetStaticField(0x26310);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7041A4F56CA681C6_TypeDefinitionIndex)->GetStaticField(0xA0B0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7041A4F56CA681C6_TypeDefinitionIndex)->GetStaticField(0xA0B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*>* Method_1_054227C4EA61DDCE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_054227C4EA61DDCE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*> Method_1_7DCB525E285DE768()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_7DCB525E285DE768_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCEndGameRewardRow* Method_1_4B4C1588D7353DBC(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDLCEndGameRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_4B4C1588D7353DBC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_9CB67A00F636C8BB(::RPG::GameCore::RogueDLCEndGameRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCEndGameRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_9CB67A00F636C8BB_OFFSET))(a1);
	}
};
