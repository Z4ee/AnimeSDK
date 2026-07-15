#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightModuleSwitchTraitConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1BF66740)
#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_186454903F1E6AE7_OFFSET UNITYSDK_OFFSET(0x1BF66790)
#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BF66570)
#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_9E18E10CCBA02BD1_OFFSET UNITYSDK_OFFSET(0x1BF65F20)
#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_ACA1FF5138ADB274_OFFSET UNITYSDK_OFFSET(0x1BF663A0)
#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BF66600)
#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_B624BED39363BD42_OFFSET UNITYSDK_OFFSET(0x1BF66230)
#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BF661D0)
#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BF65FA0)
#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BF66530)
#define CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BF666A0)
#define CLASS_1_67DC0B2C3D9EA2ED__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF66B00)

inline static constexpr unsigned int Class_1_67DC0B2C3D9EA2ED_TypeDefinitionIndex = 12984;

class Class_1_67DC0B2C3D9EA2ED : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67DC0B2C3D9EA2ED_TypeDefinitionIndex)->GetStaticField(0x400F0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67DC0B2C3D9EA2ED_TypeDefinitionIndex)->GetStaticField(0x400F8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_67DC0B2C3D9EA2ED_TypeDefinitionIndex)->GetStaticField(0x40100);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_67DC0B2C3D9EA2ED_TypeDefinitionIndex)->GetStaticField(0xABA0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_67DC0B2C3D9EA2ED_TypeDefinitionIndex)->GetStaticField(0xABA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>* Method_1_9E18E10CCBA02BD1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_9E18E10CCBA02BD1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*> Method_1_B624BED39363BD42()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_B624BED39363BD42_OFFSET))();
	}

	static ::RPG::GameCore::GridFightModuleSwitchTraitConfigRow* Method_1_ACA1FF5138ADB274(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_ACA1FF5138ADB274_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_186454903F1E6AE7(::RPG::GameCore::GridFightModuleSwitchTraitConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightModuleSwitchTraitConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_67DC0B2C3D9EA2ED_METHOD_1_186454903F1E6AE7_OFFSET))(a1);
	}
};
