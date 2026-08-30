#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GroupSystemUnlockDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_702ABB430F59A8E3_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1DA2D190)
#define CLASS_1_702ABB430F59A8E3_METHOD_1_0C0B80225093A402_OFFSET UNITYSDK_OFFSET(0x1DA2CDF0)
#define CLASS_1_702ABB430F59A8E3_METHOD_1_50C1C88AD55FD043_OFFSET UNITYSDK_OFFSET(0x1DA2C970)
#define CLASS_1_702ABB430F59A8E3_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1DA2CFC0)
#define CLASS_1_702ABB430F59A8E3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1DA2D050)
#define CLASS_1_702ABB430F59A8E3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1DA2CC20)
#define CLASS_1_702ABB430F59A8E3_METHOD_1_DAF8508FAB33796C_OFFSET UNITYSDK_OFFSET(0x1DA2CC80)
#define CLASS_1_702ABB430F59A8E3_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1DA2C9F0)
#define CLASS_1_702ABB430F59A8E3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1DA2CF80)
#define CLASS_1_702ABB430F59A8E3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1DA2D0F0)
#define CLASS_1_702ABB430F59A8E3_METHOD_1_F95955C3B4949711_OFFSET UNITYSDK_OFFSET(0x1DA2D1E0)
#define CLASS_1_702ABB430F59A8E3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DA2D550)

inline static constexpr unsigned int Class_1_702ABB430F59A8E3_TypeDefinitionIndex = 13230;

class Class_1_702ABB430F59A8E3 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_702ABB430F59A8E3_TypeDefinitionIndex)->GetStaticField(0x37B10);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_702ABB430F59A8E3_TypeDefinitionIndex)->GetStaticField(0x37B18);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_702ABB430F59A8E3_TypeDefinitionIndex)->GetStaticField(0x37B20);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_702ABB430F59A8E3_TypeDefinitionIndex)->GetStaticField(0xE940);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_702ABB430F59A8E3_TypeDefinitionIndex)->GetStaticField(0xE941);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*>* Method_1_50C1C88AD55FD043()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_50C1C88AD55FD043_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*> Method_1_DAF8508FAB33796C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GroupSystemUnlockDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_DAF8508FAB33796C_OFFSET))();
	}

	static ::RPG::GameCore::GroupSystemUnlockDataRow* Method_1_0C0B80225093A402(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GroupSystemUnlockDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_0C0B80225093A402_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F95955C3B4949711(::RPG::GameCore::GroupSystemUnlockDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GroupSystemUnlockDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_702ABB430F59A8E3_METHOD_1_F95955C3B4949711_OFFSET))(a1);
	}
};
