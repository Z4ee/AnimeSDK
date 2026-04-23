#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChenLingPrivilegeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1878A390)
#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1878A1B0)
#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_6639D366DD27E24D_OFFSET UNITYSDK_OFFSET(0x1878A3E0)
#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18789B70)
#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_922BF32FCD3296D6_OFFSET UNITYSDK_OFFSET(0x18789AF0)
#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1878A250)
#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_AFC064D6CD86AAA4_OFFSET UNITYSDK_OFFSET(0x18789E20)
#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18789DC0)
#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1878A170)
#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1878A2F0)
#define CLASS_1_0BA0954B28B5AD8C_METHOD_1_FCFE2353C32699E6_OFFSET UNITYSDK_OFFSET(0x18789FA0)
#define CLASS_1_0BA0954B28B5AD8C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1878A6F0)

inline static constexpr unsigned int Class_1_0BA0954B28B5AD8C_TypeDefinitionIndex = 10606;

class Class_1_0BA0954B28B5AD8C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0BA0954B28B5AD8C_TypeDefinitionIndex)->GetStaticField(0x1C100);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0BA0954B28B5AD8C_TypeDefinitionIndex)->GetStaticField(0x1C108);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0BA0954B28B5AD8C_TypeDefinitionIndex)->GetStaticField(0x1C110);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0BA0954B28B5AD8C_TypeDefinitionIndex)->GetStaticField(0x73C0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0BA0954B28B5AD8C_TypeDefinitionIndex)->GetStaticField(0x73C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>* Method_1_922BF32FCD3296D6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_922BF32FCD3296D6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*> Method_1_AFC064D6CD86AAA4()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChenLingPrivilegeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_AFC064D6CD86AAA4_OFFSET))();
	}

	static ::RPG::GameCore::ChenLingPrivilegeRow* Method_1_FCFE2353C32699E6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChenLingPrivilegeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_FCFE2353C32699E6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6639D366DD27E24D(::RPG::GameCore::ChenLingPrivilegeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChenLingPrivilegeRow*))((::PBYTE)hIl2Cpp + CLASS_1_0BA0954B28B5AD8C_METHOD_1_6639D366DD27E24D_OFFSET))(a1);
	}
};
