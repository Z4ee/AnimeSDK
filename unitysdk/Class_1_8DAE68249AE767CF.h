#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeActivityConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8DAE68249AE767CF_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C944900)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_4366F06AE8BF6631_OFFSET UNITYSDK_OFFSET(0x1C944950)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C944730)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_A7DB81EAC3F45F00_OFFSET UNITYSDK_OFFSET(0x1C9443F0)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C9447C0)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_C36EAC44383ACD72_OFFSET UNITYSDK_OFFSET(0x1C944560)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C944390)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_CFE359E759B40FC3_OFFSET UNITYSDK_OFFSET(0x1C9440E0)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C944160)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C9446F0)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C944860)
#define CLASS_1_8DAE68249AE767CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C944CC0)

inline static constexpr unsigned int Class_1_8DAE68249AE767CF_TypeDefinitionIndex = 12841;

class Class_1_8DAE68249AE767CF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAE68249AE767CF_TypeDefinitionIndex)->GetStaticField(0x27610);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAE68249AE767CF_TypeDefinitionIndex)->GetStaticField(0x27618);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAE68249AE767CF_TypeDefinitionIndex)->GetStaticField(0x27620);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAE68249AE767CF_TypeDefinitionIndex)->GetStaticField(0xB970);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAE68249AE767CF_TypeDefinitionIndex)->GetStaticField(0xB971);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>* Method_1_CFE359E759B40FC3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_CFE359E759B40FC3_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*> Method_1_A7DB81EAC3F45F00()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_A7DB81EAC3F45F00_OFFSET))();
	}

	static ::RPG::GameCore::ChallengeActivityConfigRow* Method_1_C36EAC44383ACD72(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChallengeActivityConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_C36EAC44383ACD72_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4366F06AE8BF6631(::RPG::GameCore::ChallengeActivityConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengeActivityConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_4366F06AE8BF6631_OFFSET))(a1);
	}
};
