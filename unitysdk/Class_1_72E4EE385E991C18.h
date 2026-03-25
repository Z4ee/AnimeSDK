#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityActiveConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_72E4EE385E991C18_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x170D9BD0)
#define CLASS_1_72E4EE385E991C18_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x170D99F0)
#define CLASS_1_72E4EE385E991C18_METHOD_1_5379495C82542EEE_OFFSET UNITYSDK_OFFSET(0x170D9330)
#define CLASS_1_72E4EE385E991C18_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x170D93B0)
#define CLASS_1_72E4EE385E991C18_METHOD_1_A1E50BC56D5632CC_OFFSET UNITYSDK_OFFSET(0x170D97E0)
#define CLASS_1_72E4EE385E991C18_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x170D9A90)
#define CLASS_1_72E4EE385E991C18_METHOD_1_C7060982B8D27DCB_OFFSET UNITYSDK_OFFSET(0x170D9C20)
#define CLASS_1_72E4EE385E991C18_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x170D9600)
#define CLASS_1_72E4EE385E991C18_METHOD_1_D2BA4C08AA3BB15C_OFFSET UNITYSDK_OFFSET(0x170D9660)
#define CLASS_1_72E4EE385E991C18_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x170D99B0)
#define CLASS_1_72E4EE385E991C18_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x170D9B30)
#define CLASS_1_72E4EE385E991C18__CCTOR_OFFSET UNITYSDK_OFFSET(0x170D9F30)

inline static constexpr unsigned int Class_1_72E4EE385E991C18_TypeDefinitionIndex = 10225;

class Class_1_72E4EE385E991C18 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72E4EE385E991C18_TypeDefinitionIndex)->GetStaticField(0x19160);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72E4EE385E991C18_TypeDefinitionIndex)->GetStaticField(0x19168);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_72E4EE385E991C18_TypeDefinitionIndex)->GetStaticField(0x19170);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_72E4EE385E991C18_TypeDefinitionIndex)->GetStaticField(0x7240);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_72E4EE385E991C18_TypeDefinitionIndex)->GetStaticField(0x7241);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*>* Method_1_5379495C82542EEE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_5379495C82542EEE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*> Method_1_D2BA4C08AA3BB15C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityActiveConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_D2BA4C08AA3BB15C_OFFSET))();
	}

	static ::RPG::GameCore::ActivityActiveConfigRow* Method_1_A1E50BC56D5632CC(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityActiveConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_A1E50BC56D5632CC_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C7060982B8D27DCB(::RPG::GameCore::ActivityActiveConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityActiveConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_72E4EE385E991C18_METHOD_1_C7060982B8D27DCB_OFFSET))(a1);
	}
};
