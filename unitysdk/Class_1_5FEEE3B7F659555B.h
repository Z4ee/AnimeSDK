#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ParkourRailBallSkillConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5FEEE3B7F659555B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D2F5920)
#define CLASS_1_5FEEE3B7F659555B_METHOD_1_54C1F59D6F4735A8_OFFSET UNITYSDK_OFFSET(0x1D2F51E0)
#define CLASS_1_5FEEE3B7F659555B_METHOD_1_6FACE7D255ACEE3A_OFFSET UNITYSDK_OFFSET(0x1D2F5580)
#define CLASS_1_5FEEE3B7F659555B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D2F5750)
#define CLASS_1_5FEEE3B7F659555B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D2F57E0)
#define CLASS_1_5FEEE3B7F659555B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D2F5180)
#define CLASS_1_5FEEE3B7F659555B_METHOD_1_D2721E73B595DFCB_OFFSET UNITYSDK_OFFSET(0x1D02B160)
#define CLASS_1_5FEEE3B7F659555B_METHOD_1_D8333B5D542E57C9_OFFSET UNITYSDK_OFFSET(0x1D2F5970)
#define CLASS_1_5FEEE3B7F659555B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D2F5350)
#define CLASS_1_5FEEE3B7F659555B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D2F5710)
#define CLASS_1_5FEEE3B7F659555B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D2F5880)
#define CLASS_1_5FEEE3B7F659555B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2F5CE0)

inline static constexpr unsigned int Class_1_5FEEE3B7F659555B_TypeDefinitionIndex = 12021;

class Class_1_5FEEE3B7F659555B : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEEE3B7F659555B_TypeDefinitionIndex)->GetStaticField(0x39B40);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEEE3B7F659555B_TypeDefinitionIndex)->GetStaticField(0x39B48);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEEE3B7F659555B_TypeDefinitionIndex)->GetStaticField(0x39B50);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEEE3B7F659555B_TypeDefinitionIndex)->GetStaticField(0xEE40);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5FEEE3B7F659555B_TypeDefinitionIndex)->GetStaticField(0xEE41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*>* Method_1_D2721E73B595DFCB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_D2721E73B595DFCB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*> Method_1_54C1F59D6F4735A8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ParkourRailBallSkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_54C1F59D6F4735A8_OFFSET))();
	}

	static ::RPG::GameCore::ParkourRailBallSkillConfigRow* Method_1_6FACE7D255ACEE3A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ParkourRailBallSkillConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_6FACE7D255ACEE3A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D8333B5D542E57C9(::RPG::GameCore::ParkourRailBallSkillConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ParkourRailBallSkillConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_5FEEE3B7F659555B_METHOD_1_D8333B5D542E57C9_OFFSET))(a1);
	}
};
