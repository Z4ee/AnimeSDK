#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/RogueTournAreaGroupID.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/System/Object.h"

class Class_1_700A91FDC43054B6;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1CD22070)
#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_6B371E7FD4C13999_OFFSET UNITYSDK_OFFSET(0x1CD21B50)
#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CD21EA0)
#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_8A321F63F77C8ADD_OFFSET UNITYSDK_OFFSET(0x1CD220C0)
#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_9EC41ECC53D61BB8_OFFSET UNITYSDK_OFFSET(0x1CD21840)
#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CD21F30)
#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_BBE45B70B359D35C_OFFSET UNITYSDK_OFFSET(0x1CD21CC0)
#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CD21AF0)
#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CD218C0)
#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CD21E60)
#define CLASS_1_631A5BD7E05FAF56_190_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CD21FD0)
#define CLASS_1_631A5BD7E05FAF56_190__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD22420)

inline static constexpr unsigned int Class_1_631A5BD7E05FAF56_190_TypeDefinitionIndex = 14949;

class Class_1_631A5BD7E05FAF56_190 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_190_TypeDefinitionIndex)->GetStaticField(0x4C8E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_700A91FDC43054B6*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_700A91FDC43054B6*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_190_TypeDefinitionIndex)->GetStaticField(0x4C8E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_190_TypeDefinitionIndex)->GetStaticField(0x4C8F0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_190_TypeDefinitionIndex)->GetStaticField(0x11A40);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_631A5BD7E05FAF56_190_TypeDefinitionIndex)->GetStaticField(0x11A41);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_700A91FDC43054B6*>* Method_1_9EC41ECC53D61BB8()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::Class_1_700A91FDC43054B6*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_9EC41ECC53D61BB8_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_700A91FDC43054B6*> Method_1_6B371E7FD4C13999()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::Class_1_700A91FDC43054B6*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_6B371E7FD4C13999_OFFSET))();
	}

	static ::Class_1_700A91FDC43054B6* Method_1_BBE45B70B359D35C(::RPG::GameCore::RogueTournAreaGroupID a1, ::RPG::GameCore::RogueTournMode a2)
	{
		return ((::Class_1_700A91FDC43054B6*(*)(::RPG::GameCore::RogueTournAreaGroupID, ::RPG::GameCore::RogueTournMode))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_BBE45B70B359D35C_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_8A321F63F77C8ADD(::Class_1_700A91FDC43054B6* a1)
	{
		return ((::System::Void(*)(::Class_1_700A91FDC43054B6*))((::PBYTE)hIl2Cpp + CLASS_1_631A5BD7E05FAF56_190_METHOD_1_8A321F63F77C8ADD_OFFSET))(a1);
	}
};
