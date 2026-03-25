#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSeasonTalentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_89150B6CBBFF4878_METHOD_1_05BA18C41301CC54_OFFSET UNITYSDK_OFFSET(0x170CC060)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_0B83574AD61C062A_OFFSET UNITYSDK_OFFSET(0x170CC510)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x170CC900)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x170CC720)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_4D528FDF4D106659_OFFSET UNITYSDK_OFFSET(0x170CC950)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x170CC0E0)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_9BADB21DFCB05D76_OFFSET UNITYSDK_OFFSET(0x170CC390)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x170CC7C0)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x170CC330)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x170CC6E0)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x170CC860)
#define CLASS_1_89150B6CBBFF4878__CCTOR_OFFSET UNITYSDK_OFFSET(0x170CCC60)

inline static constexpr unsigned int Class_1_89150B6CBBFF4878_TypeDefinitionIndex = 12410;

class Class_1_89150B6CBBFF4878 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89150B6CBBFF4878_TypeDefinitionIndex)->GetStaticField(0x18D70);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89150B6CBBFF4878_TypeDefinitionIndex)->GetStaticField(0x18D78);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89150B6CBBFF4878_TypeDefinitionIndex)->GetStaticField(0x18D80);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_89150B6CBBFF4878_TypeDefinitionIndex)->GetStaticField(0x7140);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_89150B6CBBFF4878_TypeDefinitionIndex)->GetStaticField(0x7141);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>* Method_1_05BA18C41301CC54()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_05BA18C41301CC54_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*> Method_1_9BADB21DFCB05D76()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_9BADB21DFCB05D76_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSeasonTalentConfigRow* Method_1_0B83574AD61C062A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightSeasonTalentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_0B83574AD61C062A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D528FDF4D106659(::RPG::GameCore::GridFightSeasonTalentConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonTalentConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_4D528FDF4D106659_OFFSET))(a1);
	}
};
