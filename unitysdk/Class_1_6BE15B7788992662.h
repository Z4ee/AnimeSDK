#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueCommonDialogueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6BE15B7788992662_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CB5C2C0)
#define CLASS_1_6BE15B7788992662_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CB5C0F0)
#define CLASS_1_6BE15B7788992662_METHOD_1_98FE04AD5C02AF07_OFFSET UNITYSDK_OFFSET(0x1CB5BDB0)
#define CLASS_1_6BE15B7788992662_METHOD_1_A8960B954ACE29B3_OFFSET UNITYSDK_OFFSET(0x1CB5BF20)
#define CLASS_1_6BE15B7788992662_METHOD_1_AB9984F99A3AC706_OFFSET UNITYSDK_OFFSET(0x1CB5C310)
#define CLASS_1_6BE15B7788992662_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CB5C180)
#define CLASS_1_6BE15B7788992662_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CB5BD50)
#define CLASS_1_6BE15B7788992662_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CB5BB20)
#define CLASS_1_6BE15B7788992662_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CB5C0B0)
#define CLASS_1_6BE15B7788992662_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CB5C220)
#define CLASS_1_6BE15B7788992662_METHOD_1_FF9EE4CA4A435F52_OFFSET UNITYSDK_OFFSET(0x1CB5BAA0)
#define CLASS_1_6BE15B7788992662__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB5C680)

inline static constexpr unsigned int Class_1_6BE15B7788992662_TypeDefinitionIndex = 14531;

class Class_1_6BE15B7788992662 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BE15B7788992662_TypeDefinitionIndex)->GetStaticField(0x247C0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BE15B7788992662_TypeDefinitionIndex)->GetStaticField(0x247C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BE15B7788992662_TypeDefinitionIndex)->GetStaticField(0x247D0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BE15B7788992662_TypeDefinitionIndex)->GetStaticField(0xAF40);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6BE15B7788992662_TypeDefinitionIndex)->GetStaticField(0xAF41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*>* Method_1_FF9EE4CA4A435F52()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_FF9EE4CA4A435F52_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*> Method_1_98FE04AD5C02AF07()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueCommonDialogueRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_98FE04AD5C02AF07_OFFSET))();
	}

	static ::RPG::GameCore::RogueCommonDialogueRow* Method_1_A8960B954ACE29B3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueCommonDialogueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_A8960B954ACE29B3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_AB9984F99A3AC706(::RPG::GameCore::RogueCommonDialogueRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueCommonDialogueRow*))((::PBYTE)hIl2Cpp + CLASS_1_6BE15B7788992662_METHOD_1_AB9984F99A3AC706_OFFSET))(a1);
	}
};
