#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveEquipSlotRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x183599D0)
#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_2988E130FABDB4BB_OFFSET UNITYSDK_OFFSET(0x183595E0)
#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x183597F0)
#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x183591B0)
#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_930EC6446B0F3991_OFFSET UNITYSDK_OFFSET(0x18359130)
#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18359890)
#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_B55B98159B1E5BA6_OFFSET UNITYSDK_OFFSET(0x18359A20)
#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18359400)
#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x183597B0)
#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18359930)
#define CLASS_1_7DF87DE1D466FDC5_METHOD_1_F805880EABAACA51_OFFSET UNITYSDK_OFFSET(0x18359460)
#define CLASS_1_7DF87DE1D466FDC5__CCTOR_OFFSET UNITYSDK_OFFSET(0x18359D30)

inline static constexpr unsigned int Class_1_7DF87DE1D466FDC5_TypeDefinitionIndex = 11195;

class Class_1_7DF87DE1D466FDC5 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DF87DE1D466FDC5_TypeDefinitionIndex)->GetStaticField(0x2A170);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DF87DE1D466FDC5_TypeDefinitionIndex)->GetStaticField(0x2A178);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DF87DE1D466FDC5_TypeDefinitionIndex)->GetStaticField(0x2A180);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DF87DE1D466FDC5_TypeDefinitionIndex)->GetStaticField(0xB3F0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7DF87DE1D466FDC5_TypeDefinitionIndex)->GetStaticField(0xB3F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*>* Method_1_930EC6446B0F3991()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_930EC6446B0F3991_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*> Method_1_F805880EABAACA51()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEquipSlotRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_F805880EABAACA51_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveEquipSlotRow* Method_1_2988E130FABDB4BB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveEquipSlotRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_2988E130FABDB4BB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B55B98159B1E5BA6(::RPG::GameCore::IdleLiveEquipSlotRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveEquipSlotRow*))((::PBYTE)hIl2Cpp + CLASS_1_7DF87DE1D466FDC5_METHOD_1_B55B98159B1E5BA6_OFFSET))(a1);
	}
};
