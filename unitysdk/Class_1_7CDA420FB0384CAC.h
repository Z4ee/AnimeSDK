#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class CycleScoreRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7CDA420FB0384CAC_METHOD_1_11484619C812AD25_OFFSET UNITYSDK_OFFSET(0x1C712860)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1C712810)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C712640)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C7126D0)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_B1AE79E46F8D5D55_OFFSET UNITYSDK_OFFSET(0x1C712470)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_CB0266C37E95D538_OFFSET UNITYSDK_OFFSET(0x1C712030)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C7122E0)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C7120B0)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_E237490EB6D2D9D0_OFFSET UNITYSDK_OFFSET(0x1C712340)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C712600)
#define CLASS_1_7CDA420FB0384CAC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C712770)
#define CLASS_1_7CDA420FB0384CAC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C712B80)

inline static constexpr unsigned int Class_1_7CDA420FB0384CAC_TypeDefinitionIndex = 13006;

class Class_1_7CDA420FB0384CAC : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CDA420FB0384CAC_TypeDefinitionIndex)->GetStaticField(0x48C90);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CDA420FB0384CAC_TypeDefinitionIndex)->GetStaticField(0x48C98);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CDA420FB0384CAC_TypeDefinitionIndex)->GetStaticField(0x48CA0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CDA420FB0384CAC_TypeDefinitionIndex)->GetStaticField(0x10B50);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7CDA420FB0384CAC_TypeDefinitionIndex)->GetStaticField(0x10B51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>* Method_1_CB0266C37E95D538()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_CB0266C37E95D538_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*> Method_1_E237490EB6D2D9D0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::CycleScoreRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_E237490EB6D2D9D0_OFFSET))();
	}

	static ::RPG::GameCore::CycleScoreRewardRow* Method_1_B1AE79E46F8D5D55(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::CycleScoreRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_B1AE79E46F8D5D55_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_11484619C812AD25(::RPG::GameCore::CycleScoreRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::CycleScoreRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_7CDA420FB0384CAC_METHOD_1_11484619C812AD25_OFFSET))(a1);
	}
};
