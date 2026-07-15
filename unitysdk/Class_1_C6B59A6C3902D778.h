#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRoleOverrideVOConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C6B59A6C3902D778_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B4037B0)
#define CLASS_1_C6B59A6C3902D778_METHOD_1_3640E73C00C55A74_OFFSET UNITYSDK_OFFSET(0x1B402F90)
#define CLASS_1_C6B59A6C3902D778_METHOD_1_54243766274D94A1_OFFSET UNITYSDK_OFFSET(0x1B403410)
#define CLASS_1_C6B59A6C3902D778_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B4035E0)
#define CLASS_1_C6B59A6C3902D778_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B403670)
#define CLASS_1_C6B59A6C3902D778_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B403240)
#define CLASS_1_C6B59A6C3902D778_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B403010)
#define CLASS_1_C6B59A6C3902D778_METHOD_1_E786878F31C34420_OFFSET UNITYSDK_OFFSET(0x1B403800)
#define CLASS_1_C6B59A6C3902D778_METHOD_1_E8132646AEBC0AD9_OFFSET UNITYSDK_OFFSET(0x1B4032A0)
#define CLASS_1_C6B59A6C3902D778_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B4035A0)
#define CLASS_1_C6B59A6C3902D778_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B403710)
#define CLASS_1_C6B59A6C3902D778__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B403B70)

inline static constexpr unsigned int Class_1_C6B59A6C3902D778_TypeDefinitionIndex = 13054;

class Class_1_C6B59A6C3902D778 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6B59A6C3902D778_TypeDefinitionIndex)->GetStaticField(0x441C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6B59A6C3902D778_TypeDefinitionIndex)->GetStaticField(0x441C8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6B59A6C3902D778_TypeDefinitionIndex)->GetStaticField(0x441D0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6B59A6C3902D778_TypeDefinitionIndex)->GetStaticField(0xBA60);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C6B59A6C3902D778_TypeDefinitionIndex)->GetStaticField(0xBA61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*>* Method_1_3640E73C00C55A74()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_3640E73C00C55A74_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*> Method_1_E8132646AEBC0AD9()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRoleOverrideVOConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_E8132646AEBC0AD9_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRoleOverrideVOConfigRow* Method_1_54243766274D94A1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightRoleOverrideVOConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_54243766274D94A1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_E786878F31C34420(::RPG::GameCore::GridFightRoleOverrideVOConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRoleOverrideVOConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C6B59A6C3902D778_METHOD_1_E786878F31C34420_OFFSET))(a1);
	}
};
