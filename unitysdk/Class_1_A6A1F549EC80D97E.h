#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PamSkinConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A6A1F549EC80D97E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x19195460)
#define CLASS_1_A6A1F549EC80D97E_METHOD_1_0E2A3674E3D51A7E_OFFSET UNITYSDK_OFFSET(0x19194CC0)
#define CLASS_1_A6A1F549EC80D97E_METHOD_1_7911F489F65A8573_OFFSET UNITYSDK_OFFSET(0x191954B0)
#define CLASS_1_A6A1F549EC80D97E_METHOD_1_79D17C114808868E_OFFSET UNITYSDK_OFFSET(0x19194FD0)
#define CLASS_1_A6A1F549EC80D97E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19195290)
#define CLASS_1_A6A1F549EC80D97E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19195320)
#define CLASS_1_A6A1F549EC80D97E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19194F70)
#define CLASS_1_A6A1F549EC80D97E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19194D40)
#define CLASS_1_A6A1F549EC80D97E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19195250)
#define CLASS_1_A6A1F549EC80D97E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x191953C0)
#define CLASS_1_A6A1F549EC80D97E_METHOD_1_F2E5AE99966823B1_OFFSET UNITYSDK_OFFSET(0x19195100)
#define CLASS_1_A6A1F549EC80D97E__CCTOR_OFFSET UNITYSDK_OFFSET(0x191957D0)

inline static constexpr unsigned int Class_1_A6A1F549EC80D97E_TypeDefinitionIndex = 13648;

class Class_1_A6A1F549EC80D97E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6A1F549EC80D97E_TypeDefinitionIndex)->GetStaticField(0x4C500);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6A1F549EC80D97E_TypeDefinitionIndex)->GetStaticField(0x4C508);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6A1F549EC80D97E_TypeDefinitionIndex)->GetStaticField(0x4C510);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6A1F549EC80D97E_TypeDefinitionIndex)->GetStaticField(0xE8A0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A6A1F549EC80D97E_TypeDefinitionIndex)->GetStaticField(0xE8A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>* Method_1_0E2A3674E3D51A7E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_0E2A3674E3D51A7E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*> Method_1_79D17C114808868E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamSkinConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_79D17C114808868E_OFFSET))();
	}

	static ::RPG::GameCore::PamSkinConfigRow* Method_1_F2E5AE99966823B1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PamSkinConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_F2E5AE99966823B1_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_7911F489F65A8573(::RPG::GameCore::PamSkinConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PamSkinConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A6A1F549EC80D97E_METHOD_1_7911F489F65A8573_OFFSET))(a1);
	}
};
