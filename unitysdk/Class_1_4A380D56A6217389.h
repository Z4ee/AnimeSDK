#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class FiveDimMiniGameRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4A380D56A6217389_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B146D80)
#define CLASS_1_4A380D56A6217389_METHOD_1_47ADA8D41A7A28FD_OFFSET UNITYSDK_OFFSET(0x1B146520)
#define CLASS_1_4A380D56A6217389_METHOD_1_636166BB76543FEB_OFFSET UNITYSDK_OFFSET(0x1B146DD0)
#define CLASS_1_4A380D56A6217389_METHOD_1_7339194F83A7D846_OFFSET UNITYSDK_OFFSET(0x1B1469A0)
#define CLASS_1_4A380D56A6217389_METHOD_1_733C9AC95A429F52_OFFSET UNITYSDK_OFFSET(0x1B146830)
#define CLASS_1_4A380D56A6217389_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B146BB0)
#define CLASS_1_4A380D56A6217389_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B146C40)
#define CLASS_1_4A380D56A6217389_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B1467D0)
#define CLASS_1_4A380D56A6217389_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B1465A0)
#define CLASS_1_4A380D56A6217389_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B146B70)
#define CLASS_1_4A380D56A6217389_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B146CE0)
#define CLASS_1_4A380D56A6217389__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B147170)

inline static constexpr unsigned int Class_1_4A380D56A6217389_TypeDefinitionIndex = 13590;

class Class_1_4A380D56A6217389 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A380D56A6217389_TypeDefinitionIndex)->GetStaticField(0x48D00);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A380D56A6217389_TypeDefinitionIndex)->GetStaticField(0x48D08);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A380D56A6217389_TypeDefinitionIndex)->GetStaticField(0x48D10);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A380D56A6217389_TypeDefinitionIndex)->GetStaticField(0xCD60);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4A380D56A6217389_TypeDefinitionIndex)->GetStaticField(0xCD61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*>* Method_1_47ADA8D41A7A28FD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_47ADA8D41A7A28FD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*> Method_1_733C9AC95A429F52()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::FiveDimMiniGameRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_733C9AC95A429F52_OFFSET))();
	}

	static ::RPG::GameCore::FiveDimMiniGameRewardRow* Method_1_7339194F83A7D846(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::FiveDimMiniGameRewardRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_7339194F83A7D846_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_636166BB76543FEB(::RPG::GameCore::FiveDimMiniGameRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::FiveDimMiniGameRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_4A380D56A6217389_METHOD_1_636166BB76543FEB_OFFSET))(a1);
	}
};
