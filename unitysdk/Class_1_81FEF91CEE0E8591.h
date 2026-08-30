#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightBackServantConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_81FEF91CEE0E8591_METHOD_1_0204A483570150F3_OFFSET UNITYSDK_OFFSET(0x1D83B080)
#define CLASS_1_81FEF91CEE0E8591_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D83B030)
#define CLASS_1_81FEF91CEE0E8591_METHOD_1_14F36D256DC66AFD_OFFSET UNITYSDK_OFFSET(0x1D83A7D0)
#define CLASS_1_81FEF91CEE0E8591_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D83AE60)
#define CLASS_1_81FEF91CEE0E8591_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D83AEF0)
#define CLASS_1_81FEF91CEE0E8591_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D83AA80)
#define CLASS_1_81FEF91CEE0E8591_METHOD_1_D23CC2144C03BDE6_OFFSET UNITYSDK_OFFSET(0x1D83AC50)
#define CLASS_1_81FEF91CEE0E8591_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D83A850)
#define CLASS_1_81FEF91CEE0E8591_METHOD_1_E5F05917762F6D1E_OFFSET UNITYSDK_OFFSET(0x1D83AAE0)
#define CLASS_1_81FEF91CEE0E8591_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D83AE20)
#define CLASS_1_81FEF91CEE0E8591_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D83AF90)
#define CLASS_1_81FEF91CEE0E8591__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D83B420)

inline static constexpr unsigned int Class_1_81FEF91CEE0E8591_TypeDefinitionIndex = 13403;

class Class_1_81FEF91CEE0E8591 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81FEF91CEE0E8591_TypeDefinitionIndex)->GetStaticField(0x28760);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81FEF91CEE0E8591_TypeDefinitionIndex)->GetStaticField(0x28768);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_81FEF91CEE0E8591_TypeDefinitionIndex)->GetStaticField(0x28770);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_81FEF91CEE0E8591_TypeDefinitionIndex)->GetStaticField(0xBF10);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_81FEF91CEE0E8591_TypeDefinitionIndex)->GetStaticField(0xBF11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*>* Method_1_14F36D256DC66AFD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_14F36D256DC66AFD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*> Method_1_E5F05917762F6D1E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightBackServantConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_E5F05917762F6D1E_OFFSET))();
	}

	static ::RPG::GameCore::GridFightBackServantConfigRow* Method_1_D23CC2144C03BDE6(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightBackServantConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_D23CC2144C03BDE6_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_0204A483570150F3(::RPG::GameCore::GridFightBackServantConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightBackServantConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_81FEF91CEE0E8591_METHOD_1_0204A483570150F3_OFFSET))(a1);
	}
};
