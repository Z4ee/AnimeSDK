#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameModeGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EBBFD94E30694C25_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19058E20)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_1EC5311FDD1D0E96_OFFSET UNITYSDK_OFFSET(0x19058920)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x190211A0)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_36447CBFB817C309_OFFSET UNITYSDK_OFFSET(0x19058840)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_3C6BA7C8E9C25CFF_OFFSET UNITYSDK_OFFSET(0x19058E70)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18FD77A0)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_833688E39A2B817B_OFFSET UNITYSDK_OFFSET(0x19058AD0)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19058CE0)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x190588C0)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19058CA0)
#define CLASS_1_EBBFD94E30694C25_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19058D80)
#define CLASS_1_EBBFD94E30694C25__CCTOR_OFFSET UNITYSDK_OFFSET(0x190591D0)

inline static constexpr unsigned int Class_1_EBBFD94E30694C25_TypeDefinitionIndex = 12183;

class Class_1_EBBFD94E30694C25 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBBFD94E30694C25_TypeDefinitionIndex)->GetStaticField(0x3D530);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBBFD94E30694C25_TypeDefinitionIndex)->GetStaticField(0x3D538);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBBFD94E30694C25_TypeDefinitionIndex)->GetStaticField(0x3D540);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBBFD94E30694C25_TypeDefinitionIndex)->GetStaticField(0xD9D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EBBFD94E30694C25_TypeDefinitionIndex)->GetStaticField(0xD9D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>* Method_1_36447CBFB817C309()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_36447CBFB817C309_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*> Method_1_1EC5311FDD1D0E96()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_1EC5311FDD1D0E96_OFFSET))();
	}

	static ::RPG::GameCore::GameModeGroupRow* Method_1_833688E39A2B817B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameModeGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_833688E39A2B817B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C6BA7C8E9C25CFF(::RPG::GameCore::GameModeGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameModeGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_EBBFD94E30694C25_METHOD_1_3C6BA7C8E9C25CFF_OFFSET))(a1);
	}
};
