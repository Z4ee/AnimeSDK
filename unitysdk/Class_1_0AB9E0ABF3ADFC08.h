#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRarityWeightConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_0B57F97D9CC03905_OFFSET UNITYSDK_OFFSET(0x179705B0)
#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x17970B50)
#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17970970)
#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_3C49516405703D40_OFFSET UNITYSDK_OFFSET(0x17970BA0)
#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17970300)
#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17970A10)
#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_B146923D08E22E7A_OFFSET UNITYSDK_OFFSET(0x17970760)
#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17970550)
#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17970930)
#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_F167D83703A6B4BC_OFFSET UNITYSDK_OFFSET(0x17970280)
#define CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17970AB0)
#define CLASS_1_0AB9E0ABF3ADFC08__CCTOR_OFFSET UNITYSDK_OFFSET(0x17970F00)

inline static constexpr unsigned int Class_1_0AB9E0ABF3ADFC08_TypeDefinitionIndex = 12433;

class Class_1_0AB9E0ABF3ADFC08 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AB9E0ABF3ADFC08_TypeDefinitionIndex)->GetStaticField(0x24B40);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AB9E0ABF3ADFC08_TypeDefinitionIndex)->GetStaticField(0x24B48);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AB9E0ABF3ADFC08_TypeDefinitionIndex)->GetStaticField(0x24B50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AB9E0ABF3ADFC08_TypeDefinitionIndex)->GetStaticField(0x9CD0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0AB9E0ABF3ADFC08_TypeDefinitionIndex)->GetStaticField(0x9CD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>* Method_1_F167D83703A6B4BC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_F167D83703A6B4BC_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*> Method_1_0B57F97D9CC03905()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRarityWeightConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_0B57F97D9CC03905_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRarityWeightConfigRow* Method_1_B146923D08E22E7A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightRarityWeightConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_B146923D08E22E7A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C49516405703D40(::RPG::GameCore::GridFightRarityWeightConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRarityWeightConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_0AB9E0ABF3ADFC08_METHOD_1_3C49516405703D40_OFFSET))(a1);
	}
};
