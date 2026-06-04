#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSeasonModuleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_803F49A84CDEC786_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18F76D40)
#define CLASS_1_803F49A84CDEC786_METHOD_1_2D444ECB7A68BBD6_OFFSET UNITYSDK_OFFSET(0x18F76510)
#define CLASS_1_803F49A84CDEC786_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F76B70)
#define CLASS_1_803F49A84CDEC786_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F76C00)
#define CLASS_1_803F49A84CDEC786_METHOD_1_C7950B53E02B5187_OFFSET UNITYSDK_OFFSET(0x18F76820)
#define CLASS_1_803F49A84CDEC786_METHOD_1_CB4E4ECD53C7C2E5_OFFSET UNITYSDK_OFFSET(0x18F76990)
#define CLASS_1_803F49A84CDEC786_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F767C0)
#define CLASS_1_803F49A84CDEC786_METHOD_1_D62F44E7B78D828B_OFFSET UNITYSDK_OFFSET(0x18F76D90)
#define CLASS_1_803F49A84CDEC786_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F76590)
#define CLASS_1_803F49A84CDEC786_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F76B30)
#define CLASS_1_803F49A84CDEC786_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F76CA0)
#define CLASS_1_803F49A84CDEC786__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F770F0)

inline static constexpr unsigned int Class_1_803F49A84CDEC786_TypeDefinitionIndex = 12945;

class Class_1_803F49A84CDEC786 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803F49A84CDEC786_TypeDefinitionIndex)->GetStaticField(0x37960);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803F49A84CDEC786_TypeDefinitionIndex)->GetStaticField(0x37968);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_803F49A84CDEC786_TypeDefinitionIndex)->GetStaticField(0x37970);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_803F49A84CDEC786_TypeDefinitionIndex)->GetStaticField(0xB220);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_803F49A84CDEC786_TypeDefinitionIndex)->GetStaticField(0xB221);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*>* Method_1_2D444ECB7A68BBD6()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_2D444ECB7A68BBD6_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*> Method_1_C7950B53E02B5187()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonModuleConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_C7950B53E02B5187_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSeasonModuleConfigRow* Method_1_CB4E4ECD53C7C2E5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightSeasonModuleConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_CB4E4ECD53C7C2E5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_D62F44E7B78D828B(::RPG::GameCore::GridFightSeasonModuleConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonModuleConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_803F49A84CDEC786_METHOD_1_D62F44E7B78D828B_OFFSET))(a1);
	}
};
