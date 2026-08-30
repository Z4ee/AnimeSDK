#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamBuildConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_41C2D7C6D735FB46_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16F31970)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_4B399DA5B2D15FBF_OFFSET UNITYSDK_OFFSET(0x16F31E40)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x16F317A0)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_A7CEAEA931C92133_OFFSET UNITYSDK_OFFSET(0x16F31FB0)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16F31830)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16F31DE0)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_D9376211BC3AA092_OFFSET UNITYSDK_OFFSET(0x16F319C0)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x16F31570)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_EFD334B8AC6DE916_OFFSET UNITYSDK_OFFSET(0x16F31D60)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16F31530)
#define CLASS_1_41C2D7C6D735FB46_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16F318D0)
#define CLASS_1_41C2D7C6D735FB46__CCTOR_OFFSET UNITYSDK_OFFSET(0x16F32180)

inline static constexpr unsigned int Class_1_41C2D7C6D735FB46_TypeDefinitionIndex = 15104;

class Class_1_41C2D7C6D735FB46 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41C2D7C6D735FB46_TypeDefinitionIndex)->GetStaticField(0x3ACE0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41C2D7C6D735FB46_TypeDefinitionIndex)->GetStaticField(0x3ACE8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_41C2D7C6D735FB46_TypeDefinitionIndex)->GetStaticField(0x3ACF0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_41C2D7C6D735FB46_TypeDefinitionIndex)->GetStaticField(0xF110);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_41C2D7C6D735FB46_TypeDefinitionIndex)->GetStaticField(0xF111);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D9376211BC3AA092(::RPG::GameCore::TeamBuildConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TeamBuildConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_D9376211BC3AA092_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>* Method_1_EFD334B8AC6DE916()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_EFD334B8AC6DE916_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*> Method_1_4B399DA5B2D15FBF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamBuildConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_4B399DA5B2D15FBF_OFFSET))();
	}

	static ::RPG::GameCore::TeamBuildConfigRow* Method_1_A7CEAEA931C92133(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::TeamBuildConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_41C2D7C6D735FB46_METHOD_1_A7CEAEA931C92133_OFFSET))(a1, a2);
	}
};
