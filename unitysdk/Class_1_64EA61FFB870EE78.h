#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_64EA61FFB870EE78_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1914FB10)
#define CLASS_1_64EA61FFB870EE78_METHOD_1_0D6FA4817C11BDA0_OFFSET UNITYSDK_OFFSET(0x1914FB60)
#define CLASS_1_64EA61FFB870EE78_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1914F930)
#define CLASS_1_64EA61FFB870EE78_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1914F2C0)
#define CLASS_1_64EA61FFB870EE78_METHOD_1_6C9511B5D85BEAEA_OFFSET UNITYSDK_OFFSET(0x1914F720)
#define CLASS_1_64EA61FFB870EE78_METHOD_1_6F7D404A26FAD311_OFFSET UNITYSDK_OFFSET(0x1914F570)
#define CLASS_1_64EA61FFB870EE78_METHOD_1_935C594F364A2A04_OFFSET UNITYSDK_OFFSET(0x1914F240)
#define CLASS_1_64EA61FFB870EE78_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1914F9D0)
#define CLASS_1_64EA61FFB870EE78_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1914F510)
#define CLASS_1_64EA61FFB870EE78_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1914F8F0)
#define CLASS_1_64EA61FFB870EE78_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1914FA70)
#define CLASS_1_64EA61FFB870EE78__CCTOR_OFFSET UNITYSDK_OFFSET(0x1914FEC0)

inline static constexpr unsigned int Class_1_64EA61FFB870EE78_TypeDefinitionIndex = 12887;

class Class_1_64EA61FFB870EE78 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64EA61FFB870EE78_TypeDefinitionIndex)->GetStaticField(0x41080);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64EA61FFB870EE78_TypeDefinitionIndex)->GetStaticField(0x41088);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_64EA61FFB870EE78_TypeDefinitionIndex)->GetStaticField(0x41090);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_64EA61FFB870EE78_TypeDefinitionIndex)->GetStaticField(0xEAD0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_64EA61FFB870EE78_TypeDefinitionIndex)->GetStaticField(0xEAD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*>* Method_1_935C594F364A2A04()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_935C594F364A2A04_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*> Method_1_6F7D404A26FAD311()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_6F7D404A26FAD311_OFFSET))();
	}

	static ::RPG::GameCore::GridFightPenaltyRuleConfigRow* Method_1_6C9511B5D85BEAEA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightPenaltyRuleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_6C9511B5D85BEAEA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0D6FA4817C11BDA0(::RPG::GameCore::GridFightPenaltyRuleConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightPenaltyRuleConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_64EA61FFB870EE78_METHOD_1_0D6FA4817C11BDA0_OFFSET))(a1);
	}
};
