#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MonsterAtlasExtraPhasesRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B7BD321D01C27FCE_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19EC6C00)
#define CLASS_1_B7BD321D01C27FCE_METHOD_1_1D3D7383DACAF7C1_OFFSET UNITYSDK_OFFSET(0x19EC6850)
#define CLASS_1_B7BD321D01C27FCE_METHOD_1_65579405766A4253_OFFSET UNITYSDK_OFFSET(0x19EC6C50)
#define CLASS_1_B7BD321D01C27FCE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19EC6A30)
#define CLASS_1_B7BD321D01C27FCE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19EC6AC0)
#define CLASS_1_B7BD321D01C27FCE_METHOD_1_B4573902FD83FD1E_OFFSET UNITYSDK_OFFSET(0x19EC63D0)
#define CLASS_1_B7BD321D01C27FCE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19EC6680)
#define CLASS_1_B7BD321D01C27FCE_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19EC6450)
#define CLASS_1_B7BD321D01C27FCE_METHOD_1_E0A3157A5FAC3B1F_OFFSET UNITYSDK_OFFSET(0x19EC66E0)
#define CLASS_1_B7BD321D01C27FCE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19EC69F0)
#define CLASS_1_B7BD321D01C27FCE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19EC6B60)
#define CLASS_1_B7BD321D01C27FCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19EC6FB0)

inline static constexpr unsigned int Class_1_B7BD321D01C27FCE_TypeDefinitionIndex = 13499;

class Class_1_B7BD321D01C27FCE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7BD321D01C27FCE_TypeDefinitionIndex)->GetStaticField(0x4F460);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7BD321D01C27FCE_TypeDefinitionIndex)->GetStaticField(0x4F468);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7BD321D01C27FCE_TypeDefinitionIndex)->GetStaticField(0x4F470);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7BD321D01C27FCE_TypeDefinitionIndex)->GetStaticField(0xF660);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B7BD321D01C27FCE_TypeDefinitionIndex)->GetStaticField(0xF661);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*>* Method_1_B4573902FD83FD1E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_B4573902FD83FD1E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*> Method_1_E0A3157A5FAC3B1F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MonsterAtlasExtraPhasesRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_E0A3157A5FAC3B1F_OFFSET))();
	}

	static ::RPG::GameCore::MonsterAtlasExtraPhasesRow* Method_1_1D3D7383DACAF7C1(::System::UInt32 a1, ::System::Int32 a2)
	{
		return ((::RPG::GameCore::MonsterAtlasExtraPhasesRow*(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_1D3D7383DACAF7C1_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_65579405766A4253(::RPG::GameCore::MonsterAtlasExtraPhasesRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MonsterAtlasExtraPhasesRow*))((::PBYTE)hIl2Cpp + CLASS_1_B7BD321D01C27FCE_METHOD_1_65579405766A4253_OFFSET))(a1);
	}
};
