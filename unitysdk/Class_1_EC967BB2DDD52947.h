#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightEquipRecommendRoleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_EC967BB2DDD52947_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19008C10)
#define CLASS_1_EC967BB2DDD52947_METHOD_1_4F15CD0E1C99D27D_OFFSET UNITYSDK_OFFSET(0x19008C60)
#define CLASS_1_EC967BB2DDD52947_METHOD_1_555F2C1C7E5902B6_OFFSET UNITYSDK_OFFSET(0x19008870)
#define CLASS_1_EC967BB2DDD52947_METHOD_1_7A1ABD3BE5F88EF8_OFFSET UNITYSDK_OFFSET(0x19008700)
#define CLASS_1_EC967BB2DDD52947_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19008A40)
#define CLASS_1_EC967BB2DDD52947_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19008AD0)
#define CLASS_1_EC967BB2DDD52947_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x190086A0)
#define CLASS_1_EC967BB2DDD52947_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19008470)
#define CLASS_1_EC967BB2DDD52947_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19008A00)
#define CLASS_1_EC967BB2DDD52947_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19008B70)
#define CLASS_1_EC967BB2DDD52947_METHOD_1_F411FBFE750471B7_OFFSET UNITYSDK_OFFSET(0x190083F0)
#define CLASS_1_EC967BB2DDD52947__CCTOR_OFFSET UNITYSDK_OFFSET(0x19008FD0)

inline static constexpr unsigned int Class_1_EC967BB2DDD52947_TypeDefinitionIndex = 12832;

class Class_1_EC967BB2DDD52947 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC967BB2DDD52947_TypeDefinitionIndex)->GetStaticField(0x37880);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC967BB2DDD52947_TypeDefinitionIndex)->GetStaticField(0x37888);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC967BB2DDD52947_TypeDefinitionIndex)->GetStaticField(0x37890);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC967BB2DDD52947_TypeDefinitionIndex)->GetStaticField(0xB200);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_EC967BB2DDD52947_TypeDefinitionIndex)->GetStaticField(0xB201);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*>* Method_1_F411FBFE750471B7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_F411FBFE750471B7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*> Method_1_7A1ABD3BE5F88EF8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_7A1ABD3BE5F88EF8_OFFSET))();
	}

	static ::RPG::GameCore::GridFightEquipRecommendRoleConfigRow* Method_1_555F2C1C7E5902B6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_555F2C1C7E5902B6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_4F15CD0E1C99D27D(::RPG::GameCore::GridFightEquipRecommendRoleConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightEquipRecommendRoleConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_EC967BB2DDD52947_METHOD_1_4F15CD0E1C99D27D_OFFSET))(a1);
	}
};
