#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightTraitBonusType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTraitBonusConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_94543E3E5D6968A9_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x17954080)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_14D25DA56541A395_OFFSET UNITYSDK_OFFSET(0x179544A0)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_211AFA6D16D80C69_OFFSET UNITYSDK_OFFSET(0x17953A60)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17953EA0)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_361A5DEF17FF7ED2_OFFSET UNITYSDK_OFFSET(0x17953C10)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179537B0)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17953F40)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_C5C04DC25A1368F4_OFFSET UNITYSDK_OFFSET(0x17953730)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17953A00)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_E28A41704B1587B8_OFFSET UNITYSDK_OFFSET(0x179540D0)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17953E60)
#define CLASS_1_94543E3E5D6968A9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17953FE0)
#define CLASS_1_94543E3E5D6968A9__CCTOR_OFFSET UNITYSDK_OFFSET(0x17954AC0)

inline static constexpr unsigned int Class_1_94543E3E5D6968A9_TypeDefinitionIndex = 12518;

class Class_1_94543E3E5D6968A9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_Field_1_5()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94543E3E5D6968A9_TypeDefinitionIndex)->GetStaticField(0x24140);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94543E3E5D6968A9_TypeDefinitionIndex)->GetStaticField(0x24148);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94543E3E5D6968A9_TypeDefinitionIndex)->GetStaticField(0x24150);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94543E3E5D6968A9_TypeDefinitionIndex)->GetStaticField(0x24158);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::System::UInt32>*>** StaticGet_Field_1_6()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::System::UInt32, ::System::UInt32>, ::System::Collections::Generic::List_1<::System::UInt32>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_94543E3E5D6968A9_TypeDefinitionIndex)->GetStaticField(0x24160);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94543E3E5D6968A9_TypeDefinitionIndex)->GetStaticField(0x9910);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_94543E3E5D6968A9_TypeDefinitionIndex)->GetStaticField(0x9911);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>* Method_1_C5C04DC25A1368F4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_C5C04DC25A1368F4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*> Method_1_211AFA6D16D80C69()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitBonusConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_211AFA6D16D80C69_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTraitBonusConfigRow* Method_1_361A5DEF17FF7ED2(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::GameCore::GridFightTraitBonusType a3)
	{
		return ((::RPG::GameCore::GridFightTraitBonusConfigRow*(*)(::System::UInt32, ::System::UInt32, ::RPG::GameCore::GridFightTraitBonusType))((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_361A5DEF17FF7ED2_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E28A41704B1587B8(::RPG::GameCore::GridFightTraitBonusConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTraitBonusConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_E28A41704B1587B8_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::System::UInt32>* Method_1_14D25DA56541A395(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_94543E3E5D6968A9_METHOD_1_14D25DA56541A395_OFFSET))(a1, a2);
	}
};
