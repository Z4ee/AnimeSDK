#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicLayerRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7A192EE2B1FF831A_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B5C1A50)
#define CLASS_1_7A192EE2B1FF831A_METHOD_1_29CB65624BDFE66A_OFFSET UNITYSDK_OFFSET(0x1B5C11F0)
#define CLASS_1_7A192EE2B1FF831A_METHOD_1_4888856990FA50F3_OFFSET UNITYSDK_OFFSET(0x1B5C1670)
#define CLASS_1_7A192EE2B1FF831A_METHOD_1_793D503875E8155E_OFFSET UNITYSDK_OFFSET(0x1B5C1AA0)
#define CLASS_1_7A192EE2B1FF831A_METHOD_1_863261EFFB79C9D7_OFFSET UNITYSDK_OFFSET(0x1B5C1500)
#define CLASS_1_7A192EE2B1FF831A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B5C1880)
#define CLASS_1_7A192EE2B1FF831A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B5C1910)
#define CLASS_1_7A192EE2B1FF831A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B5C14A0)
#define CLASS_1_7A192EE2B1FF831A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B5C1270)
#define CLASS_1_7A192EE2B1FF831A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B5C1840)
#define CLASS_1_7A192EE2B1FF831A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B5C19B0)
#define CLASS_1_7A192EE2B1FF831A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5C1E40)

inline static constexpr unsigned int Class_1_7A192EE2B1FF831A_TypeDefinitionIndex = 14272;

class Class_1_7A192EE2B1FF831A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A192EE2B1FF831A_TypeDefinitionIndex)->GetStaticField(0x41A50);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A192EE2B1FF831A_TypeDefinitionIndex)->GetStaticField(0x41A58);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A192EE2B1FF831A_TypeDefinitionIndex)->GetStaticField(0x41A60);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A192EE2B1FF831A_TypeDefinitionIndex)->GetStaticField(0xB270);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7A192EE2B1FF831A_TypeDefinitionIndex)->GetStaticField(0xB271);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>* Method_1_29CB65624BDFE66A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_29CB65624BDFE66A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*> Method_1_863261EFFB79C9D7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicLayerRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_863261EFFB79C9D7_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicLayerRoomRow* Method_1_4888856990FA50F3(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RogueMagicLayerRoomRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_4888856990FA50F3_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_793D503875E8155E(::RPG::GameCore::RogueMagicLayerRoomRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicLayerRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_7A192EE2B1FF831A_METHOD_1_793D503875E8155E_OFFSET))(a1);
	}
};
