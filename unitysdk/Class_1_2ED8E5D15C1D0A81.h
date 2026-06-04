#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingCardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_02A2243C5D517135_OFFSET UNITYSDK_OFFSET(0x18F6FD80)
#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_0388FEB471125E50_OFFSET UNITYSDK_OFFSET(0x18F705B0)
#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_074CBC3D94DD175E_OFFSET UNITYSDK_OFFSET(0x18F70200)
#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F70560)
#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_1D1AAC1B15DFD8AA_OFFSET UNITYSDK_OFFSET(0x18F70090)
#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F70390)
#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F70420)
#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F70030)
#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F6FE00)
#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F70350)
#define CLASS_1_2ED8E5D15C1D0A81_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F704C0)
#define CLASS_1_2ED8E5D15C1D0A81__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F708D0)

inline static constexpr unsigned int Class_1_2ED8E5D15C1D0A81_TypeDefinitionIndex = 10602;

class Class_1_2ED8E5D15C1D0A81 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2ED8E5D15C1D0A81_TypeDefinitionIndex)->GetStaticField(0x36650);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2ED8E5D15C1D0A81_TypeDefinitionIndex)->GetStaticField(0x36658);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_2ED8E5D15C1D0A81_TypeDefinitionIndex)->GetStaticField(0x36660);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2ED8E5D15C1D0A81_TypeDefinitionIndex)->GetStaticField(0xAE30);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_2ED8E5D15C1D0A81_TypeDefinitionIndex)->GetStaticField(0xAE31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>* Method_1_02A2243C5D517135()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_02A2243C5D517135_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*> Method_1_1D1AAC1B15DFD8AA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingCardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_1D1AAC1B15DFD8AA_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingCardRow* Method_1_074CBC3D94DD175E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingCardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_074CBC3D94DD175E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0388FEB471125E50(::RPG::GameCore::ChenLingCardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingCardRow*))((::PBYTE)hIl2Cpp + CLASS_1_2ED8E5D15C1D0A81_METHOD_1_0388FEB471125E50_OFFSET))(a1);
	}
};
