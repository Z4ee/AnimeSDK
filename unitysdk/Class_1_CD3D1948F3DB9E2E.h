#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveEventSentenceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B38F8B0)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B38F6E0)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_901BE699BD749513_OFFSET UNITYSDK_OFFSET(0x1B38F2E0)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_A11E34566E10F4B7_OFFSET UNITYSDK_OFFSET(0x1B38F450)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B38F770)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_C186C83C1CF4B616_OFFSET UNITYSDK_OFFSET(0x1B38EFD0)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_C91A74618709E77F_OFFSET UNITYSDK_OFFSET(0x1B38F4D0)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B38F280)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B38F050)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B38F6A0)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B38F810)
#define CLASS_1_CD3D1948F3DB9E2E_METHOD_1_FB4F1834A3E0949A_OFFSET UNITYSDK_OFFSET(0x1B38F900)
#define CLASS_1_CD3D1948F3DB9E2E__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B38FCA0)

inline static constexpr unsigned int Class_1_CD3D1948F3DB9E2E_TypeDefinitionIndex = 11296;

class Class_1_CD3D1948F3DB9E2E : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD3D1948F3DB9E2E_TypeDefinitionIndex)->GetStaticField(0xACB0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD3D1948F3DB9E2E_TypeDefinitionIndex)->GetStaticField(0xACB8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD3D1948F3DB9E2E_TypeDefinitionIndex)->GetStaticField(0xACC0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD3D1948F3DB9E2E_TypeDefinitionIndex)->GetStaticField(0x4470);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_CD3D1948F3DB9E2E_TypeDefinitionIndex)->GetStaticField(0x4471);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>* Method_1_C186C83C1CF4B616()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_C186C83C1CF4B616_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*> Method_1_901BE699BD749513()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_901BE699BD749513_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>, ::RPG::GameCore::IdleLiveEventSentenceRow*> Method_1_A11E34566E10F4B7()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveEventSentenceRow*>, ::RPG::GameCore::IdleLiveEventSentenceRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_A11E34566E10F4B7_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveEventSentenceRow* Method_1_C91A74618709E77F(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::IdleLiveEventSentenceRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_C91A74618709E77F_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_FB4F1834A3E0949A(::RPG::GameCore::IdleLiveEventSentenceRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveEventSentenceRow*))((::PBYTE)hIl2Cpp + CLASS_1_CD3D1948F3DB9E2E_METHOD_1_FB4F1834A3E0949A_OFFSET))(a1);
	}
};
