#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCEndGameRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_7041A4F56CA681C6_METHOD_1_054227C4EA61DDCE_OFFSET UNITYSDK_OFFSET(0x1C72DFD0)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1C72E7B0)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_39D4EAC67BD495B7_OFFSET UNITYSDK_OFFSET(0x1C72E410)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C72E5E0)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_9CB67A00F636C8BB_OFFSET UNITYSDK_OFFSET(0x1C72E800)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C72E670)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_BAC1E1ED67035DDA_OFFSET UNITYSDK_OFFSET(0x1C72E2E0)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C72E280)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C72E050)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C72E5A0)
#define CLASS_1_7041A4F56CA681C6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C72E710)
#define CLASS_1_7041A4F56CA681C6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C72EB20)

inline static constexpr unsigned int Class_1_7041A4F56CA681C6_TypeDefinitionIndex = 14637;

class Class_1_7041A4F56CA681C6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7041A4F56CA681C6_TypeDefinitionIndex)->GetStaticField(0x51740);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7041A4F56CA681C6_TypeDefinitionIndex)->GetStaticField(0x51748);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_7041A4F56CA681C6_TypeDefinitionIndex)->GetStaticField(0x51750);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7041A4F56CA681C6_TypeDefinitionIndex)->GetStaticField(0x11120);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_7041A4F56CA681C6_TypeDefinitionIndex)->GetStaticField(0x11121);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*>* Method_1_054227C4EA61DDCE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_054227C4EA61DDCE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*> Method_1_BAC1E1ED67035DDA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCEndGameRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_BAC1E1ED67035DDA_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCEndGameRewardRow* Method_1_39D4EAC67BD495B7(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDLCEndGameRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_39D4EAC67BD495B7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_9CB67A00F636C8BB(::RPG::GameCore::RogueDLCEndGameRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCEndGameRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_7041A4F56CA681C6_METHOD_1_9CB67A00F636C8BB_OFFSET))(a1);
	}
};
