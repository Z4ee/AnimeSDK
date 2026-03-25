#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TrainPartySlotConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BC4E520AF79C0241_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16E0AE10)
#define CLASS_1_BC4E520AF79C0241_METHOD_1_2F0487DC1FE035AA_OFFSET UNITYSDK_OFFSET(0x16E0A870)
#define CLASS_1_BC4E520AF79C0241_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16E0AC30)
#define CLASS_1_BC4E520AF79C0241_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16E0A5C0)
#define CLASS_1_BC4E520AF79C0241_METHOD_1_88B98C41A18D6367_OFFSET UNITYSDK_OFFSET(0x16E0AA20)
#define CLASS_1_BC4E520AF79C0241_METHOD_1_A4E6841B3696D3A3_OFFSET UNITYSDK_OFFSET(0x16E0AE60)
#define CLASS_1_BC4E520AF79C0241_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16E0ACD0)
#define CLASS_1_BC4E520AF79C0241_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16E0A810)
#define CLASS_1_BC4E520AF79C0241_METHOD_1_D846C1E2323ABC45_OFFSET UNITYSDK_OFFSET(0x16E0A540)
#define CLASS_1_BC4E520AF79C0241_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16E0ABF0)
#define CLASS_1_BC4E520AF79C0241_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16E0AD70)
#define CLASS_1_BC4E520AF79C0241__CCTOR_OFFSET UNITYSDK_OFFSET(0x16E0B1C0)

inline static constexpr unsigned int Class_1_BC4E520AF79C0241_TypeDefinitionIndex = 14078;

class Class_1_BC4E520AF79C0241 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySlotConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySlotConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC4E520AF79C0241_TypeDefinitionIndex)->GetStaticField(0x184E0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC4E520AF79C0241_TypeDefinitionIndex)->GetStaticField(0x184E8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC4E520AF79C0241_TypeDefinitionIndex)->GetStaticField(0x184F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC4E520AF79C0241_TypeDefinitionIndex)->GetStaticField(0x6F00);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC4E520AF79C0241_TypeDefinitionIndex)->GetStaticField(0x6F01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySlotConfigRow*>* Method_1_D846C1E2323ABC45()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySlotConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_D846C1E2323ABC45_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySlotConfigRow*> Method_1_2F0487DC1FE035AA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TrainPartySlotConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_2F0487DC1FE035AA_OFFSET))();
	}

	static ::RPG::GameCore::TrainPartySlotConfigRow* Method_1_88B98C41A18D6367(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TrainPartySlotConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_88B98C41A18D6367_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A4E6841B3696D3A3(::RPG::GameCore::TrainPartySlotConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TrainPartySlotConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_BC4E520AF79C0241_METHOD_1_A4E6841B3696D3A3_OFFSET))(a1);
	}
};
