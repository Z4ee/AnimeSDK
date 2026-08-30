#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class UniquePropRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3C73D779104EF3AF_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CF69090)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_509303615ABD6BE5_OFFSET UNITYSDK_OFFSET(0x1CF690E0)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CF68EC0)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CF68F50)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_B59A2D5C7388DD2C_OFFSET UNITYSDK_OFFSET(0x1CF68B60)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_C659EA18492B4EA7_OFFSET UNITYSDK_OFFSET(0x1CF68850)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CF68B00)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CF688D0)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_DF6D37802F0ED02F_OFFSET UNITYSDK_OFFSET(0x1CF68CD0)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CF68E80)
#define CLASS_1_3C73D779104EF3AF_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CF68FF0)
#define CLASS_1_3C73D779104EF3AF__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF69450)

inline static constexpr unsigned int Class_1_3C73D779104EF3AF_TypeDefinitionIndex = 13004;

class Class_1_3C73D779104EF3AF : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C73D779104EF3AF_TypeDefinitionIndex)->GetStaticField(0x1A6B0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C73D779104EF3AF_TypeDefinitionIndex)->GetStaticField(0x1A6B8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C73D779104EF3AF_TypeDefinitionIndex)->GetStaticField(0x1A6C0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C73D779104EF3AF_TypeDefinitionIndex)->GetStaticField(0x94C0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3C73D779104EF3AF_TypeDefinitionIndex)->GetStaticField(0x94C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>* Method_1_C659EA18492B4EA7()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_C659EA18492B4EA7_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*> Method_1_B59A2D5C7388DD2C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::UniquePropRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_B59A2D5C7388DD2C_OFFSET))();
	}

	static ::RPG::GameCore::UniquePropRow* Method_1_DF6D37802F0ED02F(::System::String* a1)
	{
		return ((::RPG::GameCore::UniquePropRow*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_DF6D37802F0ED02F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_509303615ABD6BE5(::RPG::GameCore::UniquePropRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::UniquePropRow*))((::PBYTE)hIl2Cpp + CLASS_1_3C73D779104EF3AF_METHOD_1_509303615ABD6BE5_OFFSET))(a1);
	}
};
