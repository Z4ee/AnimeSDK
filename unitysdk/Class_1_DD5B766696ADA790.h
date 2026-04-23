#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ILHardLevelGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DD5B766696ADA790_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x182C2850)
#define CLASS_1_DD5B766696ADA790_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182C24F0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182C1E40)
#define CLASS_1_DD5B766696ADA790_METHOD_1_6D454F77C898080C_OFFSET UNITYSDK_OFFSET(0x182C1DC0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_8BAE24B8BD7F85D8_OFFSET UNITYSDK_OFFSET(0x182C28A0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_A983ED6FBD25106D_OFFSET UNITYSDK_OFFSET(0x182C20F0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182C2590)
#define CLASS_1_DD5B766696ADA790_METHOD_1_BE08B76357A1453C_OFFSET UNITYSDK_OFFSET(0x182C22A0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182C2090)
#define CLASS_1_DD5B766696ADA790_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182C24B0)
#define CLASS_1_DD5B766696ADA790_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182C27B0)
#define CLASS_1_DD5B766696ADA790__CCTOR_OFFSET UNITYSDK_OFFSET(0x182C2C50)

inline static constexpr unsigned int Class_1_DD5B766696ADA790_TypeDefinitionIndex = 13073;

class Class_1_DD5B766696ADA790 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD5B766696ADA790_TypeDefinitionIndex)->GetStaticField(0x22560);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD5B766696ADA790_TypeDefinitionIndex)->GetStaticField(0x22568);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD5B766696ADA790_TypeDefinitionIndex)->GetStaticField(0x22570);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD5B766696ADA790_TypeDefinitionIndex)->GetStaticField(0x8A10);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DD5B766696ADA790_TypeDefinitionIndex)->GetStaticField(0x8A11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>* Method_1_6D454F77C898080C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_6D454F77C898080C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*> Method_1_A983ED6FBD25106D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ILHardLevelGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_A983ED6FBD25106D_OFFSET))();
	}

	static ::RPG::GameCore::ILHardLevelGroupConfigRow* Method_1_BE08B76357A1453C(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ILHardLevelGroupConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_BE08B76357A1453C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8BAE24B8BD7F85D8(::RPG::GameCore::ILHardLevelGroupConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ILHardLevelGroupConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_DD5B766696ADA790_METHOD_1_8BAE24B8BD7F85D8_OFFSET))(a1);
	}
};
