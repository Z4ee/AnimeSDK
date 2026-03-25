#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CC72791BF9B6D821_METHOD_1_06C30D7357B462CB_OFFSET UNITYSDK_OFFSET(0x16C80F40)
#define CLASS_1_CC72791BF9B6D821_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16C81560)
#define CLASS_1_CC72791BF9B6D821_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C81380)
#define CLASS_1_CC72791BF9B6D821_METHOD_1_419F8550AC48C463_OFFSET UNITYSDK_OFFSET(0x16C810F0)
#define CLASS_1_CC72791BF9B6D821_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C80C90)
#define CLASS_1_CC72791BF9B6D821_METHOD_1_92046C214975638E_OFFSET UNITYSDK_OFFSET(0x16C815B0)
#define CLASS_1_CC72791BF9B6D821_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C81420)
#define CLASS_1_CC72791BF9B6D821_METHOD_1_BF74F9BB090877C2_OFFSET UNITYSDK_OFFSET(0x16C80C10)
#define CLASS_1_CC72791BF9B6D821_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C80EE0)
#define CLASS_1_CC72791BF9B6D821_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C81340)
#define CLASS_1_CC72791BF9B6D821_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C814C0)
#define CLASS_1_CC72791BF9B6D821__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C81980)

inline static constexpr unsigned int Class_1_CC72791BF9B6D821_TypeDefinitionIndex = 13608;

class Class_1_CC72791BF9B6D821 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC72791BF9B6D821_TypeDefinitionIndex)->GetStaticField(0x4A00);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC72791BF9B6D821_TypeDefinitionIndex)->GetStaticField(0x4A08);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC72791BF9B6D821_TypeDefinitionIndex)->GetStaticField(0x4A10);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC72791BF9B6D821_TypeDefinitionIndex)->GetStaticField(0x27B0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CC72791BF9B6D821_TypeDefinitionIndex)->GetStaticField(0x27B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>* Method_1_BF74F9BB090877C2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_BF74F9BB090877C2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*> Method_1_06C30D7357B462CB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_06C30D7357B462CB_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicScoreRow* Method_1_419F8550AC48C463(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::RogueMagicScoreRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_419F8550AC48C463_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_92046C214975638E(::RPG::GameCore::RogueMagicScoreRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_CC72791BF9B6D821_METHOD_1_92046C214975638E_OFFSET))(a1);
	}
};
