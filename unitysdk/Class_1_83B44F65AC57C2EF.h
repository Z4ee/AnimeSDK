#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCDifficultyRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_83B44F65AC57C2EF_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16ECF730)
#define CLASS_1_83B44F65AC57C2EF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16ECF550)
#define CLASS_1_83B44F65AC57C2EF_METHOD_1_61E63755308B08F1_OFFSET UNITYSDK_OFFSET(0x16ECF340)
#define CLASS_1_83B44F65AC57C2EF_METHOD_1_62D4025E5F9B8F15_OFFSET UNITYSDK_OFFSET(0x16ECF780)
#define CLASS_1_83B44F65AC57C2EF_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16ECEEE0)
#define CLASS_1_83B44F65AC57C2EF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16ECF5F0)
#define CLASS_1_83B44F65AC57C2EF_METHOD_1_B13C1B595BF7D080_OFFSET UNITYSDK_OFFSET(0x16ECF190)
#define CLASS_1_83B44F65AC57C2EF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16ECF130)
#define CLASS_1_83B44F65AC57C2EF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16ECF510)
#define CLASS_1_83B44F65AC57C2EF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16ECF690)
#define CLASS_1_83B44F65AC57C2EF_METHOD_1_F7BE54B859FA781F_OFFSET UNITYSDK_OFFSET(0x16ECEE60)
#define CLASS_1_83B44F65AC57C2EF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16ECFAE0)

inline static constexpr unsigned int Class_1_83B44F65AC57C2EF_TypeDefinitionIndex = 13496;

class Class_1_83B44F65AC57C2EF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83B44F65AC57C2EF_TypeDefinitionIndex)->GetStaticField(0x2CDF0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDifficultyRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDifficultyRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83B44F65AC57C2EF_TypeDefinitionIndex)->GetStaticField(0x2CDF8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_83B44F65AC57C2EF_TypeDefinitionIndex)->GetStaticField(0x2CE00);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83B44F65AC57C2EF_TypeDefinitionIndex)->GetStaticField(0xEF30);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_83B44F65AC57C2EF_TypeDefinitionIndex)->GetStaticField(0xEF31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDifficultyRow*>* Method_1_F7BE54B859FA781F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDifficultyRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_F7BE54B859FA781F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDifficultyRow*> Method_1_B13C1B595BF7D080()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCDifficultyRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_B13C1B595BF7D080_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCDifficultyRow* Method_1_61E63755308B08F1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDLCDifficultyRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_61E63755308B08F1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_62D4025E5F9B8F15(::RPG::GameCore::RogueDLCDifficultyRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCDifficultyRow*))((::PBYTE)hIl2Cpp + CLASS_1_83B44F65AC57C2EF_METHOD_1_62D4025E5F9B8F15_OFFSET))(a1);
	}
};
