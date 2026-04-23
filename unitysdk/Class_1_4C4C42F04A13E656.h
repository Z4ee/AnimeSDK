#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AnniversaryCollectionGroupType.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AnniversaryCollectionGroupConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4C4C42F04A13E656_METHOD_1_03C1C50F63A9DD3A_OFFSET UNITYSDK_OFFSET(0x182E61E0)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x182E6710)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182E6530)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182E5F30)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_8AE4CD73F1AF06C8_OFFSET UNITYSDK_OFFSET(0x182E6360)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182E65D0)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_B2BA71D53E197281_OFFSET UNITYSDK_OFFSET(0x182E6760)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_C2025A3DE21E9A58_OFFSET UNITYSDK_OFFSET(0x182E5EB0)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x182E6180)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182E64F0)
#define CLASS_1_4C4C42F04A13E656_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x182E6670)
#define CLASS_1_4C4C42F04A13E656__CCTOR_OFFSET UNITYSDK_OFFSET(0x182E6A70)

inline static constexpr unsigned int Class_1_4C4C42F04A13E656_TypeDefinitionIndex = 11965;

class Class_1_4C4C42F04A13E656 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C4C42F04A13E656_TypeDefinitionIndex)->GetStaticField(0x23E60);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C4C42F04A13E656_TypeDefinitionIndex)->GetStaticField(0x23E68);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C4C42F04A13E656_TypeDefinitionIndex)->GetStaticField(0x23E70);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C4C42F04A13E656_TypeDefinitionIndex)->GetStaticField(0x9440);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C4C42F04A13E656_TypeDefinitionIndex)->GetStaticField(0x9441);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*>* Method_1_C2025A3DE21E9A58()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_C2025A3DE21E9A58_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*> Method_1_03C1C50F63A9DD3A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AnniversaryCollectionGroupConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_03C1C50F63A9DD3A_OFFSET))();
	}

	static ::RPG::GameCore::AnniversaryCollectionGroupConfigRow* Method_1_8AE4CD73F1AF06C8(::RPG::GameCore::AnniversaryCollectionGroupType a1)
	{
		return ((::RPG::GameCore::AnniversaryCollectionGroupConfigRow*(*)(::RPG::GameCore::AnniversaryCollectionGroupType))((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_8AE4CD73F1AF06C8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_B2BA71D53E197281(::RPG::GameCore::AnniversaryCollectionGroupConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AnniversaryCollectionGroupConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_4C4C42F04A13E656_METHOD_1_B2BA71D53E197281_OFFSET))(a1);
	}
};
