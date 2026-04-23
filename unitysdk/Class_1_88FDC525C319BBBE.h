#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournWorkbenchFuncRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_88FDC525C319BBBE_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18405630)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_19153AD9F199E5FA_OFFSET UNITYSDK_OFFSET(0x18405680)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18405450)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_3C95C6A748D6B666_OFFSET UNITYSDK_OFFSET(0x18404D60)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_55A0435C045FA79B_OFFSET UNITYSDK_OFFSET(0x18405090)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_5DDBDF38041B9054_OFFSET UNITYSDK_OFFSET(0x18405240)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18404DE0)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x184054F0)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18405030)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18405410)
#define CLASS_1_88FDC525C319BBBE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18405590)
#define CLASS_1_88FDC525C319BBBE__CCTOR_OFFSET UNITYSDK_OFFSET(0x184059E0)

inline static constexpr unsigned int Class_1_88FDC525C319BBBE_TypeDefinitionIndex = 14178;

class Class_1_88FDC525C319BBBE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88FDC525C319BBBE_TypeDefinitionIndex)->GetStaticField(0x26B60);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88FDC525C319BBBE_TypeDefinitionIndex)->GetStaticField(0x26B68);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_88FDC525C319BBBE_TypeDefinitionIndex)->GetStaticField(0x26B70);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88FDC525C319BBBE_TypeDefinitionIndex)->GetStaticField(0xA3A0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_88FDC525C319BBBE_TypeDefinitionIndex)->GetStaticField(0xA3A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>* Method_1_3C95C6A748D6B666()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_3C95C6A748D6B666_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*> Method_1_55A0435C045FA79B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchFuncRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_55A0435C045FA79B_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournWorkbenchFuncRow* Method_1_5DDBDF38041B9054(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournWorkbenchFuncRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_5DDBDF38041B9054_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_19153AD9F199E5FA(::RPG::GameCore::RogueTournWorkbenchFuncRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournWorkbenchFuncRow*))((::PBYTE)hIl2Cpp + CLASS_1_88FDC525C319BBBE_METHOD_1_19153AD9F199E5FA_OFFSET))(a1);
	}
};
