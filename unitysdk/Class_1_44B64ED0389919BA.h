#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournNPCRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_44B64ED0389919BA_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1ADFFA00)
#define CLASS_1_44B64ED0389919BA_METHOD_1_34D869CBA8829B45_OFFSET UNITYSDK_OFFSET(0x1ADFF6A0)
#define CLASS_1_44B64ED0389919BA_METHOD_1_5A82BD41E8FC2DDA_OFFSET UNITYSDK_OFFSET(0x1ADFF220)
#define CLASS_1_44B64ED0389919BA_METHOD_1_82AAD6AE0B0968CB_OFFSET UNITYSDK_OFFSET(0x1ADFF530)
#define CLASS_1_44B64ED0389919BA_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1ADFF830)
#define CLASS_1_44B64ED0389919BA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1ADFF8C0)
#define CLASS_1_44B64ED0389919BA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1ADFF4D0)
#define CLASS_1_44B64ED0389919BA_METHOD_1_D3626B152DF40527_OFFSET UNITYSDK_OFFSET(0x1ADFFA50)
#define CLASS_1_44B64ED0389919BA_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1ADFF2A0)
#define CLASS_1_44B64ED0389919BA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1ADFF7F0)
#define CLASS_1_44B64ED0389919BA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1ADFF960)
#define CLASS_1_44B64ED0389919BA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ADFFD70)

inline static constexpr unsigned int Class_1_44B64ED0389919BA_TypeDefinitionIndex = 14873;

class Class_1_44B64ED0389919BA : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44B64ED0389919BA_TypeDefinitionIndex)->GetStaticField(0x34130);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44B64ED0389919BA_TypeDefinitionIndex)->GetStaticField(0x34138);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44B64ED0389919BA_TypeDefinitionIndex)->GetStaticField(0x34140);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44B64ED0389919BA_TypeDefinitionIndex)->GetStaticField(0xDC80);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44B64ED0389919BA_TypeDefinitionIndex)->GetStaticField(0xDC81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*>* Method_1_5A82BD41E8FC2DDA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_5A82BD41E8FC2DDA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*> Method_1_82AAD6AE0B0968CB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournNPCRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_82AAD6AE0B0968CB_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournNPCRow* Method_1_34D869CBA8829B45(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournNPCRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_34D869CBA8829B45_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_D3626B152DF40527(::RPG::GameCore::RogueTournNPCRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournNPCRow*))((::PBYTE)hIl2Cpp + CLASS_1_44B64ED0389919BA_METHOD_1_D3626B152DF40527_OFFSET))(a1);
	}
};
