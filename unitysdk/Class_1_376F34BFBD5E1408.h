#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightItemConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_376F34BFBD5E1408_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19773010)
#define CLASS_1_376F34BFBD5E1408_METHOD_1_410D5D38DF647EE0_OFFSET UNITYSDK_OFFSET(0x19773060)
#define CLASS_1_376F34BFBD5E1408_METHOD_1_8580A733DFE844BC_OFFSET UNITYSDK_OFFSET(0x197727F0)
#define CLASS_1_376F34BFBD5E1408_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19772E40)
#define CLASS_1_376F34BFBD5E1408_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19772ED0)
#define CLASS_1_376F34BFBD5E1408_METHOD_1_B233ED8809844CF1_OFFSET UNITYSDK_OFFSET(0x19772C70)
#define CLASS_1_376F34BFBD5E1408_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19772AA0)
#define CLASS_1_376F34BFBD5E1408_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19772870)
#define CLASS_1_376F34BFBD5E1408_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19772E00)
#define CLASS_1_376F34BFBD5E1408_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19772F70)
#define CLASS_1_376F34BFBD5E1408_METHOD_1_FBAFBEA372ADB211_OFFSET UNITYSDK_OFFSET(0x19772B00)
#define CLASS_1_376F34BFBD5E1408__CCTOR_OFFSET UNITYSDK_OFFSET(0x197733D0)

inline static constexpr unsigned int Class_1_376F34BFBD5E1408_TypeDefinitionIndex = 12810;

class Class_1_376F34BFBD5E1408 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_376F34BFBD5E1408_TypeDefinitionIndex)->GetStaticField(0x44EA0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_376F34BFBD5E1408_TypeDefinitionIndex)->GetStaticField(0x44EA8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_376F34BFBD5E1408_TypeDefinitionIndex)->GetStaticField(0x44EB0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_376F34BFBD5E1408_TypeDefinitionIndex)->GetStaticField(0xC590);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_376F34BFBD5E1408_TypeDefinitionIndex)->GetStaticField(0xC591);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*>* Method_1_8580A733DFE844BC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_8580A733DFE844BC_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*> Method_1_FBAFBEA372ADB211()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightItemConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_FBAFBEA372ADB211_OFFSET))();
	}

	static ::RPG::GameCore::GridFightItemConfigRow* Method_1_B233ED8809844CF1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightItemConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_B233ED8809844CF1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_410D5D38DF647EE0(::RPG::GameCore::GridFightItemConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightItemConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_376F34BFBD5E1408_METHOD_1_410D5D38DF647EE0_OFFSET))(a1);
	}
};
