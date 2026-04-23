#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightElationPropertyExtraEffectConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8A91FCD9896B3474_METHOD_1_1AD3CAF2B0982C3F_OFFSET UNITYSDK_OFFSET(0x18529320)
#define CLASS_1_8A91FCD9896B3474_METHOD_1_33F68CBA78A78894_OFFSET UNITYSDK_OFFSET(0x18529D90)
#define CLASS_1_8A91FCD9896B3474_METHOD_1_563FD2603CABCE25_OFFSET UNITYSDK_OFFSET(0x18529210)
#define CLASS_1_8A91FCD9896B3474_METHOD_1_5AD297B90767E73A_OFFSET UNITYSDK_OFFSET(0x18529BF0)
#define CLASS_1_8A91FCD9896B3474_METHOD_1_748B8A2AB3F1AB26_OFFSET UNITYSDK_OFFSET(0x18529CC0)
#define CLASS_1_8A91FCD9896B3474_METHOD_1_7F4098A5873665D6_OFFSET UNITYSDK_OFFSET(0x18529690)
#define CLASS_1_8A91FCD9896B3474_METHOD_1_AF8BCF9683567EF8_OFFSET UNITYSDK_OFFSET(0x18529880)
#define CLASS_1_8A91FCD9896B3474_METHOD_1_B835425B86B4A5E1_OFFSET UNITYSDK_OFFSET(0x18529E00)
#define CLASS_1_8A91FCD9896B3474_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x18529610)
#define CLASS_1_8A91FCD9896B3474_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18529AB0)
#define CLASS_1_8A91FCD9896B3474_METHOD_1_D0BD1377F2594D33_OFFSET UNITYSDK_OFFSET(0x18529B10)
#define CLASS_1_8A91FCD9896B3474__CCTOR_OFFSET UNITYSDK_OFFSET(0x1852A160)

inline static constexpr unsigned int Class_1_8A91FCD9896B3474_TypeDefinitionIndex = 12978;

class Class_1_8A91FCD9896B3474 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A91FCD9896B3474_TypeDefinitionIndex)->GetStaticField(0x175D0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A91FCD9896B3474_TypeDefinitionIndex)->GetStaticField(0x175D8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A91FCD9896B3474_TypeDefinitionIndex)->GetStaticField(0x175E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A91FCD9896B3474_TypeDefinitionIndex)->GetStaticField(0x65D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A91FCD9896B3474_TypeDefinitionIndex)->GetStaticField(0x65D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>* Method_1_563FD2603CABCE25()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_563FD2603CABCE25_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*> Method_1_7F4098A5873665D6()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_7F4098A5873665D6_OFFSET))();
	}

	static ::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow* Method_1_AF8BCF9683567EF8(::RPG::GameCore::AvatarPropertyType a1)
	{
		return ((::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_AF8BCF9683567EF8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_1AD3CAF2B0982C3F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_1AD3CAF2B0982C3F_OFFSET))();
	}

	static ::System::Void Method_1_D0BD1377F2594D33()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_D0BD1377F2594D33_OFFSET))();
	}

	static ::System::Void Method_1_5AD297B90767E73A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_5AD297B90767E73A_OFFSET))(a1);
	}

	static ::System::Void Method_1_748B8A2AB3F1AB26(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_748B8A2AB3F1AB26_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_33F68CBA78A78894(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_33F68CBA78A78894_OFFSET))(a1);
	}

	static ::System::Void Method_1_B835425B86B4A5E1(::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightElationPropertyExtraEffectConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8A91FCD9896B3474_METHOD_1_B835425B86B4A5E1_OFFSET))(a1);
	}
};
