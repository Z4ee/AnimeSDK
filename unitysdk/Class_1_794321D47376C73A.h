#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TalkRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_794321D47376C73A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x182012C0)
#define CLASS_1_794321D47376C73A_METHOD_1_1A3A0D66AB1FB320_OFFSET UNITYSDK_OFFSET(0x18200ED0)
#define CLASS_1_794321D47376C73A_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182010E0)
#define CLASS_1_794321D47376C73A_METHOD_1_41BAC1B0AE45FCEB_OFFSET UNITYSDK_OFFSET(0x18200D20)
#define CLASS_1_794321D47376C73A_METHOD_1_44AFD66745E09762_OFFSET UNITYSDK_OFFSET(0x182009F0)
#define CLASS_1_794321D47376C73A_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18200A70)
#define CLASS_1_794321D47376C73A_METHOD_1_8D6E1FB68EDE9D8E_OFFSET UNITYSDK_OFFSET(0x18201310)
#define CLASS_1_794321D47376C73A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18201180)
#define CLASS_1_794321D47376C73A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18200CC0)
#define CLASS_1_794321D47376C73A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182010A0)
#define CLASS_1_794321D47376C73A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18201220)
#define CLASS_1_794321D47376C73A__CCTOR_OFFSET UNITYSDK_OFFSET(0x18201670)

inline static constexpr unsigned int Class_1_794321D47376C73A_TypeDefinitionIndex = 14413;

class Class_1_794321D47376C73A : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_794321D47376C73A_TypeDefinitionIndex)->GetStaticField(0x20810);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_794321D47376C73A_TypeDefinitionIndex)->GetStaticField(0x20818);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_794321D47376C73A_TypeDefinitionIndex)->GetStaticField(0x20820);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_794321D47376C73A_TypeDefinitionIndex)->GetStaticField(0x7E50);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_794321D47376C73A_TypeDefinitionIndex)->GetStaticField(0x7E51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*>* Method_1_44AFD66745E09762()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_44AFD66745E09762_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*> Method_1_41BAC1B0AE45FCEB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TalkRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_41BAC1B0AE45FCEB_OFFSET))();
	}

	static ::RPG::GameCore::TalkRewardRow* Method_1_1A3A0D66AB1FB320(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TalkRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_1A3A0D66AB1FB320_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8D6E1FB68EDE9D8E(::RPG::GameCore::TalkRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TalkRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_794321D47376C73A_METHOD_1_8D6E1FB68EDE9D8E_OFFSET))(a1);
	}
};
