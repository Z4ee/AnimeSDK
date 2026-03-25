#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraAbilityDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B823B4A506187A72_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16BC5CA0)
#define CLASS_1_B823B4A506187A72_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BC5AC0)
#define CLASS_1_B823B4A506187A72_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BC5450)
#define CLASS_1_B823B4A506187A72_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BC5B60)
#define CLASS_1_B823B4A506187A72_METHOD_1_B0C56388529EAFA1_OFFSET UNITYSDK_OFFSET(0x16BC5700)
#define CLASS_1_B823B4A506187A72_METHOD_1_B19EA6B0C5FAE23A_OFFSET UNITYSDK_OFFSET(0x16BC5CF0)
#define CLASS_1_B823B4A506187A72_METHOD_1_BC2D71D9B0586F14_OFFSET UNITYSDK_OFFSET(0x16BC58B0)
#define CLASS_1_B823B4A506187A72_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BC56A0)
#define CLASS_1_B823B4A506187A72_METHOD_1_E510C3DCD1466FE4_OFFSET UNITYSDK_OFFSET(0x16BC53D0)
#define CLASS_1_B823B4A506187A72_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BC5A80)
#define CLASS_1_B823B4A506187A72_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BC5C00)
#define CLASS_1_B823B4A506187A72__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BC6050)

inline static constexpr unsigned int Class_1_B823B4A506187A72_TypeDefinitionIndex = 11873;

class Class_1_B823B4A506187A72 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B823B4A506187A72_TypeDefinitionIndex)->GetStaticField(0x27940);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B823B4A506187A72_TypeDefinitionIndex)->GetStaticField(0x27948);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B823B4A506187A72_TypeDefinitionIndex)->GetStaticField(0x27950);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B823B4A506187A72_TypeDefinitionIndex)->GetStaticField(0xCF30);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B823B4A506187A72_TypeDefinitionIndex)->GetStaticField(0xCF31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*>* Method_1_E510C3DCD1466FE4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_E510C3DCD1466FE4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*> Method_1_B0C56388529EAFA1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraAbilityDisplayRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_B0C56388529EAFA1_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraAbilityDisplayRow* Method_1_BC2D71D9B0586F14(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraAbilityDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_BC2D71D9B0586F14_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B19EA6B0C5FAE23A(::RPG::GameCore::ChimeraAbilityDisplayRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraAbilityDisplayRow*))((::PBYTE)hIl2Cpp + CLASS_1_B823B4A506187A72_METHOD_1_B19EA6B0C5FAE23A_OFFSET))(a1);
	}
};
