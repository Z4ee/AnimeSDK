#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSubTraitBasicInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_01E1DD50BDE8AACB_OFFSET UNITYSDK_OFFSET(0x179A6500)
#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x179A6DD0)
#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_2202386FBF49450D_OFFSET UNITYSDK_OFFSET(0x179A69E0)
#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179A6BF0)
#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_606B4F50EED0A779_OFFSET UNITYSDK_OFFSET(0x179A6E20)
#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179A6580)
#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x179A6C90)
#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179A67D0)
#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x179A6BB0)
#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x179A6D30)
#define CLASS_1_C24C5F1AE344EE1B_METHOD_1_FB317DC31960BB6C_OFFSET UNITYSDK_OFFSET(0x179A6830)
#define CLASS_1_C24C5F1AE344EE1B__CCTOR_OFFSET UNITYSDK_OFFSET(0x179A7180)

inline static constexpr unsigned int Class_1_C24C5F1AE344EE1B_TypeDefinitionIndex = 12522;

class Class_1_C24C5F1AE344EE1B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C24C5F1AE344EE1B_TypeDefinitionIndex)->GetStaticField(0x25DB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C24C5F1AE344EE1B_TypeDefinitionIndex)->GetStaticField(0x25DB8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C24C5F1AE344EE1B_TypeDefinitionIndex)->GetStaticField(0x25DC0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C24C5F1AE344EE1B_TypeDefinitionIndex)->GetStaticField(0xC400);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C24C5F1AE344EE1B_TypeDefinitionIndex)->GetStaticField(0xC401);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*>* Method_1_01E1DD50BDE8AACB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_01E1DD50BDE8AACB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*> Method_1_FB317DC31960BB6C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSubTraitBasicInfoRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_FB317DC31960BB6C_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSubTraitBasicInfoRow* Method_1_2202386FBF49450D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightSubTraitBasicInfoRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_2202386FBF49450D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_606B4F50EED0A779(::RPG::GameCore::GridFightSubTraitBasicInfoRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSubTraitBasicInfoRow*))((::PBYTE)hIl2Cpp + CLASS_1_C24C5F1AE344EE1B_METHOD_1_606B4F50EED0A779_OFFSET))(a1);
	}
};
