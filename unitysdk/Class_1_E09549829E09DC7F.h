#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerReturnInviteRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E09549829E09DC7F_METHOD_1_0BBFE13607AC534F_OFFSET UNITYSDK_OFFSET(0x18403F80)
#define CLASS_1_E09549829E09DC7F_METHOD_1_125A7038A1C00982_OFFSET UNITYSDK_OFFSET(0x18404430)
#define CLASS_1_E09549829E09DC7F_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x184048C0)
#define CLASS_1_E09549829E09DC7F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x184046E0)
#define CLASS_1_E09549829E09DC7F_METHOD_1_670057D2CA3C5063_OFFSET UNITYSDK_OFFSET(0x184042B0)
#define CLASS_1_E09549829E09DC7F_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18404000)
#define CLASS_1_E09549829E09DC7F_METHOD_1_8E402696BEE5B041_OFFSET UNITYSDK_OFFSET(0x184044D0)
#define CLASS_1_E09549829E09DC7F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18404780)
#define CLASS_1_E09549829E09DC7F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18404250)
#define CLASS_1_E09549829E09DC7F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x184046A0)
#define CLASS_1_E09549829E09DC7F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18404820)
#define CLASS_1_E09549829E09DC7F_METHOD_1_F6B397180FA8C33C_OFFSET UNITYSDK_OFFSET(0x18404910)
#define CLASS_1_E09549829E09DC7F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18404C20)

inline static constexpr unsigned int Class_1_E09549829E09DC7F_TypeDefinitionIndex = 13742;

class Class_1_E09549829E09DC7F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E09549829E09DC7F_TypeDefinitionIndex)->GetStaticField(0x26A30);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E09549829E09DC7F_TypeDefinitionIndex)->GetStaticField(0x26A38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E09549829E09DC7F_TypeDefinitionIndex)->GetStaticField(0x26A40);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E09549829E09DC7F_TypeDefinitionIndex)->GetStaticField(0xA360);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E09549829E09DC7F_TypeDefinitionIndex)->GetStaticField(0xA361);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>* Method_1_0BBFE13607AC534F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_0BBFE13607AC534F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*> Method_1_670057D2CA3C5063()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_670057D2CA3C5063_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>, ::RPG::GameCore::PlayerReturnInviteRow*> Method_1_125A7038A1C00982()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnInviteRow*>, ::RPG::GameCore::PlayerReturnInviteRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_125A7038A1C00982_OFFSET))();
	}

	static ::RPG::GameCore::PlayerReturnInviteRow* Method_1_8E402696BEE5B041(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerReturnInviteRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_8E402696BEE5B041_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_F6B397180FA8C33C(::RPG::GameCore::PlayerReturnInviteRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerReturnInviteRow*))((::PBYTE)hIl2Cpp + CLASS_1_E09549829E09DC7F_METHOD_1_F6B397180FA8C33C_OFFSET))(a1);
	}
};
