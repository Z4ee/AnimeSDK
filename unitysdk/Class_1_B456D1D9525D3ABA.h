#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ActivityDiceCombatAvatarRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B456D1D9525D3ABA_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1977A7D0)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_105840BB62D34A33_OFFSET UNITYSDK_OFFSET(0x1977A3F0)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_240032C5CFE18510_OFFSET UNITYSDK_OFFSET(0x19779F70)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_5D4818CCF57C4C91_OFFSET UNITYSDK_OFFSET(0x1977A280)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_70D4DA667C68267D_OFFSET UNITYSDK_OFFSET(0x1977A820)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1977A600)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_96344A22514059FB_OFFSET UNITYSDK_OFFSET(0x1977A470)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1977A690)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1977A220)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19779FF0)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1977A5C0)
#define CLASS_1_B456D1D9525D3ABA_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1977A730)
#define CLASS_1_B456D1D9525D3ABA__CCTOR_OFFSET UNITYSDK_OFFSET(0x1977AB50)

inline static constexpr unsigned int Class_1_B456D1D9525D3ABA_TypeDefinitionIndex = 10795;

class Class_1_B456D1D9525D3ABA : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B456D1D9525D3ABA_TypeDefinitionIndex)->GetStaticField(0x45260);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B456D1D9525D3ABA_TypeDefinitionIndex)->GetStaticField(0x45268);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B456D1D9525D3ABA_TypeDefinitionIndex)->GetStaticField(0x45270);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B456D1D9525D3ABA_TypeDefinitionIndex)->GetStaticField(0xC690);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B456D1D9525D3ABA_TypeDefinitionIndex)->GetStaticField(0xC691);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>* Method_1_240032C5CFE18510()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_240032C5CFE18510_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*> Method_1_5D4818CCF57C4C91()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_5D4818CCF57C4C91_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>, ::RPG::GameCore::ActivityDiceCombatAvatarRow*> Method_1_105840BB62D34A33()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>, ::RPG::GameCore::ActivityDiceCombatAvatarRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_105840BB62D34A33_OFFSET))();
	}

	static ::RPG::GameCore::ActivityDiceCombatAvatarRow* Method_1_96344A22514059FB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ActivityDiceCombatAvatarRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_96344A22514059FB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_70D4DA667C68267D(::RPG::GameCore::ActivityDiceCombatAvatarRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ActivityDiceCombatAvatarRow*))((::PBYTE)hIl2Cpp + CLASS_1_B456D1D9525D3ABA_METHOD_1_70D4DA667C68267D_OFFSET))(a1);
	}
};
