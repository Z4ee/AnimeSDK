#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/TeamLimitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TeamLimitTypeEventRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0A04D76B880523ED_METHOD_1_10B5118FB8B67302_OFFSET UNITYSDK_OFFSET(0x1B52D3B0)
#define CLASS_1_0A04D76B880523ED_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1B52CF60)
#define CLASS_1_0A04D76B880523ED_METHOD_1_22AFA6469060B97C_OFFSET UNITYSDK_OFFSET(0x1B52D520)
#define CLASS_1_0A04D76B880523ED_METHOD_1_87D4D0062BB4E4E1_OFFSET UNITYSDK_OFFSET(0x1B52D2D0)
#define CLASS_1_0A04D76B880523ED_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B52CD90)
#define CLASS_1_0A04D76B880523ED_METHOD_1_9A298CE5DDAE5ACE_OFFSET UNITYSDK_OFFSET(0x1B52CFB0)
#define CLASS_1_0A04D76B880523ED_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B52CE20)
#define CLASS_1_0A04D76B880523ED_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B52D350)
#define CLASS_1_0A04D76B880523ED_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B52CB60)
#define CLASS_1_0A04D76B880523ED_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B52CB20)
#define CLASS_1_0A04D76B880523ED_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B52CEC0)
#define CLASS_1_0A04D76B880523ED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B52D670)

inline static constexpr unsigned int Class_1_0A04D76B880523ED_TypeDefinitionIndex = 14673;

class Class_1_0A04D76B880523ED : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A04D76B880523ED_TypeDefinitionIndex)->GetStaticField(0x4B140);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A04D76B880523ED_TypeDefinitionIndex)->GetStaticField(0x4B148);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A04D76B880523ED_TypeDefinitionIndex)->GetStaticField(0x4B150);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A04D76B880523ED_TypeDefinitionIndex)->GetStaticField(0xD3B0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0A04D76B880523ED_TypeDefinitionIndex)->GetStaticField(0xD3B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_9A298CE5DDAE5ACE(::RPG::GameCore::TeamLimitTypeEventRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TeamLimitTypeEventRow*))((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_9A298CE5DDAE5ACE_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>* Method_1_87D4D0062BB4E4E1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_87D4D0062BB4E4E1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*> Method_1_10B5118FB8B67302()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TeamLimitTypeEventRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_10B5118FB8B67302_OFFSET))();
	}

	static ::RPG::GameCore::TeamLimitTypeEventRow* Method_1_22AFA6469060B97C(::RPG::GameCore::TeamLimitType a1)
	{
		return ((::RPG::GameCore::TeamLimitTypeEventRow*(*)(::RPG::GameCore::TeamLimitType))((::PBYTE)hIl2Cpp + CLASS_1_0A04D76B880523ED_METHOD_1_22AFA6469060B97C_OFFSET))(a1);
	}
};
