#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueMagicScoreRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D1041E58B4545442_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1ACD7440)
#define CLASS_1_D1041E58B4545442_METHOD_1_4306C3A0C1F7911A_OFFSET UNITYSDK_OFFSET(0x1ACD7020)
#define CLASS_1_D1041E58B4545442_METHOD_1_8211346DAA8B2B6F_OFFSET UNITYSDK_OFFSET(0x1ACD6EB0)
#define CLASS_1_D1041E58B4545442_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1ACD7270)
#define CLASS_1_D1041E58B4545442_METHOD_1_92046C214975638E_OFFSET UNITYSDK_OFFSET(0x1ACD7490)
#define CLASS_1_D1041E58B4545442_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1ACD7300)
#define CLASS_1_D1041E58B4545442_METHOD_1_BF74F9BB090877C2_OFFSET UNITYSDK_OFFSET(0x1ACD6BA0)
#define CLASS_1_D1041E58B4545442_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1ACD6E50)
#define CLASS_1_D1041E58B4545442_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1ACD6C20)
#define CLASS_1_D1041E58B4545442_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1ACD7230)
#define CLASS_1_D1041E58B4545442_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1ACD73A0)
#define CLASS_1_D1041E58B4545442__CCTOR_OFFSET UNITYSDK_OFFSET(0x1ACD7860)

inline static constexpr unsigned int Class_1_D1041E58B4545442_TypeDefinitionIndex = 14292;

class Class_1_D1041E58B4545442 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1041E58B4545442_TypeDefinitionIndex)->GetStaticField(0x36970);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1041E58B4545442_TypeDefinitionIndex)->GetStaticField(0x36978);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1041E58B4545442_TypeDefinitionIndex)->GetStaticField(0x36980);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1041E58B4545442_TypeDefinitionIndex)->GetStaticField(0x91A0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D1041E58B4545442_TypeDefinitionIndex)->GetStaticField(0x91A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>* Method_1_BF74F9BB090877C2()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_BF74F9BB090877C2_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*> Method_1_8211346DAA8B2B6F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScoreRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_8211346DAA8B2B6F_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicScoreRow* Method_1_4306C3A0C1F7911A(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::RogueMagicScoreRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_4306C3A0C1F7911A_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_92046C214975638E(::RPG::GameCore::RogueMagicScoreRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicScoreRow*))((::PBYTE)hIl2Cpp + CLASS_1_D1041E58B4545442_METHOD_1_92046C214975638E_OFFSET))(a1);
	}
};
