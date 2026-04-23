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

#define CLASS_1_1FF45D983EE7937E_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19172390)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x191721B0)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_50FA58BD8D707A2B_OFFSET UNITYSDK_OFFSET(0x19171DB0)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_598616174778FFEA_OFFSET UNITYSDK_OFFSET(0x191723E0)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19171B00)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_A1815F3BE718F20E_OFFSET UNITYSDK_OFFSET(0x19171A80)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19172250)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19171D50)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_E6DBC13370F7CE7D_OFFSET UNITYSDK_OFFSET(0x19171F60)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19172170)
#define CLASS_1_1FF45D983EE7937E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x191722F0)
#define CLASS_1_1FF45D983EE7937E__CCTOR_OFFSET UNITYSDK_OFFSET(0x19172790)

inline static constexpr unsigned int Class_1_1FF45D983EE7937E_TypeDefinitionIndex = 14170;

class Class_1_1FF45D983EE7937E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x42C10);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x42C18);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0x42C20);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0xEF90);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1FF45D983EE7937E_TypeDefinitionIndex)->GetStaticField(0xEF91);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*> Method_1_50FA58BD8D707A2B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournRoomRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_50FA58BD8D707A2B_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournRoomRow* Method_1_E6DBC13370F7CE7D(::System::UInt32 a1, ::RPG::GameCore::RogueTournMode a2)
	{
		return ((::RPG::GameCore::RogueTournRoomRow*(*)(::System::UInt32, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_E6DBC13370F7CE7D_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1FF45D983EE7937E_METHOD_1_30D1209326FA87FC_OFFSET))();
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
