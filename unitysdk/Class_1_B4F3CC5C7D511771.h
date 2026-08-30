#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeV2DmgLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B4F3CC5C7D511771_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1ADFE580)
#define CLASS_1_B4F3CC5C7D511771_METHOD_1_759167E1C9D04FC8_OFFSET UNITYSDK_OFFSET(0x1ADFE1E0)
#define CLASS_1_B4F3CC5C7D511771_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1ADFE3B0)
#define CLASS_1_B4F3CC5C7D511771_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1ADFE440)
#define CLASS_1_B4F3CC5C7D511771_METHOD_1_B5337C81717C6A33_OFFSET UNITYSDK_OFFSET(0x1ADFE5D0)
#define CLASS_1_B4F3CC5C7D511771_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1ADFE010)
#define CLASS_1_B4F3CC5C7D511771_METHOD_1_D676972CAA9ACA55_OFFSET UNITYSDK_OFFSET(0x1ADFDD60)
#define CLASS_1_B4F3CC5C7D511771_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1ADFDDE0)
#define CLASS_1_B4F3CC5C7D511771_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1ADFE370)
#define CLASS_1_B4F3CC5C7D511771_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1ADFE4E0)
#define CLASS_1_B4F3CC5C7D511771_METHOD_1_F77A12A0861B28F2_OFFSET UNITYSDK_OFFSET(0x1ADFE070)
#define CLASS_1_B4F3CC5C7D511771__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADFE940)

inline static constexpr unsigned int Class_1_B4F3CC5C7D511771_TypeDefinitionIndex = 11934;

class Class_1_B4F3CC5C7D511771 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4F3CC5C7D511771_TypeDefinitionIndex)->GetStaticField(0x34040);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4F3CC5C7D511771_TypeDefinitionIndex)->GetStaticField(0x34048);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4F3CC5C7D511771_TypeDefinitionIndex)->GetStaticField(0x34050);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4F3CC5C7D511771_TypeDefinitionIndex)->GetStaticField(0xDC60);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B4F3CC5C7D511771_TypeDefinitionIndex)->GetStaticField(0xDC61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*>* Method_1_D676972CAA9ACA55()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_D676972CAA9ACA55_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*> Method_1_F77A12A0861B28F2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2DmgLimitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_F77A12A0861B28F2_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeV2DmgLimitRow* Method_1_759167E1C9D04FC8(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeV2DmgLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_759167E1C9D04FC8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B5337C81717C6A33(::RPG::GameCore::MatchThreeV2DmgLimitRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2DmgLimitRow*))((::PBYTE)hIl2Cpp + CLASS_1_B4F3CC5C7D511771_METHOD_1_B5337C81717C6A33_OFFSET))(a1);
	}
};
