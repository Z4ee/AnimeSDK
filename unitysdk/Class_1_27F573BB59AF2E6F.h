#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveDungeonRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_27F573BB59AF2E6F_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C79B3E0)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_10AE1EC3C81F4ED9_OFFSET UNITYSDK_OFFSET(0x1C79AF50)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_6C0035E25E62152C_OFFSET UNITYSDK_OFFSET(0x1C79B430)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C79B210)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C79B2A0)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C79AEF0)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C79ACC0)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_E5A92DA4DF9F475F_OFFSET UNITYSDK_OFFSET(0x1C79AC40)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C79B1D0)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C79B340)
#define CLASS_1_27F573BB59AF2E6F_METHOD_1_F990E452E96FF00A_OFFSET UNITYSDK_OFFSET(0x1C79B080)
#define CLASS_1_27F573BB59AF2E6F__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C79B750)

inline static constexpr unsigned int Class_1_27F573BB59AF2E6F_TypeDefinitionIndex = 11715;

class Class_1_27F573BB59AF2E6F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F573BB59AF2E6F_TypeDefinitionIndex)->GetStaticField(0x5D20);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F573BB59AF2E6F_TypeDefinitionIndex)->GetStaticField(0x5D28);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F573BB59AF2E6F_TypeDefinitionIndex)->GetStaticField(0x5D30);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F573BB59AF2E6F_TypeDefinitionIndex)->GetStaticField(0x1A10);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_27F573BB59AF2E6F_TypeDefinitionIndex)->GetStaticField(0x1A11);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>* Method_1_E5A92DA4DF9F475F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_E5A92DA4DF9F475F_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*> Method_1_10AE1EC3C81F4ED9()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveDungeonRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_10AE1EC3C81F4ED9_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveDungeonRow* Method_1_F990E452E96FF00A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveDungeonRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_F990E452E96FF00A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_6C0035E25E62152C(::RPG::GameCore::IdleLiveDungeonRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveDungeonRow*))((::PBYTE)hIl2Cpp + CLASS_1_27F573BB59AF2E6F_METHOD_1_6C0035E25E62152C_OFFSET))(a1);
	}
};
