#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MechanismBarEffectConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1E3760C1C3633D06_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CEB62D0)
#define CLASS_1_1E3760C1C3633D06_METHOD_1_786A01450BCFFD5B_OFFSET UNITYSDK_OFFSET(0x1CEB5EF0)
#define CLASS_1_1E3760C1C3633D06_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CEB6100)
#define CLASS_1_1E3760C1C3633D06_METHOD_1_A323647F2D12FFA2_OFFSET UNITYSDK_OFFSET(0x1CEB6320)
#define CLASS_1_1E3760C1C3633D06_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CEB6190)
#define CLASS_1_1E3760C1C3633D06_METHOD_1_B9D2AD0AFB0FDC67_OFFSET UNITYSDK_OFFSET(0x1CEB5D80)
#define CLASS_1_1E3760C1C3633D06_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CEB5D20)
#define CLASS_1_1E3760C1C3633D06_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CEB5AF0)
#define CLASS_1_1E3760C1C3633D06_METHOD_1_E2C7F06807BF5426_OFFSET UNITYSDK_OFFSET(0x1CEB5A70)
#define CLASS_1_1E3760C1C3633D06_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CEB60C0)
#define CLASS_1_1E3760C1C3633D06_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CEB6230)
#define CLASS_1_1E3760C1C3633D06__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CEB66C0)

inline static constexpr unsigned int Class_1_1E3760C1C3633D06_TypeDefinitionIndex = 14017;

class Class_1_1E3760C1C3633D06 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E3760C1C3633D06_TypeDefinitionIndex)->GetStaticField(0x36BF0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E3760C1C3633D06_TypeDefinitionIndex)->GetStaticField(0x36BF8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E3760C1C3633D06_TypeDefinitionIndex)->GetStaticField(0x36C00);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E3760C1C3633D06_TypeDefinitionIndex)->GetStaticField(0xE630);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1E3760C1C3633D06_TypeDefinitionIndex)->GetStaticField(0xE631);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*>* Method_1_E2C7F06807BF5426()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_E2C7F06807BF5426_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*> Method_1_B9D2AD0AFB0FDC67()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MechanismBarEffectConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_B9D2AD0AFB0FDC67_OFFSET))();
	}

	static ::RPG::GameCore::MechanismBarEffectConfigRow* Method_1_786A01450BCFFD5B(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MechanismBarEffectConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_786A01450BCFFD5B_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A323647F2D12FFA2(::RPG::GameCore::MechanismBarEffectConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MechanismBarEffectConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_1E3760C1C3633D06_METHOD_1_A323647F2D12FFA2_OFFSET))(a1);
	}
};
