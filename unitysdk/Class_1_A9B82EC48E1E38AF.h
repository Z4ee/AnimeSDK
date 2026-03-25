#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_A9B82EC48E1E38AF_Class_1_C59A10619F3AB0D2;
namespace RPG::GameCore { class ClientLogConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x16B66800)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_23EFBF11B2BD5B5F_OFFSET UNITYSDK_OFFSET(0x16B66C00)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_30D1209326FA87FC_1_OFFSET UNITYSDK_OFFSET(0x16B66B60)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16B66620)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_45456ABB6F0BC57C_OFFSET UNITYSDK_OFFSET(0x16B65F60)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16B65FE0)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_79A410EE2D6AFEC4_OFFSET UNITYSDK_OFFSET(0x16B66410)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16B666C0)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16B66230)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_E5D4B8C8A422F3CE_OFFSET UNITYSDK_OFFSET(0x16B66290)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_E60334603300E793_OFFSET UNITYSDK_OFFSET(0x16B66850)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_EAD10B3E55E2C4C5_OFFSET UNITYSDK_OFFSET(0x16B66CC0)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16B665E0)
#define CLASS_1_A9B82EC48E1E38AF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16B66760)
#define CLASS_1_A9B82EC48E1E38AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B671C0)

inline static constexpr unsigned int Class_1_A9B82EC48E1E38AF_TypeDefinitionIndex = 12077;

class Class_1_A9B82EC48E1E38AF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9B82EC48E1E38AF_TypeDefinitionIndex)->GetStaticField(0x2A600);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A9B82EC48E1E38AF_Class_1_C59A10619F3AB0D2*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_A9B82EC48E1E38AF_Class_1_C59A10619F3AB0D2*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9B82EC48E1E38AF_TypeDefinitionIndex)->GetStaticField(0x2A608);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9B82EC48E1E38AF_TypeDefinitionIndex)->GetStaticField(0x2A610);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9B82EC48E1E38AF_TypeDefinitionIndex)->GetStaticField(0x2A618);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9B82EC48E1E38AF_TypeDefinitionIndex)->GetStaticField(0xDF60);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A9B82EC48E1E38AF_TypeDefinitionIndex)->GetStaticField(0xDF61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*>* Method_1_45456ABB6F0BC57C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_45456ABB6F0BC57C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*> Method_1_E5D4B8C8A422F3CE()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ClientLogConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_E5D4B8C8A422F3CE_OFFSET))();
	}

	static ::RPG::GameCore::ClientLogConfigRow* Method_1_79A410EE2D6AFEC4(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ClientLogConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_79A410EE2D6AFEC4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_E60334603300E793(::RPG::GameCore::ClientLogConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ClientLogConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_E60334603300E793_OFFSET))(a1);
	}

	static ::System::Void Method_1_30D1209326FA87FC_1()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_30D1209326FA87FC_1_OFFSET))();
	}

	static ::Class_1_A9B82EC48E1E38AF_Class_1_C59A10619F3AB0D2* Method_1_23EFBF11B2BD5B5F(::System::UInt32 a1)
	{
		return ((::Class_1_A9B82EC48E1E38AF_Class_1_C59A10619F3AB0D2*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_23EFBF11B2BD5B5F_OFFSET))(a1);
	}

	static ::System::Void Method_1_EAD10B3E55E2C4C5()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A9B82EC48E1E38AF_METHOD_1_EAD10B3E55E2C4C5_OFFSET))();
	}
};
