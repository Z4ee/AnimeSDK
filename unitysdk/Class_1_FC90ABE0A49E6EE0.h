#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightTraitOldLayerConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B40FAD0)
#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_7CE1FF1843D8C5D3_OFFSET UNITYSDK_OFFSET(0x1B40F230)
#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B40F900)
#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_8BEF31E104829139_OFFSET UNITYSDK_OFFSET(0x1B40FB20)
#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_8C8727CAD7F53834_OFFSET UNITYSDK_OFFSET(0x1B40F540)
#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B40F990)
#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B40F4E0)
#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_CF830CEB095900EF_OFFSET UNITYSDK_OFFSET(0x1B40F6B0)
#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B40F2B0)
#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B40F8C0)
#define CLASS_1_FC90ABE0A49E6EE0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B40FA30)
#define CLASS_1_FC90ABE0A49E6EE0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B40FEF0)

inline static constexpr unsigned int Class_1_FC90ABE0A49E6EE0_TypeDefinitionIndex = 13206;

class Class_1_FC90ABE0A49E6EE0 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC90ABE0A49E6EE0_TypeDefinitionIndex)->GetStaticField(0x445F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC90ABE0A49E6EE0_TypeDefinitionIndex)->GetStaticField(0x445F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC90ABE0A49E6EE0_TypeDefinitionIndex)->GetStaticField(0x44600);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC90ABE0A49E6EE0_TypeDefinitionIndex)->GetStaticField(0xBC00);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FC90ABE0A49E6EE0_TypeDefinitionIndex)->GetStaticField(0xBC01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*>* Method_1_7CE1FF1843D8C5D3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_7CE1FF1843D8C5D3_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*> Method_1_8C8727CAD7F53834()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightTraitOldLayerConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_8C8727CAD7F53834_OFFSET))();
	}

	static ::RPG::GameCore::GridFightTraitOldLayerConfigRow* Method_1_CF830CEB095900EF(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::GridFightTraitOldLayerConfigRow*(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_CF830CEB095900EF_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_8BEF31E104829139(::RPG::GameCore::GridFightTraitOldLayerConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightTraitOldLayerConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_FC90ABE0A49E6EE0_METHOD_1_8BEF31E104829139_OFFSET))(a1);
	}
};
