#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSeasonTalentConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_89150B6CBBFF4878_METHOD_1_05BA18C41301CC54_OFFSET UNITYSDK_OFFSET(0x19117770)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19117F50)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_4D528FDF4D106659_OFFSET UNITYSDK_OFFSET(0x19117FA0)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_4F3D31D2106E22CC_OFFSET UNITYSDK_OFFSET(0x19117A80)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19117D80)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19117E10)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_B133434221BB8A41_OFFSET UNITYSDK_OFFSET(0x19117BB0)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19117A20)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x191177F0)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19117D40)
#define CLASS_1_89150B6CBBFF4878_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19117EB0)
#define CLASS_1_89150B6CBBFF4878__CCTOR_OFFSET UNITYSDK_OFFSET(0x191182C0)

inline static constexpr unsigned int Class_1_89150B6CBBFF4878_TypeDefinitionIndex = 12928;

class Class_1_89150B6CBBFF4878 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89150B6CBBFF4878_TypeDefinitionIndex)->GetStaticField(0x53690);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89150B6CBBFF4878_TypeDefinitionIndex)->GetStaticField(0x53698);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_89150B6CBBFF4878_TypeDefinitionIndex)->GetStaticField(0x536A0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_89150B6CBBFF4878_TypeDefinitionIndex)->GetStaticField(0x10850);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_89150B6CBBFF4878_TypeDefinitionIndex)->GetStaticField(0x10851);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>* Method_1_05BA18C41301CC54()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_05BA18C41301CC54_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*> Method_1_4F3D31D2106E22CC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTalentConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_4F3D31D2106E22CC_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSeasonTalentConfigRow* Method_1_B133434221BB8A41(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightSeasonTalentConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_B133434221BB8A41_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4D528FDF4D106659(::RPG::GameCore::GridFightSeasonTalentConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonTalentConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_89150B6CBBFF4878_METHOD_1_4D528FDF4D106659_OFFSET))(a1);
	}
};
