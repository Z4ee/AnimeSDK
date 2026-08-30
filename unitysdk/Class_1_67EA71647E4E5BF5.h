#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarEnhancedSkillTreeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_67EA71647E4E5BF5_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C96DA10)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_2369ACBDEBBF1084_OFFSET UNITYSDK_OFFSET(0x1C96D670)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_330303233A7353D2_OFFSET UNITYSDK_OFFSET(0x1C96D500)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_74D3BBBF681AEA7D_OFFSET UNITYSDK_OFFSET(0x1C96D1F0)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C96D840)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C96D8D0)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C96D4A0)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C96D270)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C96D800)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C96D970)
#define CLASS_1_67EA71647E4E5BF5_METHOD_1_FC668AB4FB0B0BF7_OFFSET UNITYSDK_OFFSET(0x1C96DA60)
#define CLASS_1_67EA71647E4E5BF5__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C96DDD0)

inline static constexpr unsigned int Class_1_67EA71647E4E5BF5_TypeDefinitionIndex = 12700;

class Class_1_67EA71647E4E5BF5 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67EA71647E4E5BF5_TypeDefinitionIndex)->GetStaticField(0x2A0E0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67EA71647E4E5BF5_TypeDefinitionIndex)->GetStaticField(0x2A0E8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67EA71647E4E5BF5_TypeDefinitionIndex)->GetStaticField(0x2A0F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_67EA71647E4E5BF5_TypeDefinitionIndex)->GetStaticField(0xC4A0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_67EA71647E4E5BF5_TypeDefinitionIndex)->GetStaticField(0xC4A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>* Method_1_74D3BBBF681AEA7D()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_74D3BBBF681AEA7D_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*> Method_1_330303233A7353D2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEnhancedSkillTreeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_330303233A7353D2_OFFSET))();
	}

	static ::RPG::GameCore::AvatarEnhancedSkillTreeRow* Method_1_2369ACBDEBBF1084(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarEnhancedSkillTreeRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_2369ACBDEBBF1084_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FC668AB4FB0B0BF7(::RPG::GameCore::AvatarEnhancedSkillTreeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarEnhancedSkillTreeRow*))((::PBYTE)hIl2Cpp + CLASS_1_67EA71647E4E5BF5_METHOD_1_FC668AB4FB0B0BF7_OFFSET))(a1);
	}
};
