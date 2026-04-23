#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AetherDivideActivityQuestRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1ABC578433252912_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18FB0C80)
#define CLASS_1_1ABC578433252912_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18FB0AA0)
#define CLASS_1_1ABC578433252912_METHOD_1_5FDC2C050B7D05C7_OFFSET UNITYSDK_OFFSET(0x18FB0CD0)
#define CLASS_1_1ABC578433252912_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18FB04B0)
#define CLASS_1_1ABC578433252912_METHOD_1_76FA60E978B1A98A_OFFSET UNITYSDK_OFFSET(0x18FB0760)
#define CLASS_1_1ABC578433252912_METHOD_1_A6D7608AD56CBD08_OFFSET UNITYSDK_OFFSET(0x18FB0430)
#define CLASS_1_1ABC578433252912_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FB0B40)
#define CLASS_1_1ABC578433252912_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FB0700)
#define CLASS_1_1ABC578433252912_METHOD_1_DD4F05F95AA73EA9_OFFSET UNITYSDK_OFFSET(0x18FB08E0)
#define CLASS_1_1ABC578433252912_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FB0A60)
#define CLASS_1_1ABC578433252912_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FB0BE0)
#define CLASS_1_1ABC578433252912__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FB0FE0)

inline static constexpr unsigned int Class_1_1ABC578433252912_TypeDefinitionIndex = 10486;

class Class_1_1ABC578433252912 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1ABC578433252912_TypeDefinitionIndex)->GetStaticField(0x29520);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1ABC578433252912_TypeDefinitionIndex)->GetStaticField(0x29528);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1ABC578433252912_TypeDefinitionIndex)->GetStaticField(0x29530);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1ABC578433252912_TypeDefinitionIndex)->GetStaticField(0xAFF0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1ABC578433252912_TypeDefinitionIndex)->GetStaticField(0xAFF1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*>* Method_1_A6D7608AD56CBD08()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_A6D7608AD56CBD08_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*> Method_1_76FA60E978B1A98A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AetherDivideActivityQuestRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_76FA60E978B1A98A_OFFSET))();
	}

	static ::RPG::GameCore::AetherDivideActivityQuestRow* Method_1_DD4F05F95AA73EA9(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AetherDivideActivityQuestRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_DD4F05F95AA73EA9_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_5FDC2C050B7D05C7(::RPG::GameCore::AetherDivideActivityQuestRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AetherDivideActivityQuestRow*))((::PBYTE)hIl2Cpp + CLASS_1_1ABC578433252912_METHOD_1_5FDC2C050B7D05C7_OFFSET))(a1);
	}
};
