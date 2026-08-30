#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TitanAtlasChangeInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B1E21042EE0308B2_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CD44B60)
#define CLASS_1_B1E21042EE0308B2_METHOD_1_222EA53FD721D8A6_OFFSET UNITYSDK_OFFSET(0x1CD44FB0)
#define CLASS_1_B1E21042EE0308B2_METHOD_1_2DFDEE7E3419A5DF_OFFSET UNITYSDK_OFFSET(0x1CD44BB0)
#define CLASS_1_B1E21042EE0308B2_METHOD_1_32A1EF145AEC707A_OFFSET UNITYSDK_OFFSET(0x1CD44ED0)
#define CLASS_1_B1E21042EE0308B2_METHOD_1_37A501EC19F0CF43_OFFSET UNITYSDK_OFFSET(0x1CD450E0)
#define CLASS_1_B1E21042EE0308B2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CD44990)
#define CLASS_1_B1E21042EE0308B2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CD44A20)
#define CLASS_1_B1E21042EE0308B2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CD44F50)
#define CLASS_1_B1E21042EE0308B2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CD44760)
#define CLASS_1_B1E21042EE0308B2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CD44720)
#define CLASS_1_B1E21042EE0308B2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CD44AC0)
#define CLASS_1_B1E21042EE0308B2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD45270)

inline static constexpr unsigned int Class_1_B1E21042EE0308B2_TypeDefinitionIndex = 15133;

class Class_1_B1E21042EE0308B2 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1E21042EE0308B2_TypeDefinitionIndex)->GetStaticField(0x48890);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1E21042EE0308B2_TypeDefinitionIndex)->GetStaticField(0x48898);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1E21042EE0308B2_TypeDefinitionIndex)->GetStaticField(0x488A0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1E21042EE0308B2_TypeDefinitionIndex)->GetStaticField(0x10A80);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B1E21042EE0308B2_TypeDefinitionIndex)->GetStaticField(0x10A81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_2DFDEE7E3419A5DF(::RPG::GameCore::TitanAtlasChangeInfoRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TitanAtlasChangeInfoRow*))((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_2DFDEE7E3419A5DF_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>* Method_1_32A1EF145AEC707A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_32A1EF145AEC707A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*> Method_1_222EA53FD721D8A6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TitanAtlasChangeInfoRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_222EA53FD721D8A6_OFFSET))();
	}

	static ::RPG::GameCore::TitanAtlasChangeInfoRow* Method_1_37A501EC19F0CF43(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TitanAtlasChangeInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B1E21042EE0308B2_METHOD_1_37A501EC19F0CF43_OFFSET))(a1);
	}
};
