#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSeasonPortalConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x183075A0)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_309813A6A62F68D0_OFFSET UNITYSDK_OFFSET(0x18306C20)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x183073C0)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18306CA0)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_773B4B50ECB03D75_OFFSET UNITYSDK_OFFSET(0x183075F0)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_7E5FF02A0C524696_OFFSET UNITYSDK_OFFSET(0x18306F50)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_88E48581EDD34C8B_OFFSET UNITYSDK_OFFSET(0x183070D0)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18307460)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_B18CEEA9877EB410_OFFSET UNITYSDK_OFFSET(0x18307170)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18306EF0)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18307380)
#define CLASS_1_6F5527D3F5C2F77C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18307500)
#define CLASS_1_6F5527D3F5C2F77C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18307950)

inline static constexpr unsigned int Class_1_6F5527D3F5C2F77C_TypeDefinitionIndex = 12903;

class Class_1_6F5527D3F5C2F77C : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F5527D3F5C2F77C_TypeDefinitionIndex)->GetStaticField(0x25B10);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F5527D3F5C2F77C_TypeDefinitionIndex)->GetStaticField(0x25B18);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F5527D3F5C2F77C_TypeDefinitionIndex)->GetStaticField(0x25B20);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F5527D3F5C2F77C_TypeDefinitionIndex)->GetStaticField(0x9E50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6F5527D3F5C2F77C_TypeDefinitionIndex)->GetStaticField(0x9E51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>* Method_1_309813A6A62F68D0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_309813A6A62F68D0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*> Method_1_7E5FF02A0C524696()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_7E5FF02A0C524696_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>, ::RPG::GameCore::GridFightSeasonPortalConfigRow*> Method_1_88E48581EDD34C8B()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>, ::RPG::GameCore::GridFightSeasonPortalConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_88E48581EDD34C8B_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSeasonPortalConfigRow* Method_1_B18CEEA9877EB410(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightSeasonPortalConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_B18CEEA9877EB410_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_773B4B50ECB03D75(::RPG::GameCore::GridFightSeasonPortalConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonPortalConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_6F5527D3F5C2F77C_METHOD_1_773B4B50ECB03D75_OFFSET))(a1);
	}
};
