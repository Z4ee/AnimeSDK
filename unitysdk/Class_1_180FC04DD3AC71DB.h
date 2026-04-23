#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingBuildingRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_180FC04DD3AC71DB_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18D92DA0)
#define CLASS_1_180FC04DD3AC71DB_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18D92BC0)
#define CLASS_1_180FC04DD3AC71DB_METHOD_1_507706868CB5A90F_OFFSET UNITYSDK_OFFSET(0x18D92520)
#define CLASS_1_180FC04DD3AC71DB_METHOD_1_5A77D8E9DFABF40E_OFFSET UNITYSDK_OFFSET(0x18D92DF0)
#define CLASS_1_180FC04DD3AC71DB_METHOD_1_5A841104D432F49A_OFFSET UNITYSDK_OFFSET(0x18D92A00)
#define CLASS_1_180FC04DD3AC71DB_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18D925A0)
#define CLASS_1_180FC04DD3AC71DB_METHOD_1_98DC746A2F0278D0_OFFSET UNITYSDK_OFFSET(0x18D92850)
#define CLASS_1_180FC04DD3AC71DB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18D92C60)
#define CLASS_1_180FC04DD3AC71DB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18D927F0)
#define CLASS_1_180FC04DD3AC71DB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18D92B80)
#define CLASS_1_180FC04DD3AC71DB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18D92D00)
#define CLASS_1_180FC04DD3AC71DB__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D93100)

inline static constexpr unsigned int Class_1_180FC04DD3AC71DB_TypeDefinitionIndex = 10583;

class Class_1_180FC04DD3AC71DB : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_180FC04DD3AC71DB_TypeDefinitionIndex)->GetStaticField(0x26870);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_180FC04DD3AC71DB_TypeDefinitionIndex)->GetStaticField(0x26878);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_180FC04DD3AC71DB_TypeDefinitionIndex)->GetStaticField(0x26880);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_180FC04DD3AC71DB_TypeDefinitionIndex)->GetStaticField(0xA2C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_180FC04DD3AC71DB_TypeDefinitionIndex)->GetStaticField(0xA2C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*>* Method_1_507706868CB5A90F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_507706868CB5A90F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*> Method_1_98DC746A2F0278D0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingBuildingRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_98DC746A2F0278D0_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingBuildingRow* Method_1_5A841104D432F49A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingBuildingRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_5A841104D432F49A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5A77D8E9DFABF40E(::RPG::GameCore::ChenLingBuildingRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingBuildingRow*))((::PBYTE)hIl2Cpp + CLASS_1_180FC04DD3AC71DB_METHOD_1_5A77D8E9DFABF40E_OFFSET))(a1);
	}
};
