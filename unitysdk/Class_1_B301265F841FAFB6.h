#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightPlayerLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B301265F841FAFB6_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D6E3A60)
#define CLASS_1_B301265F841FAFB6_METHOD_1_32C433ED981653DF_OFFSET UNITYSDK_OFFSET(0x1D6E3550)
#define CLASS_1_B301265F841FAFB6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D6E3890)
#define CLASS_1_B301265F841FAFB6_METHOD_1_A944A71FD3FA1612_OFFSET UNITYSDK_OFFSET(0x1D6E3AB0)
#define CLASS_1_B301265F841FAFB6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D6E3920)
#define CLASS_1_B301265F841FAFB6_METHOD_1_C45E6B34C5891C27_OFFSET UNITYSDK_OFFSET(0x1D6E36C0)
#define CLASS_1_B301265F841FAFB6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D6E34F0)
#define CLASS_1_B301265F841FAFB6_METHOD_1_D307C0ACEE6CB55E_OFFSET UNITYSDK_OFFSET(0x1D6E3240)
#define CLASS_1_B301265F841FAFB6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D6E32C0)
#define CLASS_1_B301265F841FAFB6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D6E3850)
#define CLASS_1_B301265F841FAFB6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D6E39C0)
#define CLASS_1_B301265F841FAFB6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3E20)

inline static constexpr unsigned int Class_1_B301265F841FAFB6_TypeDefinitionIndex = 13305;

class Class_1_B301265F841FAFB6 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B301265F841FAFB6_TypeDefinitionIndex)->GetStaticField(0x400F0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B301265F841FAFB6_TypeDefinitionIndex)->GetStaticField(0x400F8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B301265F841FAFB6_TypeDefinitionIndex)->GetStaticField(0x40100);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B301265F841FAFB6_TypeDefinitionIndex)->GetStaticField(0xFCB0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B301265F841FAFB6_TypeDefinitionIndex)->GetStaticField(0xFCB1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>* Method_1_D307C0ACEE6CB55E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_D307C0ACEE6CB55E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*> Method_1_32C433ED981653DF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_32C433ED981653DF_OFFSET))();
	}

	static ::RPG::GameCore::GridFightPlayerLevelConfigRow* Method_1_C45E6B34C5891C27(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightPlayerLevelConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_C45E6B34C5891C27_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A944A71FD3FA1612(::RPG::GameCore::GridFightPlayerLevelConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightPlayerLevelConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_A944A71FD3FA1612_OFFSET))(a1);
	}
};
