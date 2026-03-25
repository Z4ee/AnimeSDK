#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MarbleBuffConditionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B52BC2B362B0F986_METHOD_1_08BF23101FBF10C6_OFFSET UNITYSDK_OFFSET(0x16C30950)
#define CLASS_1_B52BC2B362B0F986_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C31220)
#define CLASS_1_B52BC2B362B0F986_METHOD_1_1E430039DC68765B_OFFSET UNITYSDK_OFFSET(0x16C30C80)
#define CLASS_1_B52BC2B362B0F986_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C31040)
#define CLASS_1_B52BC2B362B0F986_METHOD_1_5E4CD7C330225672_OFFSET UNITYSDK_OFFSET(0x16C31270)
#define CLASS_1_B52BC2B362B0F986_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C309D0)
#define CLASS_1_B52BC2B362B0F986_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C310E0)
#define CLASS_1_B52BC2B362B0F986_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C30C20)
#define CLASS_1_B52BC2B362B0F986_METHOD_1_E05362ACF1C69F7C_OFFSET UNITYSDK_OFFSET(0x16C30E30)
#define CLASS_1_B52BC2B362B0F986_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C31000)
#define CLASS_1_B52BC2B362B0F986_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C31180)
#define CLASS_1_B52BC2B362B0F986__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C315D0)

inline static constexpr unsigned int Class_1_B52BC2B362B0F986_TypeDefinitionIndex = 10922;

class Class_1_B52BC2B362B0F986 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B52BC2B362B0F986_TypeDefinitionIndex)->GetStaticField(0x2AFB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B52BC2B362B0F986_TypeDefinitionIndex)->GetStaticField(0x2AFB8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B52BC2B362B0F986_TypeDefinitionIndex)->GetStaticField(0x2AFC0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B52BC2B362B0F986_TypeDefinitionIndex)->GetStaticField(0xE310);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B52BC2B362B0F986_TypeDefinitionIndex)->GetStaticField(0xE311);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*>* Method_1_08BF23101FBF10C6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_08BF23101FBF10C6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*> Method_1_1E430039DC68765B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MarbleBuffConditionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_1E430039DC68765B_OFFSET))();
	}

	static ::RPG::GameCore::MarbleBuffConditionRow* Method_1_E05362ACF1C69F7C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MarbleBuffConditionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_E05362ACF1C69F7C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5E4CD7C330225672(::RPG::GameCore::MarbleBuffConditionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MarbleBuffConditionRow*))((::PBYTE)hIl2Cpp + CLASS_1_B52BC2B362B0F986_METHOD_1_5E4CD7C330225672_OFFSET))(a1);
	}
};
