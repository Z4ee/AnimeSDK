#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MatchThreeV2ReputationRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E32210194B24B971_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C34A10)
#define CLASS_1_E32210194B24B971_METHOD_1_22A98268C269C359_OFFSET UNITYSDK_OFFSET(0x16C344F0)
#define CLASS_1_E32210194B24B971_METHOD_1_2FC7E2BAD20A238E_OFFSET UNITYSDK_OFFSET(0x16C34670)
#define CLASS_1_E32210194B24B971_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C34830)
#define CLASS_1_E32210194B24B971_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C34240)
#define CLASS_1_E32210194B24B971_METHOD_1_83C3BDEC91E67745_OFFSET UNITYSDK_OFFSET(0x16C341C0)
#define CLASS_1_E32210194B24B971_METHOD_1_91E56F097F21FCEA_OFFSET UNITYSDK_OFFSET(0x16C34A60)
#define CLASS_1_E32210194B24B971_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C348D0)
#define CLASS_1_E32210194B24B971_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C34490)
#define CLASS_1_E32210194B24B971_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C347F0)
#define CLASS_1_E32210194B24B971_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C34970)
#define CLASS_1_E32210194B24B971__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C34D70)

inline static constexpr unsigned int Class_1_E32210194B24B971_TypeDefinitionIndex = 10978;

class Class_1_E32210194B24B971 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E32210194B24B971_TypeDefinitionIndex)->GetStaticField(0x2B120);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E32210194B24B971_TypeDefinitionIndex)->GetStaticField(0x2B128);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E32210194B24B971_TypeDefinitionIndex)->GetStaticField(0x2B130);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E32210194B24B971_TypeDefinitionIndex)->GetStaticField(0xE3A0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E32210194B24B971_TypeDefinitionIndex)->GetStaticField(0xE3A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*>* Method_1_83C3BDEC91E67745()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_83C3BDEC91E67745_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*> Method_1_22A98268C269C359()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MatchThreeV2ReputationRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_22A98268C269C359_OFFSET))();
	}

	static ::RPG::GameCore::MatchThreeV2ReputationRow* Method_1_2FC7E2BAD20A238E(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MatchThreeV2ReputationRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_2FC7E2BAD20A238E_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_91E56F097F21FCEA(::RPG::GameCore::MatchThreeV2ReputationRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MatchThreeV2ReputationRow*))((::PBYTE)hIl2Cpp + CLASS_1_E32210194B24B971_METHOD_1_91E56F097F21FCEA_OFFSET))(a1);
	}
};
