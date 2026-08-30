#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9633EA6685121AFE_METHOD_1_02FA44D7B06AED92_OFFSET UNITYSDK_OFFSET(0x1D6721C0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D6726F0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_3141464118B49F78_OFFSET UNITYSDK_OFFSET(0x1D6722F0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_350323B1EB8AB473_OFFSET UNITYSDK_OFFSET(0x1D672740)
#define CLASS_1_9633EA6685121AFE_METHOD_1_7DF128CC2BD7F2AF_OFFSET UNITYSDK_OFFSET(0x1D672350)
#define CLASS_1_9633EA6685121AFE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D672520)
#define CLASS_1_9633EA6685121AFE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D6725B0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D672160)
#define CLASS_1_9633EA6685121AFE_METHOD_1_D09FAB26FD7DF78E_OFFSET UNITYSDK_OFFSET(0x1D671EB0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D671F30)
#define CLASS_1_9633EA6685121AFE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D6724E0)
#define CLASS_1_9633EA6685121AFE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D672650)
#define CLASS_1_9633EA6685121AFE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D672A60)

inline static constexpr unsigned int Class_1_9633EA6685121AFE_TypeDefinitionIndex = 14539;

class Class_1_9633EA6685121AFE : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9633EA6685121AFE_TypeDefinitionIndex)->GetStaticField(0x48C50);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9633EA6685121AFE_TypeDefinitionIndex)->GetStaticField(0x48C58);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9633EA6685121AFE_TypeDefinitionIndex)->GetStaticField(0x48C60);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9633EA6685121AFE_TypeDefinitionIndex)->GetStaticField(0x10B30);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9633EA6685121AFE_TypeDefinitionIndex)->GetStaticField(0x10B31);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>* Method_1_D09FAB26FD7DF78E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_D09FAB26FD7DF78E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*> Method_1_02FA44D7B06AED92()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_02FA44D7B06AED92_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>, ::RPG::GameCore::RogueActivityResidentConfigRow*> Method_1_3141464118B49F78()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueActivityResidentConfigRow*>, ::RPG::GameCore::RogueActivityResidentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_3141464118B49F78_OFFSET))();
	}

	static ::RPG::GameCore::RogueActivityResidentConfigRow* Method_1_7DF128CC2BD7F2AF(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueActivityResidentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_7DF128CC2BD7F2AF_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_350323B1EB8AB473(::RPG::GameCore::RogueActivityResidentConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueActivityResidentConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_9633EA6685121AFE_METHOD_1_350323B1EB8AB473_OFFSET))(a1);
	}
};
