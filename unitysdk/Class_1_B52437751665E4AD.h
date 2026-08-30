#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTutorialStageNodeConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B52437751665E4AD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C749BE0)
#define CLASS_1_B52437751665E4AD_METHOD_1_25CF1C9E458C2BDB_OFFSET UNITYSDK_OFFSET(0x1C749C30)
#define CLASS_1_B52437751665E4AD_METHOD_1_282AB27C227E3814_OFFSET UNITYSDK_OFFSET(0x1C749780)
#define CLASS_1_B52437751665E4AD_METHOD_1_73F3BBE0A00179E6_OFFSET UNITYSDK_OFFSET(0x1C749700)
#define CLASS_1_B52437751665E4AD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C749A10)
#define CLASS_1_B52437751665E4AD_METHOD_1_8E825291283F103A_OFFSET UNITYSDK_OFFSET(0x1C749590)
#define CLASS_1_B52437751665E4AD_METHOD_1_A5687693A0CC5C45_OFFSET UNITYSDK_OFFSET(0x1C749280)
#define CLASS_1_B52437751665E4AD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C749AA0)
#define CLASS_1_B52437751665E4AD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C749530)
#define CLASS_1_B52437751665E4AD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C749300)
#define CLASS_1_B52437751665E4AD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C7499D0)
#define CLASS_1_B52437751665E4AD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C749B40)
#define CLASS_1_B52437751665E4AD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C74A030)

inline static constexpr unsigned int Class_1_B52437751665E4AD_TypeDefinitionIndex = 13541;

class Class_1_B52437751665E4AD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B52437751665E4AD_TypeDefinitionIndex)->GetStaticField(0x52FE0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B52437751665E4AD_TypeDefinitionIndex)->GetStaticField(0x52FE8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B52437751665E4AD_TypeDefinitionIndex)->GetStaticField(0x52FF0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B52437751665E4AD_TypeDefinitionIndex)->GetStaticField(0x11610);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B52437751665E4AD_TypeDefinitionIndex)->GetStaticField(0x11611);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>* Method_1_A5687693A0CC5C45()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_A5687693A0CC5C45_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*> Method_1_8E825291283F103A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_8E825291283F103A_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*> Method_1_73F3BBE0A00179E6()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>, ::RPG::GameCore::GridFightTutorialStageNodeConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_73F3BBE0A00179E6_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTutorialStageNodeConfigRow* Method_1_282AB27C227E3814(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
	{
		return ((::RPG::GameCore::GridFightTutorialStageNodeConfigRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_282AB27C227E3814_OFFSET))(a1, a2, a3, a4);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_25CF1C9E458C2BDB(::RPG::GameCore::GridFightTutorialStageNodeConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTutorialStageNodeConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B52437751665E4AD_METHOD_1_25CF1C9E458C2BDB_OFFSET))(a1);
	}
};
