#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_943891BE9ED66D06_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x191862A0)
#define CLASS_1_943891BE9ED66D06_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x191860C0)
#define CLASS_1_943891BE9ED66D06_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x19185AD0)
#define CLASS_1_943891BE9ED66D06_METHOD_1_6D50AE078EBA1FAA_OFFSET UNITYSDK_OFFSET(0x19185D80)
#define CLASS_1_943891BE9ED66D06_METHOD_1_9F4EF209EBE003BF_OFFSET UNITYSDK_OFFSET(0x191862F0)
#define CLASS_1_943891BE9ED66D06_METHOD_1_A9208A6BB4AB63E8_OFFSET UNITYSDK_OFFSET(0x19185A50)
#define CLASS_1_943891BE9ED66D06_METHOD_1_AC9F0A2A5B66DA21_OFFSET UNITYSDK_OFFSET(0x19185F00)
#define CLASS_1_943891BE9ED66D06_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19186160)
#define CLASS_1_943891BE9ED66D06_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19185D20)
#define CLASS_1_943891BE9ED66D06_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19186080)
#define CLASS_1_943891BE9ED66D06_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19186200)
#define CLASS_1_943891BE9ED66D06__CCTOR_OFFSET UNITYSDK_OFFSET(0x19186600)

inline static constexpr unsigned int Class_1_943891BE9ED66D06_TypeDefinitionIndex = 12300;

class Class_1_943891BE9ED66D06 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_943891BE9ED66D06_TypeDefinitionIndex)->GetStaticField(0x43860);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_943891BE9ED66D06_TypeDefinitionIndex)->GetStaticField(0x43868);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_943891BE9ED66D06_TypeDefinitionIndex)->GetStaticField(0x43870);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_943891BE9ED66D06_TypeDefinitionIndex)->GetStaticField(0xF1E0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_943891BE9ED66D06_TypeDefinitionIndex)->GetStaticField(0xF1E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*>* Method_1_A9208A6BB4AB63E8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_A9208A6BB4AB63E8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*> Method_1_6D50AE078EBA1FAA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_6D50AE078EBA1FAA_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraDataRow* Method_1_AC9F0A2A5B66DA21(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_AC9F0A2A5B66DA21_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_9F4EF209EBE003BF(::RPG::GameCore::ChimeraDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_943891BE9ED66D06_METHOD_1_9F4EF209EBE003BF_OFFSET))(a1);
	}
};
