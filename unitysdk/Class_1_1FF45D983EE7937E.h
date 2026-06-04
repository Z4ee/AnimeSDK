#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournRoomRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1FF45D983EE7937E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1911F300)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_142B1857A759B274_OFFSET UNITYSDK_OFFSET(0x1911EF10)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_4A91A8AE1C8EBCCF_OFFSET UNITYSDK_OFFSET(0x1911EDA0)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_598616174778FFEA_OFFSET UNITYSDK_OFFSET(0x1911F350)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1911F130)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_A1815F3BE718F20E_OFFSET UNITYSDK_OFFSET(0x1911EA90)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1911F1C0)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1911ED40)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1911EB10)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1911F0F0)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1911F260)
#define CLASS_1_1FF45D983EE7937E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1911F700)

inline static constexpr unsigned int Class_1_1FF45D983EE7937E_TypeDefinitionIndex = 14230;

class Class_1_1FF45D983EE7937E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x53970);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x53978);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x53980);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x10920);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x10921);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>* Method_1_A1815F3BE718F20E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_A1815F3BE718F20E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*> Method_1_4A91A8AE1C8EBCCF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_4A91A8AE1C8EBCCF_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournRoomRow* Method_1_142B1857A759B274(::System::UInt32 a1, ::RPG::GameCore::RogueTournMode a2)
	{
		return ((::RPG::GameCore::RogueTournRoomRow*(*)(::System::UInt32, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_142B1857A759B274_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_598616174778FFEA(::RPG::GameCore::RogueTournRoomRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournRoomRow*))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_598616174778FFEA_OFFSET))(a1);
	}
};
