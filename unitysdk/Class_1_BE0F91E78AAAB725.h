#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRoleTagInfoConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BE0F91E78AAAB725_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CA71650)
#define CLASS_1_BE0F91E78AAAB725_METHOD_1_40309BCAFA4A99CE_OFFSET UNITYSDK_OFFSET(0x1CA71140)
#define CLASS_1_BE0F91E78AAAB725_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CA71480)
#define CLASS_1_BE0F91E78AAAB725_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CA71510)
#define CLASS_1_BE0F91E78AAAB725_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CA710E0)
#define CLASS_1_BE0F91E78AAAB725_METHOD_1_CF3BAEF1FD3F94E9_OFFSET UNITYSDK_OFFSET(0x1CA70E30)
#define CLASS_1_BE0F91E78AAAB725_METHOD_1_D740420AE67A9DDF_OFFSET UNITYSDK_OFFSET(0x1CA716A0)
#define CLASS_1_BE0F91E78AAAB725_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CA70EB0)
#define CLASS_1_BE0F91E78AAAB725_METHOD_1_EF2629E5D2A08A87_OFFSET UNITYSDK_OFFSET(0x1CA712B0)
#define CLASS_1_BE0F91E78AAAB725_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CA71440)
#define CLASS_1_BE0F91E78AAAB725_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CA715B0)
#define CLASS_1_BE0F91E78AAAB725__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA71A10)

inline static constexpr unsigned int Class_1_BE0F91E78AAAB725_TypeDefinitionIndex = 13419;

class Class_1_BE0F91E78AAAB725 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE0F91E78AAAB725_TypeDefinitionIndex)->GetStaticField(0x3D650);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE0F91E78AAAB725_TypeDefinitionIndex)->GetStaticField(0x3D658);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE0F91E78AAAB725_TypeDefinitionIndex)->GetStaticField(0x3D660);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE0F91E78AAAB725_TypeDefinitionIndex)->GetStaticField(0xEF80);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BE0F91E78AAAB725_TypeDefinitionIndex)->GetStaticField(0xEF81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*>* Method_1_CF3BAEF1FD3F94E9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_CF3BAEF1FD3F94E9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*> Method_1_40309BCAFA4A99CE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleTagInfoConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_40309BCAFA4A99CE_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleTagInfoConfigRow* Method_1_EF2629E5D2A08A87(::RPG::GameCore::GridFightRoleSkillTag a1)
	{
		return ((::RPG::GameCore::GridFightRoleTagInfoConfigRow*(*)(::RPG::GameCore::GridFightRoleSkillTag))((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_EF2629E5D2A08A87_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_D740420AE67A9DDF(::RPG::GameCore::GridFightRoleTagInfoConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRoleTagInfoConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_BE0F91E78AAAB725_METHOD_1_D740420AE67A9DDF_OFFSET))(a1);
	}
};
