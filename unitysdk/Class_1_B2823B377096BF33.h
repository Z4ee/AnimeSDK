#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class TreasureDungeonGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B2823B377096BF33_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16EC60B0)
#define CLASS_1_B2823B377096BF33_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16EC5ED0)
#define CLASS_1_B2823B377096BF33_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16EC5890)
#define CLASS_1_B2823B377096BF33_METHOD_1_86D452080E7501F3_OFFSET UNITYSDK_OFFSET(0x16EC5B40)
#define CLASS_1_B2823B377096BF33_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16EC5F70)
#define CLASS_1_B2823B377096BF33_METHOD_1_B78E33363B5816E8_OFFSET UNITYSDK_OFFSET(0x16EC6100)
#define CLASS_1_B2823B377096BF33_METHOD_1_C575653A2CD7F56B_OFFSET UNITYSDK_OFFSET(0x16EC5810)
#define CLASS_1_B2823B377096BF33_METHOD_1_CA6314C3DC81ADA5_OFFSET UNITYSDK_OFFSET(0x16EC5CC0)
#define CLASS_1_B2823B377096BF33_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16EC5AE0)
#define CLASS_1_B2823B377096BF33_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16EC5E90)
#define CLASS_1_B2823B377096BF33_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16EC6010)
#define CLASS_1_B2823B377096BF33__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EC6410)

inline static constexpr unsigned int Class_1_B2823B377096BF33_TypeDefinitionIndex = 11419;

class Class_1_B2823B377096BF33 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2823B377096BF33_TypeDefinitionIndex)->GetStaticField(0x2CA60);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2823B377096BF33_TypeDefinitionIndex)->GetStaticField(0x2CA68);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2823B377096BF33_TypeDefinitionIndex)->GetStaticField(0x2CA70);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2823B377096BF33_TypeDefinitionIndex)->GetStaticField(0xEDA0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B2823B377096BF33_TypeDefinitionIndex)->GetStaticField(0xEDA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*>* Method_1_C575653A2CD7F56B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_C575653A2CD7F56B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*> Method_1_86D452080E7501F3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::TreasureDungeonGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_86D452080E7501F3_OFFSET))();
	}

	static ::RPG::GameCore::TreasureDungeonGroupConfigRow* Method_1_CA6314C3DC81ADA5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::TreasureDungeonGroupConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_CA6314C3DC81ADA5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_B78E33363B5816E8(::RPG::GameCore::TreasureDungeonGroupConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::TreasureDungeonGroupConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B2823B377096BF33_METHOD_1_B78E33363B5816E8_OFFSET))(a1);
	}
};
