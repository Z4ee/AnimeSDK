#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelChimeraRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_AC0704E1D72F0273_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CC5AF90)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_267B6F65D4DB3651_OFFSET UNITYSDK_OFFSET(0x1CC5ABD0)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_2A152717D5897FBC_OFFSET UNITYSDK_OFFSET(0x1CC5AC30)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_6C0255F9223024DE_OFFSET UNITYSDK_OFFSET(0x1CC5AFE0)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CC5ADC0)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_98EED94B70B4CEC1_OFFSET UNITYSDK_OFFSET(0x1CC5AAA0)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CC5AE50)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_C279AB5174923C1B_OFFSET UNITYSDK_OFFSET(0x1CC5A790)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CC5AA40)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CC5A810)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CC5AD80)
#define CLASS_1_AC0704E1D72F0273_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CC5AEF0)
#define CLASS_1_AC0704E1D72F0273__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CC5B300)

inline static constexpr unsigned int Class_1_AC0704E1D72F0273_TypeDefinitionIndex = 11098;

class Class_1_AC0704E1D72F0273 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0704E1D72F0273_TypeDefinitionIndex)->GetStaticField(0x34300);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0704E1D72F0273_TypeDefinitionIndex)->GetStaticField(0x34308);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0704E1D72F0273_TypeDefinitionIndex)->GetStaticField(0x34310);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0704E1D72F0273_TypeDefinitionIndex)->GetStaticField(0xDB50);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_AC0704E1D72F0273_TypeDefinitionIndex)->GetStaticField(0xDB51);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>* Method_1_C279AB5174923C1B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_C279AB5174923C1B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*> Method_1_98EED94B70B4CEC1()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_98EED94B70B4CEC1_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>, ::RPG::GameCore::ChimeraDuelChimeraRow*> Method_1_267B6F65D4DB3651()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelChimeraRow*>, ::RPG::GameCore::ChimeraDuelChimeraRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_267B6F65D4DB3651_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelChimeraRow* Method_1_2A152717D5897FBC(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDuelChimeraRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_2A152717D5897FBC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C0255F9223024DE(::RPG::GameCore::ChimeraDuelChimeraRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelChimeraRow*))((::PBYTE)hIl2Cpp + CLASS_1_AC0704E1D72F0273_METHOD_1_6C0255F9223024DE_OFFSET))(a1);
	}
};
