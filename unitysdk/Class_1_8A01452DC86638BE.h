#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightUnlockFunctionType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightFuncManageConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_8A01452DC86638BE_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C72A2E0)
#define CLASS_1_8A01452DC86638BE_METHOD_1_5B9461108517270A_OFFSET UNITYSDK_OFFSET(0x1C72A330)
#define CLASS_1_8A01452DC86638BE_METHOD_1_622734C11240CA2E_OFFSET UNITYSDK_OFFSET(0x1C729AC0)
#define CLASS_1_8A01452DC86638BE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C72A110)
#define CLASS_1_8A01452DC86638BE_METHOD_1_9D00D61D66294FAD_OFFSET UNITYSDK_OFFSET(0x1C729F40)
#define CLASS_1_8A01452DC86638BE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C72A1A0)
#define CLASS_1_8A01452DC86638BE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C729D70)
#define CLASS_1_8A01452DC86638BE_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C729B40)
#define CLASS_1_8A01452DC86638BE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C72A0D0)
#define CLASS_1_8A01452DC86638BE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C72A240)
#define CLASS_1_8A01452DC86638BE_METHOD_1_F5C7184113987C57_OFFSET UNITYSDK_OFFSET(0x1C729DD0)
#define CLASS_1_8A01452DC86638BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C72A6A0)

inline static constexpr unsigned int Class_1_8A01452DC86638BE_TypeDefinitionIndex = 13480;

class Class_1_8A01452DC86638BE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A01452DC86638BE_TypeDefinitionIndex)->GetStaticField(0x49D10);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A01452DC86638BE_TypeDefinitionIndex)->GetStaticField(0x49D18);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A01452DC86638BE_TypeDefinitionIndex)->GetStaticField(0x49D20);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A01452DC86638BE_TypeDefinitionIndex)->GetStaticField(0x10F00);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_8A01452DC86638BE_TypeDefinitionIndex)->GetStaticField(0x10F01);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*>* Method_1_622734C11240CA2E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_622734C11240CA2E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*> Method_1_F5C7184113987C57()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightFuncManageConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_F5C7184113987C57_OFFSET))();
	}

	static ::RPG::GameCore::GridFightFuncManageConfigRow* Method_1_9D00D61D66294FAD(::RPG::GameCore::GridFightUnlockFunctionType a1)
	{
		return ((::RPG::GameCore::GridFightFuncManageConfigRow*(*)(::RPG::GameCore::GridFightUnlockFunctionType))((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_9D00D61D66294FAD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_5B9461108517270A(::RPG::GameCore::GridFightFuncManageConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightFuncManageConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_8A01452DC86638BE_METHOD_1_5B9461108517270A_OFFSET))(a1);
	}
};
