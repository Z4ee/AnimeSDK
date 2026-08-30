#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/HipplenInteractType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityHipplenInteractInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_58ECBEB1A87F983C_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C7C5B20)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_24468007BD1514B8_OFFSET UNITYSDK_OFFSET(0x1C7C5B70)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_5CFBFC7283A08437_OFFSET UNITYSDK_OFFSET(0x1C7C5610)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C7C5950)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_8DC8E9DFAFF1518E_OFFSET UNITYSDK_OFFSET(0x1C7C5300)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C7C59E0)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C7C55B0)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C7C5380)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_DF7981470B9501CD_OFFSET UNITYSDK_OFFSET(0x1C7C5780)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C7C5910)
#define CLASS_1_58ECBEB1A87F983C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C7C5A80)
#define CLASS_1_58ECBEB1A87F983C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7C5EE0)

inline static constexpr unsigned int Class_1_58ECBEB1A87F983C_TypeDefinitionIndex = 11637;

class Class_1_58ECBEB1A87F983C : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58ECBEB1A87F983C_TypeDefinitionIndex)->GetStaticField(0xB6D0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58ECBEB1A87F983C_TypeDefinitionIndex)->GetStaticField(0xB6D8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_58ECBEB1A87F983C_TypeDefinitionIndex)->GetStaticField(0xB6E0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_58ECBEB1A87F983C_TypeDefinitionIndex)->GetStaticField(0x2740);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_58ECBEB1A87F983C_TypeDefinitionIndex)->GetStaticField(0x2741);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>* Method_1_8DC8E9DFAFF1518E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_8DC8E9DFAFF1518E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*> Method_1_5CFBFC7283A08437()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityHipplenInteractInfoRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_5CFBFC7283A08437_OFFSET))();
	}

	static ::RPG::GameCore::ActivityHipplenInteractInfoRow* Method_1_DF7981470B9501CD(::RPG::GameCore::HipplenInteractType a1)
	{
		return ((::RPG::GameCore::ActivityHipplenInteractInfoRow*(*)(::RPG::GameCore::HipplenInteractType))((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_DF7981470B9501CD_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_24468007BD1514B8(::RPG::GameCore::ActivityHipplenInteractInfoRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityHipplenInteractInfoRow*))((::PBYTE)hIl2Cpp + CLASS_1_58ECBEB1A87F983C_METHOD_1_24468007BD1514B8_OFFSET))(a1);
	}
};
