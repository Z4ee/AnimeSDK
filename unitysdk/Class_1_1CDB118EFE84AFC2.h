#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveBossDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1CB43A30)
#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_28A2C9CF9CA4863B_OFFSET UNITYSDK_OFFSET(0x1CB43520)
#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_69AD3228B80FF88A_OFFSET UNITYSDK_OFFSET(0x1CB43210)
#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CB43860)
#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CB438F0)
#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_BADE53D5D9DEE0D3_OFFSET UNITYSDK_OFFSET(0x1CB43690)
#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CB434C0)
#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CB43290)
#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_EB0E93E86D2655D6_OFFSET UNITYSDK_OFFSET(0x1CB43A80)
#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CB43820)
#define CLASS_1_1CDB118EFE84AFC2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CB43990)
#define CLASS_1_1CDB118EFE84AFC2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB43DF0)

inline static constexpr unsigned int Class_1_1CDB118EFE84AFC2_TypeDefinitionIndex = 11681;

class Class_1_1CDB118EFE84AFC2 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CDB118EFE84AFC2_TypeDefinitionIndex)->GetStaticField(0x31500);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CDB118EFE84AFC2_TypeDefinitionIndex)->GetStaticField(0x31508);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CDB118EFE84AFC2_TypeDefinitionIndex)->GetStaticField(0x31510);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CDB118EFE84AFC2_TypeDefinitionIndex)->GetStaticField(0xD080);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1CDB118EFE84AFC2_TypeDefinitionIndex)->GetStaticField(0xD081);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*>* Method_1_69AD3228B80FF88A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_69AD3228B80FF88A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*> Method_1_28A2C9CF9CA4863B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveBossDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_28A2C9CF9CA4863B_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveBossDataRow* Method_1_BADE53D5D9DEE0D3(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveBossDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_BADE53D5D9DEE0D3_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_EB0E93E86D2655D6(::RPG::GameCore::IdleLiveBossDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveBossDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_1CDB118EFE84AFC2_METHOD_1_EB0E93E86D2655D6_OFFSET))(a1);
	}
};
