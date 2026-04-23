#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeV2LevelRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_71A085C373A2A61C_METHOD_1_031B13128C1D73F0_OFFSET UNITYSDK_OFFSET(0x19124080)
#define CLASS_1_71A085C373A2A61C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x191248D0)
#define CLASS_1_71A085C373A2A61C_METHOD_1_2D1BA985252D9185_OFFSET UNITYSDK_OFFSET(0x19124920)
#define CLASS_1_71A085C373A2A61C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x191246F0)
#define CLASS_1_71A085C373A2A61C_METHOD_1_3151B633DB32DC1E_OFFSET UNITYSDK_OFFSET(0x191243B0)
#define CLASS_1_71A085C373A2A61C_METHOD_1_6325351585311F07_OFFSET UNITYSDK_OFFSET(0x19124530)
#define CLASS_1_71A085C373A2A61C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19124100)
#define CLASS_1_71A085C373A2A61C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19124790)
#define CLASS_1_71A085C373A2A61C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19124350)
#define CLASS_1_71A085C373A2A61C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x191246B0)
#define CLASS_1_71A085C373A2A61C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19124830)
#define CLASS_1_71A085C373A2A61C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19124C40)

inline static constexpr unsigned int Class_1_71A085C373A2A61C_TypeDefinitionIndex = 11374;

class Class_1_71A085C373A2A61C : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71A085C373A2A61C_TypeDefinitionIndex)->GetStaticField(0x3FAC0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71A085C373A2A61C_TypeDefinitionIndex)->GetStaticField(0x3FAC8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71A085C373A2A61C_TypeDefinitionIndex)->GetStaticField(0x3FAD0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_71A085C373A2A61C_TypeDefinitionIndex)->GetStaticField(0xE4C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_71A085C373A2A61C_TypeDefinitionIndex)->GetStaticField(0xE4C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*>* Method_1_031B13128C1D73F0()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_031B13128C1D73F0_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*> Method_1_3151B633DB32DC1E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2LevelRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_3151B633DB32DC1E_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeV2LevelRow* Method_1_6325351585311F07(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeV2LevelRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_6325351585311F07_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_2D1BA985252D9185(::RPG::GameCore::MatchThreeV2LevelRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2LevelRow*))((::PBYTE)hIl2Cpp + CLASS_1_71A085C373A2A61C_METHOD_1_2D1BA985252D9185_OFFSET))(a1);
	}
};
