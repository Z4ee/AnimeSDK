#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournExpScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_0FD1A2480F349829_OFFSET UNITYSDK_OFFSET(0x182043E0)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18204920)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_1C1DA07E617EB492_OFFSET UNITYSDK_OFFSET(0x18204320)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18204740)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_3FDA7911B5B90567_OFFSET UNITYSDK_OFFSET(0x18204970)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_543BEF6622A4053B_OFFSET UNITYSDK_OFFSET(0x18204170)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18203EC0)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_7853D4E478C22687_OFFSET UNITYSDK_OFFSET(0x18204560)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_AACED299761FF9F2_OFFSET UNITYSDK_OFFSET(0x18203E40)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182047E0)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18204110)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18204700)
#define CLASS_1_86F7BF4B4635B4DA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18204880)
#define CLASS_1_86F7BF4B4635B4DA__CCTOR_OFFSET UNITYSDK_OFFSET(0x18204C80)

inline static constexpr unsigned int Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex = 14180;

class Class_1_86F7BF4B4635B4DA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex)->GetStaticField(0x209B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex)->GetStaticField(0x209B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex)->GetStaticField(0x209C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex)->GetStaticField(0x7F20);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_86F7BF4B4635B4DA_TypeDefinitionIndex)->GetStaticField(0x7F21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>* Method_1_AACED299761FF9F2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_AACED299761FF9F2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*> Method_1_543BEF6622A4053B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_543BEF6622A4053B_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>, ::RPG::GameCore::RogueTournExpScoreRow*> Method_1_1C1DA07E617EB492()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournExpScoreRow*>, ::RPG::GameCore::RogueTournExpScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_1C1DA07E617EB492_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournExpScoreRow* Method_1_0FD1A2480F349829(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournExpScoreRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_0FD1A2480F349829_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IList_1<::RPG::GameCore::RogueTournExpScoreRow*>* Method_1_7853D4E478C22687(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IList_1<::RPG::GameCore::RogueTournExpScoreRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_7853D4E478C22687_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_3FDA7911B5B90567(::RPG::GameCore::RogueTournExpScoreRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournExpScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_86F7BF4B4635B4DA_METHOD_1_3FDA7911B5B90567_OFFSET))(a1);
	}
};
