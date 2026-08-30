#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/EmotionID.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PhotoGraphConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_720DDAD75A648903_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1DC66010)
#define CLASS_1_720DDAD75A648903_METHOD_1_2CF0C39460410010_OFFSET UNITYSDK_OFFSET(0x1DC65B00)
#define CLASS_1_720DDAD75A648903_METHOD_1_4C9866DCD3B45701_OFFSET UNITYSDK_OFFSET(0x1DC66060)
#define CLASS_1_720DDAD75A648903_METHOD_1_7231C73A1887D21B_OFFSET UNITYSDK_OFFSET(0x1DC657F0)
#define CLASS_1_720DDAD75A648903_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1DC65E40)
#define CLASS_1_720DDAD75A648903_METHOD_1_91EF53BC146AD622_OFFSET UNITYSDK_OFFSET(0x1DC65C70)
#define CLASS_1_720DDAD75A648903_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1DC65ED0)
#define CLASS_1_720DDAD75A648903_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1DC65AA0)
#define CLASS_1_720DDAD75A648903_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1DC65870)
#define CLASS_1_720DDAD75A648903_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1DC65E00)
#define CLASS_1_720DDAD75A648903_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1DC65F70)
#define CLASS_1_720DDAD75A648903__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DC663D0)

inline static constexpr unsigned int Class_1_720DDAD75A648903_TypeDefinitionIndex = 14325;

class Class_1_720DDAD75A648903 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_720DDAD75A648903_TypeDefinitionIndex)->GetStaticField(0x57F40);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_720DDAD75A648903_TypeDefinitionIndex)->GetStaticField(0x57F48);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_720DDAD75A648903_TypeDefinitionIndex)->GetStaticField(0x57F50);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_720DDAD75A648903_TypeDefinitionIndex)->GetStaticField(0x11E90);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_720DDAD75A648903_TypeDefinitionIndex)->GetStaticField(0x11E91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*>* Method_1_7231C73A1887D21B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_7231C73A1887D21B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*> Method_1_2CF0C39460410010()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PhotoGraphConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_2CF0C39460410010_OFFSET))();
	}

	static ::RPG::GameCore::PhotoGraphConfigRow* Method_1_91EF53BC146AD622(::RPG::GameCore::EmotionID a1)
	{
		return ((::RPG::GameCore::PhotoGraphConfigRow*(*)(::RPG::GameCore::EmotionID))((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_91EF53BC146AD622_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4C9866DCD3B45701(::RPG::GameCore::PhotoGraphConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PhotoGraphConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_720DDAD75A648903_METHOD_1_4C9866DCD3B45701_OFFSET))(a1);
	}
};
