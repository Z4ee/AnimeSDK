#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTraitLayerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_0B6881B8BB14B450_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1916BC10)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_1C6DCCC55E41C9E8_OFFSET UNITYSDK_OFFSET(0x1916BFC0)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1916BA40)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_92ED87029814A946_OFFSET UNITYSDK_OFFSET(0x1916B3F0)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1916BAD0)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_B23E7D44699811BA_OFFSET UNITYSDK_OFFSET(0x1916B700)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_BD5BF5368BE18D7F_OFFSET UNITYSDK_OFFSET(0x1916B830)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_C9E88450751C3CF3_OFFSET UNITYSDK_OFFSET(0x1916BC60)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1916B6A0)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1916B470)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1916BA00)
#define CLASS_1_0B6881B8BB14B450_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1916BB70)
#define CLASS_1_0B6881B8BB14B450__CCTOR_OFFSET UNITYSDK_OFFSET(0x1916C5C0)

inline static constexpr unsigned int Class_1_0B6881B8BB14B450_TypeDefinitionIndex = 13025;

class Class_1_0B6881B8BB14B450 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B6881B8BB14B450_TypeDefinitionIndex)->GetStaticField(0x4AE30);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B6881B8BB14B450_TypeDefinitionIndex)->GetStaticField(0x4AE38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B6881B8BB14B450_TypeDefinitionIndex)->GetStaticField(0x4AE40);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B6881B8BB14B450_TypeDefinitionIndex)->GetStaticField(0x4AE48);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B6881B8BB14B450_TypeDefinitionIndex)->GetStaticField(0xE070);
	}
	static ::System::Boolean* StaticGet_Field_1_5()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0B6881B8BB14B450_TypeDefinitionIndex)->GetStaticField(0xE071);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>* Method_1_92ED87029814A946()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_92ED87029814A946_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*> Method_1_B23E7D44699811BA()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitLayerConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_B23E7D44699811BA_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTraitLayerConfigRow* Method_1_BD5BF5368BE18D7F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightTraitLayerConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_BD5BF5368BE18D7F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C9E88450751C3CF3(::RPG::GameCore::GridFightTraitLayerConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTraitLayerConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_C9E88450751C3CF3_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* Method_1_1C6DCCC55E41C9E8(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0B6881B8BB14B450_METHOD_1_1C6DCCC55E41C9E8_OFFSET))(a1);
	}
};
