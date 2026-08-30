#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GiftDanmuSenderRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_78D4CF660E70EEF3_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CAD4200)
#define CLASS_1_78D4CF660E70EEF3_METHOD_1_2C5439E242D97F60_OFFSET UNITYSDK_OFFSET(0x1CAD46A0)
#define CLASS_1_78D4CF660E70EEF3_METHOD_1_7E3E5D462C46BE32_OFFSET UNITYSDK_OFFSET(0x1CAD4810)
#define CLASS_1_78D4CF660E70EEF3_METHOD_1_80514AA8A22C39B1_OFFSET UNITYSDK_OFFSET(0x1CAD4250)
#define CLASS_1_78D4CF660E70EEF3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CAD4030)
#define CLASS_1_78D4CF660E70EEF3_METHOD_1_AA34A02146428AAB_OFFSET UNITYSDK_OFFSET(0x1CAD45C0)
#define CLASS_1_78D4CF660E70EEF3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CAD40C0)
#define CLASS_1_78D4CF660E70EEF3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CAD4640)
#define CLASS_1_78D4CF660E70EEF3_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CAD3E00)
#define CLASS_1_78D4CF660E70EEF3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CAD3DC0)
#define CLASS_1_78D4CF660E70EEF3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CAD4160)
#define CLASS_1_78D4CF660E70EEF3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CAD49A0)

inline static constexpr unsigned int Class_1_78D4CF660E70EEF3_TypeDefinitionIndex = 15027;

class Class_1_78D4CF660E70EEF3 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuSenderRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuSenderRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78D4CF660E70EEF3_TypeDefinitionIndex)->GetStaticField(0x47880);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78D4CF660E70EEF3_TypeDefinitionIndex)->GetStaticField(0x47888);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_78D4CF660E70EEF3_TypeDefinitionIndex)->GetStaticField(0x47890);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_78D4CF660E70EEF3_TypeDefinitionIndex)->GetStaticField(0x10780);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_78D4CF660E70EEF3_TypeDefinitionIndex)->GetStaticField(0x10781);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_80514AA8A22C39B1(::RPG::GameCore::GiftDanmuSenderRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GiftDanmuSenderRow*))((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_80514AA8A22C39B1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuSenderRow*>* Method_1_AA34A02146428AAB()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuSenderRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_AA34A02146428AAB_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuSenderRow*> Method_1_2C5439E242D97F60()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GiftDanmuSenderRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_2C5439E242D97F60_OFFSET))();
	}

	static ::RPG::GameCore::GiftDanmuSenderRow* Method_1_7E3E5D462C46BE32(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GiftDanmuSenderRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_78D4CF660E70EEF3_METHOD_1_7E3E5D462C46BE32_OFFSET))(a1);
	}
};
