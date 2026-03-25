#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartyStepConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_206B9C61F250CAAF_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1771A910)
#define CLASS_1_206B9C61F250CAAF_METHOD_1_26E2BEC3CE39E0F7_OFFSET UNITYSDK_OFFSET(0x1771A040)
#define CLASS_1_206B9C61F250CAAF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1771A730)
#define CLASS_1_206B9C61F250CAAF_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1771A0C0)
#define CLASS_1_206B9C61F250CAAF_METHOD_1_A4628FE7E8799395_OFFSET UNITYSDK_OFFSET(0x1771A960)
#define CLASS_1_206B9C61F250CAAF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1771A7D0)
#define CLASS_1_206B9C61F250CAAF_METHOD_1_C4A3908CE2ACBE71_OFFSET UNITYSDK_OFFSET(0x1771A520)
#define CLASS_1_206B9C61F250CAAF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1771A310)
#define CLASS_1_206B9C61F250CAAF_METHOD_1_EF5DA090DEA74190_OFFSET UNITYSDK_OFFSET(0x1771A370)
#define CLASS_1_206B9C61F250CAAF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1771A6F0)
#define CLASS_1_206B9C61F250CAAF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1771A870)
#define CLASS_1_206B9C61F250CAAF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1771ACC0)

inline static constexpr unsigned int Class_1_206B9C61F250CAAF_TypeDefinitionIndex = 14074;

class Class_1_206B9C61F250CAAF : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_206B9C61F250CAAF_TypeDefinitionIndex)->GetStaticField(0x1FFC0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_206B9C61F250CAAF_TypeDefinitionIndex)->GetStaticField(0x1FFC8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_206B9C61F250CAAF_TypeDefinitionIndex)->GetStaticField(0x1FFD0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_206B9C61F250CAAF_TypeDefinitionIndex)->GetStaticField(0x8660);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_206B9C61F250CAAF_TypeDefinitionIndex)->GetStaticField(0x8661);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*>* Method_1_26E2BEC3CE39E0F7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_26E2BEC3CE39E0F7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*> Method_1_EF5DA090DEA74190()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartyStepConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_EF5DA090DEA74190_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartyStepConfigRow* Method_1_C4A3908CE2ACBE71(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TrainPartyStepConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_C4A3908CE2ACBE71_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A4628FE7E8799395(::RPG::GameCore::TrainPartyStepConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartyStepConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_206B9C61F250CAAF_METHOD_1_A4628FE7E8799395_OFFSET))(a1);
	}
};
