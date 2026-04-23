#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarPathItemTransferRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A847DE9D7A907579_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18372810)
#define CLASS_1_A847DE9D7A907579_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18372630)
#define CLASS_1_A847DE9D7A907579_METHOD_1_4FE5C3F47478784C_OFFSET UNITYSDK_OFFSET(0x18372420)
#define CLASS_1_A847DE9D7A907579_METHOD_1_60DB4F72AD83F701_OFFSET UNITYSDK_OFFSET(0x18371F40)
#define CLASS_1_A847DE9D7A907579_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18371FC0)
#define CLASS_1_A847DE9D7A907579_METHOD_1_92F3366D4E2BC4FA_OFFSET UNITYSDK_OFFSET(0x18372270)
#define CLASS_1_A847DE9D7A907579_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x183726D0)
#define CLASS_1_A847DE9D7A907579_METHOD_1_B14758E8CD9775EC_OFFSET UNITYSDK_OFFSET(0x18372860)
#define CLASS_1_A847DE9D7A907579_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18372210)
#define CLASS_1_A847DE9D7A907579_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x183725F0)
#define CLASS_1_A847DE9D7A907579_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18372770)
#define CLASS_1_A847DE9D7A907579__CCTOR_OFFSET UNITYSDK_OFFSET(0x18372BC0)

inline static constexpr unsigned int Class_1_A847DE9D7A907579_TypeDefinitionIndex = 12099;

class Class_1_A847DE9D7A907579 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A847DE9D7A907579_TypeDefinitionIndex)->GetStaticField(0x2E5B0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A847DE9D7A907579_TypeDefinitionIndex)->GetStaticField(0x2E5B8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A847DE9D7A907579_TypeDefinitionIndex)->GetStaticField(0x2E5C0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A847DE9D7A907579_TypeDefinitionIndex)->GetStaticField(0xB800);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A847DE9D7A907579_TypeDefinitionIndex)->GetStaticField(0xB801);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*>* Method_1_60DB4F72AD83F701()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_60DB4F72AD83F701_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*> Method_1_92F3366D4E2BC4FA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarPathItemTransferRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_92F3366D4E2BC4FA_OFFSET))();
	}

	static ::RPG::GameCore::AvatarPathItemTransferRow* Method_1_4FE5C3F47478784C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::AvatarPathItemTransferRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_4FE5C3F47478784C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B14758E8CD9775EC(::RPG::GameCore::AvatarPathItemTransferRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarPathItemTransferRow*))((::PBYTE)hIl2Cpp + CLASS_1_A847DE9D7A907579_METHOD_1_B14758E8CD9775EC_OFFSET))(a1);
	}
};
