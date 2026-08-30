#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightElationPropertyExtraEffectConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8D15329425ACB653_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CAE3730)
#define CLASS_1_8D15329425ACB653_METHOD_1_31C597E0B3C4FA00_OFFSET UNITYSDK_OFFSET(0x1CAE3220)
#define CLASS_1_8D15329425ACB653_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CAE3560)
#define CLASS_1_8D15329425ACB653_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CAE35F0)
#define CLASS_1_8D15329425ACB653_METHOD_1_B835425B86B4A5E1_OFFSET UNITYSDK_OFFSET(0x1CAE3780)
#define CLASS_1_8D15329425ACB653_METHOD_1_CDD20A06DFD2C513_OFFSET UNITYSDK_OFFSET(0x1CAE2F10)
#define CLASS_1_8D15329425ACB653_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CAE31C0)
#define CLASS_1_8D15329425ACB653_METHOD_1_D2D39520C6C46A90_OFFSET UNITYSDK_OFFSET(0x1CAE3390)
#define CLASS_1_8D15329425ACB653_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CAE2F90)
#define CLASS_1_8D15329425ACB653_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CAE3520)
#define CLASS_1_8D15329425ACB653_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CAE3690)
#define CLASS_1_8D15329425ACB653__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAE3AF0)

inline static constexpr unsigned int Class_1_8D15329425ACB653_TypeDefinitionIndex = 13603;

class Class_1_8D15329425ACB653 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D15329425ACB653_TypeDefinitionIndex)->GetStaticField(0x487C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D15329425ACB653_TypeDefinitionIndex)->GetStaticField(0x487C8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D15329425ACB653_TypeDefinitionIndex)->GetStaticField(0x487D0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D15329425ACB653_TypeDefinitionIndex)->GetStaticField(0x10A40);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8D15329425ACB653_TypeDefinitionIndex)->GetStaticField(0x10A41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>* Method_1_CDD20A06DFD2C513()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_CDD20A06DFD2C513_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*> Method_1_31C597E0B3C4FA00()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_31C597E0B3C4FA00_OFFSET))();
	}

	static ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow* Method_1_D2D39520C6C46A90(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_D2D39520C6C46A90_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B835425B86B4A5E1(::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8D15329425ACB653_METHOD_1_B835425B86B4A5E1_OFFSET))(a1);
	}
};
