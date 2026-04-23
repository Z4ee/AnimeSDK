#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightBackSkillExtraDescConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_89B9D6A2078EC190_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18403720)
#define CLASS_1_89B9D6A2078EC190_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18403540)
#define CLASS_1_89B9D6A2078EC190_METHOD_1_43ACD0F194CEB2AC_OFFSET UNITYSDK_OFFSET(0x18402E50)
#define CLASS_1_89B9D6A2078EC190_METHOD_1_6887A3CFC792769D_OFFSET UNITYSDK_OFFSET(0x18403180)
#define CLASS_1_89B9D6A2078EC190_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18402ED0)
#define CLASS_1_89B9D6A2078EC190_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x184035E0)
#define CLASS_1_89B9D6A2078EC190_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18403120)
#define CLASS_1_89B9D6A2078EC190_METHOD_1_E4281507402A0BD8_OFFSET UNITYSDK_OFFSET(0x18403770)
#define CLASS_1_89B9D6A2078EC190_METHOD_1_EE91E504985400A2_OFFSET UNITYSDK_OFFSET(0x18403330)
#define CLASS_1_89B9D6A2078EC190_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18403500)
#define CLASS_1_89B9D6A2078EC190_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18403680)
#define CLASS_1_89B9D6A2078EC190__CCTOR_OFFSET UNITYSDK_OFFSET(0x18403AD0)

inline static constexpr unsigned int Class_1_89B9D6A2078EC190_TypeDefinitionIndex = 12810;

class Class_1_89B9D6A2078EC190 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89B9D6A2078EC190_TypeDefinitionIndex)->GetStaticField(0x26960);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89B9D6A2078EC190_TypeDefinitionIndex)->GetStaticField(0x26968);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89B9D6A2078EC190_TypeDefinitionIndex)->GetStaticField(0x26970);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_89B9D6A2078EC190_TypeDefinitionIndex)->GetStaticField(0xA320);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_89B9D6A2078EC190_TypeDefinitionIndex)->GetStaticField(0xA321);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*>* Method_1_43ACD0F194CEB2AC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_43ACD0F194CEB2AC_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*> Method_1_6887A3CFC792769D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_6887A3CFC792769D_OFFSET))();
	}

	static ::RPG::GameCore::GridFightBackSkillExtraDescConfigRow* Method_1_EE91E504985400A2(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_EE91E504985400A2_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E4281507402A0BD8(::RPG::GameCore::GridFightBackSkillExtraDescConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightBackSkillExtraDescConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_89B9D6A2078EC190_METHOD_1_E4281507402A0BD8_OFFSET))(a1);
	}
};
