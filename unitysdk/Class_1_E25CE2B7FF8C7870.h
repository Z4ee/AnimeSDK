#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournHexDisplayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D2E3D60)
#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_0EA6C08F6FD44751_OFFSET UNITYSDK_OFFSET(0x1D2E3DB0)
#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_506D75332BE26EB4_OFFSET UNITYSDK_OFFSET(0x1D2E3580)
#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_5DBD86C528A6AF4F_OFFSET UNITYSDK_OFFSET(0x1D2E3A00)
#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D2E3B90)
#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D2E3C20)
#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D2E3830)
#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_D53DC4B07B64D68D_OFFSET UNITYSDK_OFFSET(0x1D2E3890)
#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D2E3600)
#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D2E3B50)
#define CLASS_1_E25CE2B7FF8C7870_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D2E3CC0)
#define CLASS_1_E25CE2B7FF8C7870__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2E40D0)

inline static constexpr unsigned int Class_1_E25CE2B7FF8C7870_TypeDefinitionIndex = 15028;

class Class_1_E25CE2B7FF8C7870 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E25CE2B7FF8C7870_TypeDefinitionIndex)->GetStaticField(0x3FBF0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E25CE2B7FF8C7870_TypeDefinitionIndex)->GetStaticField(0x3FBF8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E25CE2B7FF8C7870_TypeDefinitionIndex)->GetStaticField(0x3FC00);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E25CE2B7FF8C7870_TypeDefinitionIndex)->GetStaticField(0xD9B0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E25CE2B7FF8C7870_TypeDefinitionIndex)->GetStaticField(0xD9B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*>* Method_1_506D75332BE26EB4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_506D75332BE26EB4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*> Method_1_D53DC4B07B64D68D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournHexDisplayRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_D53DC4B07B64D68D_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournHexDisplayRow* Method_1_5DBD86C528A6AF4F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournHexDisplayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_5DBD86C528A6AF4F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_0EA6C08F6FD44751(::RPG::GameCore::RogueTournHexDisplayRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournHexDisplayRow*))((::PBYTE)hIl2Cpp + CLASS_1_E25CE2B7FF8C7870_METHOD_1_0EA6C08F6FD44751_OFFSET))(a1);
	}
};
