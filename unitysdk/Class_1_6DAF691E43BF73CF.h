#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/HipplenOutfitType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityHipplenOutfitTypeRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6DAF691E43BF73CF_METHOD_1_07B206F16280922D_OFFSET UNITYSDK_OFFSET(0x16C78370)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16C78320)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_08F9578B62E2DEA7_OFFSET UNITYSDK_OFFSET(0x16C77A50)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C78140)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_3E48B441E79725B4_OFFSET UNITYSDK_OFFSET(0x16C77F30)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C77AD0)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_8C1CBA660B6E5CE8_OFFSET UNITYSDK_OFFSET(0x16C77D80)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C781E0)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C77D20)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C78100)
#define CLASS_1_6DAF691E43BF73CF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C78280)
#define CLASS_1_6DAF691E43BF73CF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C786D0)

inline static constexpr unsigned int Class_1_6DAF691E43BF73CF_TypeDefinitionIndex = 10867;

class Class_1_6DAF691E43BF73CF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF691E43BF73CF_TypeDefinitionIndex)->GetStaticField(0x4670);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF691E43BF73CF_TypeDefinitionIndex)->GetStaticField(0x4678);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF691E43BF73CF_TypeDefinitionIndex)->GetStaticField(0x4680);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF691E43BF73CF_TypeDefinitionIndex)->GetStaticField(0x2670);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6DAF691E43BF73CF_TypeDefinitionIndex)->GetStaticField(0x2671);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>* Method_1_08F9578B62E2DEA7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_08F9578B62E2DEA7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*> Method_1_8C1CBA660B6E5CE8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenOutfitTypeRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_8C1CBA660B6E5CE8_OFFSET))();
	}

	static ::RPG::GameCore::ActivityHipplenOutfitTypeRow* Method_1_3E48B441E79725B4(::RPG::GameCore::HipplenOutfitType a1)
	{
		return ((::RPG::GameCore::ActivityHipplenOutfitTypeRow*(*)(::RPG::GameCore::HipplenOutfitType))((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_3E48B441E79725B4_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_07B206F16280922D(::RPG::GameCore::ActivityHipplenOutfitTypeRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenOutfitTypeRow*))((::PBYTE)hIl2Cpp + CLASS_1_6DAF691E43BF73CF_METHOD_1_07B206F16280922D_OFFSET))(a1);
	}
};
