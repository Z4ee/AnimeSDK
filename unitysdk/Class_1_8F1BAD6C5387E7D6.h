#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengePeakGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18FFC610)
#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_892CCFBEBDAD473C_OFFSET UNITYSDK_OFFSET(0x18FFC140)
#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18FFC440)
#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FFC4D0)
#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_C2A530FB54A95D7D_OFFSET UNITYSDK_OFFSET(0x18FFC660)
#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_CA78D8F8B362AD1D_OFFSET UNITYSDK_OFFSET(0x18FFC270)
#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FFC0E0)
#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18FFBEB0)
#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FFC400)
#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FFC570)
#define CLASS_1_8F1BAD6C5387E7D6_METHOD_1_FFB77B4FDB300B74_OFFSET UNITYSDK_OFFSET(0x18FFBE30)
#define CLASS_1_8F1BAD6C5387E7D6__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FFC980)

inline static constexpr unsigned int Class_1_8F1BAD6C5387E7D6_TypeDefinitionIndex = 12348;

class Class_1_8F1BAD6C5387E7D6 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F1BAD6C5387E7D6_TypeDefinitionIndex)->GetStaticField(0x37230);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F1BAD6C5387E7D6_TypeDefinitionIndex)->GetStaticField(0x37238);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F1BAD6C5387E7D6_TypeDefinitionIndex)->GetStaticField(0x37240);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F1BAD6C5387E7D6_TypeDefinitionIndex)->GetStaticField(0xB0E0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8F1BAD6C5387E7D6_TypeDefinitionIndex)->GetStaticField(0xB0E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*>* Method_1_FFB77B4FDB300B74()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_FFB77B4FDB300B74_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*> Method_1_892CCFBEBDAD473C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_892CCFBEBDAD473C_OFFSET))();
	}

	static ::RPG::GameCore::ChallengePeakGroupConfigRow* Method_1_CA78D8F8B362AD1D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChallengePeakGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_CA78D8F8B362AD1D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C2A530FB54A95D7D(::RPG::GameCore::ChallengePeakGroupConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengePeakGroupConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8F1BAD6C5387E7D6_METHOD_1_C2A530FB54A95D7D_OFFSET))(a1);
	}
};
