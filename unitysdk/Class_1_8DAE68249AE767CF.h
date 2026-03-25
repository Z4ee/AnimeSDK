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

#define CLASS_1_8DAE68249AE767CF_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16BAD440)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_15E3E5179333F5A4_OFFSET UNITYSDK_OFFSET(0x16BACEA0)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_1E2670A6CFFB9A25_OFFSET UNITYSDK_OFFSET(0x16BAD050)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BAD260)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_4366F06AE8BF6631_OFFSET UNITYSDK_OFFSET(0x16BAD490)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BACBF0)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BAD300)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BACE40)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_CFE359E759B40FC3_OFFSET UNITYSDK_OFFSET(0x16BACB70)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BAD220)
#define CLASS_1_8DAE68249AE767CF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BAD3A0)
#define CLASS_1_8DAE68249AE767CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BAD7F0)

inline static constexpr unsigned int Class_1_8DAE68249AE767CF_TypeDefinitionIndex = 11805;

class Class_1_8DAE68249AE767CF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAE68249AE767CF_TypeDefinitionIndex)->GetStaticField(0x26FC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAE68249AE767CF_TypeDefinitionIndex)->GetStaticField(0x26FC8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAE68249AE767CF_TypeDefinitionIndex)->GetStaticField(0x26FD0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAE68249AE767CF_TypeDefinitionIndex)->GetStaticField(0xCB60);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8DAE68249AE767CF_TypeDefinitionIndex)->GetStaticField(0xCB61);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*> Method_1_15E3E5179333F5A4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeActivityConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_15E3E5179333F5A4_OFFSET))();
	}

	static ::RPG::GameCore::ChallengeActivityConfigRow* Method_1_1E2670A6CFFB9A25(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChallengeActivityConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_1E2670A6CFFB9A25_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4366F06AE8BF6631(::RPG::GameCore::ChallengeActivityConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengeActivityConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8DAE68249AE767CF_METHOD_1_4366F06AE8BF6631_OFFSET))(a1);
	}
};
