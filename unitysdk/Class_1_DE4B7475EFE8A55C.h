#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournDifficultyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_03D325BB312A2765_OFFSET UNITYSDK_OFFSET(0x182C5B20)
#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x182C60C0)
#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_1C24F7DCB535964C_OFFSET UNITYSDK_OFFSET(0x182C6110)
#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182C5EE0)
#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_5AD1AF2D01707E60_OFFSET UNITYSDK_OFFSET(0x182C57F0)
#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182C5870)
#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182C5F80)
#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182C5AC0)
#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182C5EA0)
#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182C6020)
#define CLASS_1_DE4B7475EFE8A55C_METHOD_1_FEAC1DDB62A4E71E_OFFSET UNITYSDK_OFFSET(0x182C5CD0)
#define CLASS_1_DE4B7475EFE8A55C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182C6470)

inline static constexpr unsigned int Class_1_DE4B7475EFE8A55C_TypeDefinitionIndex = 14161;

class Class_1_DE4B7475EFE8A55C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE4B7475EFE8A55C_TypeDefinitionIndex)->GetStaticField(0x226D0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE4B7475EFE8A55C_TypeDefinitionIndex)->GetStaticField(0x226D8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE4B7475EFE8A55C_TypeDefinitionIndex)->GetStaticField(0x226E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE4B7475EFE8A55C_TypeDefinitionIndex)->GetStaticField(0x8AB0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE4B7475EFE8A55C_TypeDefinitionIndex)->GetStaticField(0x8AB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*>* Method_1_5AD1AF2D01707E60()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_5AD1AF2D01707E60_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*> Method_1_03D325BB312A2765()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournDifficultyRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_03D325BB312A2765_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournDifficultyRow* Method_1_FEAC1DDB62A4E71E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournDifficultyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_FEAC1DDB62A4E71E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_1C24F7DCB535964C(::RPG::GameCore::RogueTournDifficultyRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournDifficultyRow*))((::PBYTE)hIl2Cpp + CLASS_1_DE4B7475EFE8A55C_METHOD_1_1C24F7DCB535964C_OFFSET))(a1);
	}
};
