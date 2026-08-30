#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F78831B1C816D8CF_Struct_2_2CAFACC24B6FD90A_4.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GuideRogueDataConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F78831B1C816D8CF_METHOD_1_08970B4F3172B073_OFFSET UNITYSDK_OFFSET(0x1CF543C0)
#define CLASS_1_F78831B1C816D8CF_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CF54B10)
#define CLASS_1_F78831B1C816D8CF_METHOD_1_483CD72911094A0B_OFFSET UNITYSDK_OFFSET(0x1CF54A70)
#define CLASS_1_F78831B1C816D8CF_METHOD_1_6F182107020B66CF_OFFSET UNITYSDK_OFFSET(0x1CF546D0)
#define CLASS_1_F78831B1C816D8CF_METHOD_1_72C82DF7CCB4F704_OFFSET UNITYSDK_OFFSET(0x1CF549D0)
#define CLASS_1_F78831B1C816D8CF_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CF54940)
#define CLASS_1_F78831B1C816D8CF_METHOD_1_97594A9E16CA6C71_OFFSET UNITYSDK_OFFSET(0x1CF54B60)
#define CLASS_1_F78831B1C816D8CF_METHOD_1_A324314FC0F2A210_OFFSET UNITYSDK_OFFSET(0x1CF54800)
#define CLASS_1_F78831B1C816D8CF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CF54670)
#define CLASS_1_F78831B1C816D8CF_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CF54440)
#define CLASS_1_F78831B1C816D8CF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CF54900)
#define CLASS_1_F78831B1C816D8CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF54FC0)

inline static constexpr unsigned int Class_1_F78831B1C816D8CF_TypeDefinitionIndex = 13288;

class Class_1_F78831B1C816D8CF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::Class_1_F78831B1C816D8CF_Struct_2_2CAFACC24B6FD90A_4, ::RPG::GameCore::GuideRogueDataConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::Class_1_F78831B1C816D8CF_Struct_2_2CAFACC24B6FD90A_4, ::RPG::GameCore::GuideRogueDataConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F78831B1C816D8CF_TypeDefinitionIndex)->GetStaticField(0x5F150);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F78831B1C816D8CF_TypeDefinitionIndex)->GetStaticField(0x5F158);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F78831B1C816D8CF_TypeDefinitionIndex)->GetStaticField(0x5F160);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F78831B1C816D8CF_TypeDefinitionIndex)->GetStaticField(0x13380);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::Class_1_F78831B1C816D8CF_Struct_2_2CAFACC24B6FD90A_4, ::RPG::GameCore::GuideRogueDataConfigRow*>* Method_1_08970B4F3172B073()
	{
		return ((::System::Collections::Generic::Dictionary_2<::Class_1_F78831B1C816D8CF_Struct_2_2CAFACC24B6FD90A_4, ::RPG::GameCore::GuideRogueDataConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_08970B4F3172B073_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::Class_1_F78831B1C816D8CF_Struct_2_2CAFACC24B6FD90A_4, ::RPG::GameCore::GuideRogueDataConfigRow*> Method_1_6F182107020B66CF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::Class_1_F78831B1C816D8CF_Struct_2_2CAFACC24B6FD90A_4, ::RPG::GameCore::GuideRogueDataConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_6F182107020B66CF_OFFSET))();
	}

	static ::RPG::GameCore::GuideRogueDataConfigRow* Method_1_A324314FC0F2A210(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GuideRogueDataConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_A324314FC0F2A210_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_72C82DF7CCB4F704(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_72C82DF7CCB4F704_OFFSET))(a1);
	}

	static ::System::Void Method_1_483CD72911094A0B(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_483CD72911094A0B_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_97594A9E16CA6C71(::RPG::GameCore::GuideRogueDataConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GuideRogueDataConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_F78831B1C816D8CF_METHOD_1_97594A9E16CA6C71_OFFSET))(a1);
	}
};
