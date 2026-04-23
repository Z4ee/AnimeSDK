#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class EvolveBuildRewardBoxRandomItemRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5A077825D3E7BE8A_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1831CD40)
#define CLASS_1_5A077825D3E7BE8A_METHOD_1_275F23208B82B7CE_OFFSET UNITYSDK_OFFSET(0x1831CD90)
#define CLASS_1_5A077825D3E7BE8A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1831CB60)
#define CLASS_1_5A077825D3E7BE8A_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1831C4F0)
#define CLASS_1_5A077825D3E7BE8A_METHOD_1_AA4F0E658D1CD13A_OFFSET UNITYSDK_OFFSET(0x1831C470)
#define CLASS_1_5A077825D3E7BE8A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1831CC00)
#define CLASS_1_5A077825D3E7BE8A_METHOD_1_B3C89D89EC586490_OFFSET UNITYSDK_OFFSET(0x1831C950)
#define CLASS_1_5A077825D3E7BE8A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1831C740)
#define CLASS_1_5A077825D3E7BE8A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1831CB20)
#define CLASS_1_5A077825D3E7BE8A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1831CCA0)
#define CLASS_1_5A077825D3E7BE8A_METHOD_1_F4F005CAB1B3BDCF_OFFSET UNITYSDK_OFFSET(0x1831C7A0)
#define CLASS_1_5A077825D3E7BE8A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1831D0F0)

inline static constexpr unsigned int Class_1_5A077825D3E7BE8A_TypeDefinitionIndex = 10947;

class Class_1_5A077825D3E7BE8A : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A077825D3E7BE8A_TypeDefinitionIndex)->GetStaticField(0x268B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A077825D3E7BE8A_TypeDefinitionIndex)->GetStaticField(0x268B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A077825D3E7BE8A_TypeDefinitionIndex)->GetStaticField(0x268C0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A077825D3E7BE8A_TypeDefinitionIndex)->GetStaticField(0xA2E0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5A077825D3E7BE8A_TypeDefinitionIndex)->GetStaticField(0xA2E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*>* Method_1_AA4F0E658D1CD13A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_AA4F0E658D1CD13A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*> Method_1_F4F005CAB1B3BDCF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_F4F005CAB1B3BDCF_OFFSET))();
	}

	static ::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow* Method_1_B3C89D89EC586490(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_B3C89D89EC586490_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_275F23208B82B7CE(::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::EvolveBuildRewardBoxRandomItemRow*))((::PBYTE)hIl2Cpp + CLASS_1_5A077825D3E7BE8A_METHOD_1_275F23208B82B7CE_OFFSET))(a1);
	}
};
