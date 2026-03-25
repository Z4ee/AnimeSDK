#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/TeamLimitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamLimitTypeEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0A04D76B880523ED_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16C60D30)
#define CLASS_1_0A04D76B880523ED_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C60B50)
#define CLASS_1_0A04D76B880523ED_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C604E0)
#define CLASS_1_0A04D76B880523ED_METHOD_1_87D4D0062BB4E4E1_OFFSET UNITYSDK_OFFSET(0x16C60460)
#define CLASS_1_0A04D76B880523ED_METHOD_1_9B6C3D40A7B99057_OFFSET UNITYSDK_OFFSET(0x16C60D80)
#define CLASS_1_0A04D76B880523ED_METHOD_1_A78BC75E51E52456_OFFSET UNITYSDK_OFFSET(0x16C60790)
#define CLASS_1_0A04D76B880523ED_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C60BF0)
#define CLASS_1_0A04D76B880523ED_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C60730)
#define CLASS_1_0A04D76B880523ED_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C60B10)
#define CLASS_1_0A04D76B880523ED_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C60C90)
#define CLASS_1_0A04D76B880523ED_METHOD_1_F7B8751D98C7C693_OFFSET UNITYSDK_OFFSET(0x16C60940)
#define CLASS_1_0A04D76B880523ED__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C610E0)

inline static constexpr unsigned int Class_1_0A04D76B880523ED_TypeDefinitionIndex = 14003;

class Class_1_0A04D76B880523ED : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A04D76B880523ED_TypeDefinitionIndex)->GetStaticField(0x1850);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A04D76B880523ED_TypeDefinitionIndex)->GetStaticField(0x1858);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A04D76B880523ED_TypeDefinitionIndex)->GetStaticField(0x1860);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A04D76B880523ED_TypeDefinitionIndex)->GetStaticField(0x2080);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A04D76B880523ED_TypeDefinitionIndex)->GetStaticField(0x2081);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>* Method_1_87D4D0062BB4E4E1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_87D4D0062BB4E4E1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*> Method_1_A78BC75E51E52456()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_A78BC75E51E52456_OFFSET))();
	}

	static ::RPG::GameCore::TeamLimitTypeEventRow* Method_1_F7B8751D98C7C693(::RPG::GameCore::TeamLimitType a1)
	{
		return ((::RPG::GameCore::TeamLimitTypeEventRow*(*)(::RPG::GameCore::TeamLimitType))((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_F7B8751D98C7C693_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9B6C3D40A7B99057(::RPG::GameCore::TeamLimitTypeEventRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TeamLimitTypeEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_9B6C3D40A7B99057_OFFSET))(a1);
	}
};
