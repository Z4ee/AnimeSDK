#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FinishActionType.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FinishActionConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_518401162B6635D0_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x17720E80)
#define CLASS_1_518401162B6635D0_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17720CA0)
#define CLASS_1_518401162B6635D0_METHOD_1_4D4186D84E925CF1_OFFSET UNITYSDK_OFFSET(0x177208E0)
#define CLASS_1_518401162B6635D0_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17720630)
#define CLASS_1_518401162B6635D0_METHOD_1_92458B2B2E1BA3D1_OFFSET UNITYSDK_OFFSET(0x17720A90)
#define CLASS_1_518401162B6635D0_METHOD_1_A07CD3ECAA97A028_OFFSET UNITYSDK_OFFSET(0x17720ED0)
#define CLASS_1_518401162B6635D0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17720D40)
#define CLASS_1_518401162B6635D0_METHOD_1_B4BD16B2102BB5D4_OFFSET UNITYSDK_OFFSET(0x177205B0)
#define CLASS_1_518401162B6635D0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17720880)
#define CLASS_1_518401162B6635D0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17720C60)
#define CLASS_1_518401162B6635D0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17720DE0)
#define CLASS_1_518401162B6635D0__CCTOR_OFFSET UNITYSDK_OFFSET(0x17721230)

inline static constexpr unsigned int Class_1_518401162B6635D0_TypeDefinitionIndex = 12963;

class Class_1_518401162B6635D0 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_518401162B6635D0_TypeDefinitionIndex)->GetStaticField(0x201E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_518401162B6635D0_TypeDefinitionIndex)->GetStaticField(0x201E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_518401162B6635D0_TypeDefinitionIndex)->GetStaticField(0x201F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_518401162B6635D0_TypeDefinitionIndex)->GetStaticField(0x8740);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_518401162B6635D0_TypeDefinitionIndex)->GetStaticField(0x8741);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*>* Method_1_B4BD16B2102BB5D4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_B4BD16B2102BB5D4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*> Method_1_4D4186D84E925CF1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FinishActionConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_4D4186D84E925CF1_OFFSET))();
	}

	static ::RPG::GameCore::FinishActionConfigRow* Method_1_92458B2B2E1BA3D1(::RPG::GameCore::FinishActionType a1)
	{
		return ((::RPG::GameCore::FinishActionConfigRow*(*)(::RPG::GameCore::FinishActionType))((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_92458B2B2E1BA3D1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A07CD3ECAA97A028(::RPG::GameCore::FinishActionConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FinishActionConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_518401162B6635D0_METHOD_1_A07CD3ECAA97A028_OFFSET))(a1);
	}
};
