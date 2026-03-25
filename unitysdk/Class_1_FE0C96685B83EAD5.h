#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingSkillTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FE0C96685B83EAD5_METHOD_1_00011E83145C34BF_OFFSET UNITYSDK_OFFSET(0x16BC3FA0)
#define CLASS_1_FE0C96685B83EAD5_METHOD_1_00EAA3540CFF1619_OFFSET UNITYSDK_OFFSET(0x16BC3680)
#define CLASS_1_FE0C96685B83EAD5_METHOD_1_02C2E0DCB6692706_OFFSET UNITYSDK_OFFSET(0x16BC39B0)
#define CLASS_1_FE0C96685B83EAD5_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16BC3F50)
#define CLASS_1_FE0C96685B83EAD5_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16BC3D70)
#define CLASS_1_FE0C96685B83EAD5_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16BC3700)
#define CLASS_1_FE0C96685B83EAD5_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16BC3E10)
#define CLASS_1_FE0C96685B83EAD5_METHOD_1_BD181E8A025A2BCB_OFFSET UNITYSDK_OFFSET(0x16BC3B60)
#define CLASS_1_FE0C96685B83EAD5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16BC3950)
#define CLASS_1_FE0C96685B83EAD5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16BC3D30)
#define CLASS_1_FE0C96685B83EAD5_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16BC3EB0)
#define CLASS_1_FE0C96685B83EAD5__CCTOR_OFFSET UNITYSDK_OFFSET(0x16BC4300)

inline static constexpr unsigned int Class_1_FE0C96685B83EAD5_TypeDefinitionIndex = 11370;

class Class_1_FE0C96685B83EAD5 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE0C96685B83EAD5_TypeDefinitionIndex)->GetStaticField(0x27850);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE0C96685B83EAD5_TypeDefinitionIndex)->GetStaticField(0x27858);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE0C96685B83EAD5_TypeDefinitionIndex)->GetStaticField(0x27860);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE0C96685B83EAD5_TypeDefinitionIndex)->GetStaticField(0xCEC0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE0C96685B83EAD5_TypeDefinitionIndex)->GetStaticField(0xCEC1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>* Method_1_00EAA3540CFF1619()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_00EAA3540CFF1619_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*> Method_1_02C2E0DCB6692706()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingSkillTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_02C2E0DCB6692706_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingSkillTypeRow* Method_1_BD181E8A025A2BCB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SwordTrainingSkillTypeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_BD181E8A025A2BCB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_00011E83145C34BF(::RPG::GameCore::SwordTrainingSkillTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingSkillTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_FE0C96685B83EAD5_METHOD_1_00011E83145C34BF_OFFSET))(a1);
	}
};
