#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeartDialScriptRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1898AA00)
#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_19EE1EA1DCA4BA63_OFFSET UNITYSDK_OFFSET(0x1898AA50)
#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1898A820)
#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_4065B28898EB2E56_OFFSET UNITYSDK_OFFSET(0x1898A160)
#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1898A1E0)
#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1898A8C0)
#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_C29AD7355C3CF2BC_OFFSET UNITYSDK_OFFSET(0x1898A490)
#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1898A430)
#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_EF3081509A0A8E14_OFFSET UNITYSDK_OFFSET(0x1898A610)
#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1898A7E0)
#define CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1898A960)
#define CLASS_1_BC90BC4E3FEA0B3E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1898AD60)

inline static constexpr unsigned int Class_1_BC90BC4E3FEA0B3E_TypeDefinitionIndex = 12990;

class Class_1_BC90BC4E3FEA0B3E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC90BC4E3FEA0B3E_TypeDefinitionIndex)->GetStaticField(0x21AC0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC90BC4E3FEA0B3E_TypeDefinitionIndex)->GetStaticField(0x21AC8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC90BC4E3FEA0B3E_TypeDefinitionIndex)->GetStaticField(0x21AD0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC90BC4E3FEA0B3E_TypeDefinitionIndex)->GetStaticField(0x85D0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_BC90BC4E3FEA0B3E_TypeDefinitionIndex)->GetStaticField(0x85D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*>* Method_1_4065B28898EB2E56()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_4065B28898EB2E56_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*> Method_1_C29AD7355C3CF2BC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialScriptRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_C29AD7355C3CF2BC_OFFSET))();
	}

	static ::RPG::GameCore::HeartDialScriptRow* Method_1_EF3081509A0A8E14(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::HeartDialScriptRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_EF3081509A0A8E14_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_19EE1EA1DCA4BA63(::RPG::GameCore::HeartDialScriptRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::HeartDialScriptRow*))((::PBYTE)hIl2Cpp + CLASS_1_BC90BC4E3FEA0B3E_METHOD_1_19EE1EA1DCA4BA63_OFFSET))(a1);
	}
};
