#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightEquipCategory.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightEquipCategoryInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_71CE965928A1FE3B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x182F9E00)
#define CLASS_1_71CE965928A1FE3B_METHOD_1_094D481E152501C3_OFFSET UNITYSDK_OFFSET(0x182F9530)
#define CLASS_1_71CE965928A1FE3B_METHOD_1_1C823DA32110F9C9_OFFSET UNITYSDK_OFFSET(0x182F9E50)
#define CLASS_1_71CE965928A1FE3B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182F9C20)
#define CLASS_1_71CE965928A1FE3B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182F95B0)
#define CLASS_1_71CE965928A1FE3B_METHOD_1_7DFB3ABC4E588FCC_OFFSET UNITYSDK_OFFSET(0x182F9860)
#define CLASS_1_71CE965928A1FE3B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182F9CC0)
#define CLASS_1_71CE965928A1FE3B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182F9800)
#define CLASS_1_71CE965928A1FE3B_METHOD_1_D38D6999482E88ED_OFFSET UNITYSDK_OFFSET(0x182F9A10)
#define CLASS_1_71CE965928A1FE3B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182F9BE0)
#define CLASS_1_71CE965928A1FE3B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182F9D60)
#define CLASS_1_71CE965928A1FE3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x182FA1B0)

inline static constexpr unsigned int Class_1_71CE965928A1FE3B_TypeDefinitionIndex = 12730;

class Class_1_71CE965928A1FE3B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71CE965928A1FE3B_TypeDefinitionIndex)->GetStaticField(0x24B70);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71CE965928A1FE3B_TypeDefinitionIndex)->GetStaticField(0x24B78);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_71CE965928A1FE3B_TypeDefinitionIndex)->GetStaticField(0x24B80);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_71CE965928A1FE3B_TypeDefinitionIndex)->GetStaticField(0x9990);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_71CE965928A1FE3B_TypeDefinitionIndex)->GetStaticField(0x9991);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*>* Method_1_094D481E152501C3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_094D481E152501C3_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*> Method_1_7DFB3ABC4E588FCC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipCategoryInfoRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_7DFB3ABC4E588FCC_OFFSET))();
	}

	static ::RPG::GameCore::GridFightEquipCategoryInfoRow* Method_1_D38D6999482E88ED(::RPG::GameCore::GridFightEquipCategory a1)
	{
		return ((::RPG::GameCore::GridFightEquipCategoryInfoRow*(*)(::RPG::GameCore::GridFightEquipCategory))((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_D38D6999482E88ED_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_1C823DA32110F9C9(::RPG::GameCore::GridFightEquipCategoryInfoRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightEquipCategoryInfoRow*))((::PBYTE)hIl2Cpp + CLASS_1_71CE965928A1FE3B_METHOD_1_1C823DA32110F9C9_OFFSET))(a1);
	}
};
