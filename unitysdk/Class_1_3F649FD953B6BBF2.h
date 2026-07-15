#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PixAirNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PixAirNodeTypeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3F649FD953B6BBF2_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B469540)
#define CLASS_1_3F649FD953B6BBF2_METHOD_1_1D07ABA4DB78AE66_OFFSET UNITYSDK_OFFSET(0x1B4691A0)
#define CLASS_1_3F649FD953B6BBF2_METHOD_1_61861BF5F071D992_OFFSET UNITYSDK_OFFSET(0x1B468D20)
#define CLASS_1_3F649FD953B6BBF2_METHOD_1_85773DB1FA936E1F_OFFSET UNITYSDK_OFFSET(0x1B469030)
#define CLASS_1_3F649FD953B6BBF2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B469370)
#define CLASS_1_3F649FD953B6BBF2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B469400)
#define CLASS_1_3F649FD953B6BBF2_METHOD_1_BD8E107329E2FE66_OFFSET UNITYSDK_OFFSET(0x1B469590)
#define CLASS_1_3F649FD953B6BBF2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B468FD0)
#define CLASS_1_3F649FD953B6BBF2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B468DA0)
#define CLASS_1_3F649FD953B6BBF2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B469330)
#define CLASS_1_3F649FD953B6BBF2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B4694A0)
#define CLASS_1_3F649FD953B6BBF2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B469900)

inline static constexpr unsigned int Class_1_3F649FD953B6BBF2_TypeDefinitionIndex = 11664;

class Class_1_3F649FD953B6BBF2 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F649FD953B6BBF2_TypeDefinitionIndex)->GetStaticField(0x3F660);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F649FD953B6BBF2_TypeDefinitionIndex)->GetStaticField(0x3F668);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F649FD953B6BBF2_TypeDefinitionIndex)->GetStaticField(0x3F670);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F649FD953B6BBF2_TypeDefinitionIndex)->GetStaticField(0xA7D0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3F649FD953B6BBF2_TypeDefinitionIndex)->GetStaticField(0xA7D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*>* Method_1_61861BF5F071D992()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_61861BF5F071D992_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*> Method_1_85773DB1FA936E1F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PixAirNodeTypeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_85773DB1FA936E1F_OFFSET))();
	}

	static ::RPG::GameCore::PixAirNodeTypeConfigRow* Method_1_1D07ABA4DB78AE66(::RPG::GameCore::PixAirNodeType a1)
	{
		return ((::RPG::GameCore::PixAirNodeTypeConfigRow*(*)(::RPG::GameCore::PixAirNodeType))((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_1D07ABA4DB78AE66_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_BD8E107329E2FE66(::RPG::GameCore::PixAirNodeTypeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PixAirNodeTypeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_3F649FD953B6BBF2_METHOD_1_BD8E107329E2FE66_OFFSET))(a1);
	}
};
