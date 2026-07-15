#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/StageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleBGMConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_66C6773B7D21EBCB_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1B586730)
#define CLASS_1_66C6773B7D21EBCB_METHOD_1_3F4FB2A9B0E33151_OFFSET UNITYSDK_OFFSET(0x1B586340)
#define CLASS_1_66C6773B7D21EBCB_METHOD_1_547F213C31368A2D_OFFSET UNITYSDK_OFFSET(0x1B586210)
#define CLASS_1_66C6773B7D21EBCB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B586560)
#define CLASS_1_66C6773B7D21EBCB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B5865F0)
#define CLASS_1_66C6773B7D21EBCB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B5861B0)
#define CLASS_1_66C6773B7D21EBCB_METHOD_1_DBBE4D022D8D1720_OFFSET UNITYSDK_OFFSET(0x1B586780)
#define CLASS_1_66C6773B7D21EBCB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B585F80)
#define CLASS_1_66C6773B7D21EBCB_METHOD_1_EBABAF543C53AB77_OFFSET UNITYSDK_OFFSET(0x1B585F00)
#define CLASS_1_66C6773B7D21EBCB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B586520)
#define CLASS_1_66C6773B7D21EBCB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B586690)
#define CLASS_1_66C6773B7D21EBCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B586AE0)

inline static constexpr unsigned int Class_1_66C6773B7D21EBCB_TypeDefinitionIndex = 12346;

class Class_1_66C6773B7D21EBCB : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66C6773B7D21EBCB_TypeDefinitionIndex)->GetStaticField(0x9520);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66C6773B7D21EBCB_TypeDefinitionIndex)->GetStaticField(0x9528);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_66C6773B7D21EBCB_TypeDefinitionIndex)->GetStaticField(0x9530);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66C6773B7D21EBCB_TypeDefinitionIndex)->GetStaticField(0x3870);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_66C6773B7D21EBCB_TypeDefinitionIndex)->GetStaticField(0x3871);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*>* Method_1_EBABAF543C53AB77()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_EBABAF543C53AB77_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*> Method_1_547F213C31368A2D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleBGMConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_547F213C31368A2D_OFFSET))();
	}

	static ::RPG::GameCore::BattleBGMConfigRow* Method_1_3F4FB2A9B0E33151(::System::String* a1, ::RPG::GameCore::StageType a2)
	{
		return ((::RPG::GameCore::BattleBGMConfigRow*(*)(::System::String*, ::RPG::GameCore::StageType))((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_3F4FB2A9B0E33151_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_DBBE4D022D8D1720(::RPG::GameCore::BattleBGMConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleBGMConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_66C6773B7D21EBCB_METHOD_1_DBBE4D022D8D1720_OFFSET))(a1);
	}
};
