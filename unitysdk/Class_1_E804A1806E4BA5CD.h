#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDuelMasterChallengeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E804A1806E4BA5CD_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C5FF30)
#define CLASS_1_E804A1806E4BA5CD_METHOD_1_2314D8DD1D6EB395_OFFSET UNITYSDK_OFFSET(0x16C5F660)
#define CLASS_1_E804A1806E4BA5CD_METHOD_1_23C41BDF7BED27BE_OFFSET UNITYSDK_OFFSET(0x16C5F990)
#define CLASS_1_E804A1806E4BA5CD_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C5FD50)
#define CLASS_1_E804A1806E4BA5CD_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C5F6E0)
#define CLASS_1_E804A1806E4BA5CD_METHOD_1_954F681CC391B0DD_OFFSET UNITYSDK_OFFSET(0x16C5FB40)
#define CLASS_1_E804A1806E4BA5CD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C5FDF0)
#define CLASS_1_E804A1806E4BA5CD_METHOD_1_B398EAA3222AE3F9_OFFSET UNITYSDK_OFFSET(0x16C5FF80)
#define CLASS_1_E804A1806E4BA5CD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C5F930)
#define CLASS_1_E804A1806E4BA5CD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C5FD10)
#define CLASS_1_E804A1806E4BA5CD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C5FE90)
#define CLASS_1_E804A1806E4BA5CD__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C602E0)

inline static constexpr unsigned int Class_1_E804A1806E4BA5CD_TypeDefinitionIndex = 10432;

class Class_1_E804A1806E4BA5CD : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E804A1806E4BA5CD_TypeDefinitionIndex)->GetStaticField(0x1640);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E804A1806E4BA5CD_TypeDefinitionIndex)->GetStaticField(0x1648);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E804A1806E4BA5CD_TypeDefinitionIndex)->GetStaticField(0x1650);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E804A1806E4BA5CD_TypeDefinitionIndex)->GetStaticField(0x1FD0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E804A1806E4BA5CD_TypeDefinitionIndex)->GetStaticField(0x1FD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*>* Method_1_2314D8DD1D6EB395()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_2314D8DD1D6EB395_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*> Method_1_23C41BDF7BED27BE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDuelMasterChallengeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_23C41BDF7BED27BE_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDuelMasterChallengeRow* Method_1_954F681CC391B0DD(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDuelMasterChallengeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_954F681CC391B0DD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B398EAA3222AE3F9(::RPG::GameCore::ChimeraDuelMasterChallengeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraDuelMasterChallengeRow*))((::PBYTE)hIl2Cpp + CLASS_1_E804A1806E4BA5CD_METHOD_1_B398EAA3222AE3F9_OFFSET))(a1);
	}
};
