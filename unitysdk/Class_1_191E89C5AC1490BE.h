#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ENpcA07Row; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_191E89C5AC1490BE_METHOD_1_08716880B02398A8_OFFSET UNITYSDK_OFFSET(0x19E9B810)
#define CLASS_1_191E89C5AC1490BE_METHOD_1_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x19E9BC10)
#define CLASS_1_191E89C5AC1490BE_METHOD_1_5AD297B90767E73A_OFFSET UNITYSDK_OFFSET(0x19E9BCD0)
#define CLASS_1_191E89C5AC1490BE_METHOD_1_626E0C4DA199FEDF_OFFSET UNITYSDK_OFFSET(0x19E9BEE0)
#define CLASS_1_191E89C5AC1490BE_METHOD_1_748B8A2AB3F1AB26_OFFSET UNITYSDK_OFFSET(0x19E9BDA0)
#define CLASS_1_191E89C5AC1490BE_METHOD_1_A76361D903DDC4CF_OFFSET UNITYSDK_OFFSET(0x19E9B3A0)
#define CLASS_1_191E89C5AC1490BE_METHOD_1_CE18697B63E52504_OFFSET UNITYSDK_OFFSET(0x19E9B790)
#define CLASS_1_191E89C5AC1490BE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19E9BBB0)
#define CLASS_1_191E89C5AC1490BE_METHOD_1_E1A4A7C2555D0D05_OFFSET UNITYSDK_OFFSET(0x19E9B9C0)
#define CLASS_1_191E89C5AC1490BE_METHOD_1_E9D938B6A30770AD_OFFSET UNITYSDK_OFFSET(0x19E9BE70)
#define CLASS_1_191E89C5AC1490BE_METHOD_1_F7BA13C72A6B3F58_OFFSET UNITYSDK_OFFSET(0x19E9B4B0)
#define CLASS_1_191E89C5AC1490BE__CCTOR_OFFSET UNITYSDK_OFFSET(0x19E9C250)

inline static constexpr unsigned int Class_1_191E89C5AC1490BE_TypeDefinitionIndex = 12615;

class Class_1_191E89C5AC1490BE : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_191E89C5AC1490BE_TypeDefinitionIndex)->GetStaticField(0x4E000);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_191E89C5AC1490BE_TypeDefinitionIndex)->GetStaticField(0x4E008);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_191E89C5AC1490BE_TypeDefinitionIndex)->GetStaticField(0x4E010);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_191E89C5AC1490BE_TypeDefinitionIndex)->GetStaticField(0xF020);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_191E89C5AC1490BE_TypeDefinitionIndex)->GetStaticField(0xF021);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*>* Method_1_A76361D903DDC4CF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_A76361D903DDC4CF_OFFSET))();
	}

	static ::System::Boolean Method_1_CE18697B63E52504()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_CE18697B63E52504_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*> Method_1_08716880B02398A8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ENpcA07Row*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_08716880B02398A8_OFFSET))();
	}

	static ::RPG::GameCore::ENpcA07Row* Method_1_E1A4A7C2555D0D05(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ENpcA07Row*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_E1A4A7C2555D0D05_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::System::Void Method_1_F7BA13C72A6B3F58()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_F7BA13C72A6B3F58_OFFSET))();
	}

	static ::System::Void Method_1_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_33ACA6CB2ABC73F7_OFFSET))();
	}

	static ::System::Void Method_1_5AD297B90767E73A(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_5AD297B90767E73A_OFFSET))(a1);
	}

	static ::System::Void Method_1_748B8A2AB3F1AB26(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_748B8A2AB3F1AB26_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_E9D938B6A30770AD(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_E9D938B6A30770AD_OFFSET))(a1);
	}

	static ::System::Void Method_1_626E0C4DA199FEDF(::RPG::GameCore::ENpcA07Row* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ENpcA07Row*))((::PBYTE)hIl2Cpp + CLASS_1_191E89C5AC1490BE_METHOD_1_626E0C4DA199FEDF_OFFSET))(a1);
	}
};
