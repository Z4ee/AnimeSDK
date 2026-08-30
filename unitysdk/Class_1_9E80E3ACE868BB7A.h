#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FightFestScorePhaseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CA8B2D0)
#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_1D6AF0404BCE041A_OFFSET UNITYSDK_OFFSET(0x1CA8AAF0)
#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_461C1BD320C590E7_OFFSET UNITYSDK_OFFSET(0x1CA8B320)
#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_6F32D271C2ADF025_OFFSET UNITYSDK_OFFSET(0x1CA8AF70)
#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CA8B100)
#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_9CE62E50C940B403_OFFSET UNITYSDK_OFFSET(0x1CA8AE00)
#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CA8B190)
#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CA8ADA0)
#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CA8AB70)
#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CA8B0C0)
#define CLASS_1_9E80E3ACE868BB7A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CA8B230)
#define CLASS_1_9E80E3ACE868BB7A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA8B640)

inline static constexpr unsigned int Class_1_9E80E3ACE868BB7A_TypeDefinitionIndex = 13172;

class Class_1_9E80E3ACE868BB7A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E80E3ACE868BB7A_TypeDefinitionIndex)->GetStaticField(0x21960);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E80E3ACE868BB7A_TypeDefinitionIndex)->GetStaticField(0x21968);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E80E3ACE868BB7A_TypeDefinitionIndex)->GetStaticField(0x21970);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E80E3ACE868BB7A_TypeDefinitionIndex)->GetStaticField(0xAC60);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9E80E3ACE868BB7A_TypeDefinitionIndex)->GetStaticField(0xAC61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*>* Method_1_1D6AF0404BCE041A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_1D6AF0404BCE041A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*> Method_1_9CE62E50C940B403()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FightFestScorePhaseRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_9CE62E50C940B403_OFFSET))();
	}

	static ::RPG::GameCore::FightFestScorePhaseRow* Method_1_6F32D271C2ADF025(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::FightFestScorePhaseRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_6F32D271C2ADF025_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_461C1BD320C590E7(::RPG::GameCore::FightFestScorePhaseRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FightFestScorePhaseRow*))((::PBYTE)hIl2Cpp + CLASS_1_9E80E3ACE868BB7A_METHOD_1_461C1BD320C590E7_OFFSET))(a1);
	}
};
