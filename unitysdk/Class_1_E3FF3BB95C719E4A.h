#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveSpEquipSlotRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1BD3B520)
#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_30BC5745BE0B3D27_OFFSET UNITYSDK_OFFSET(0x1BD3B570)
#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_4CBD0DD62BBA55AA_OFFSET UNITYSDK_OFFSET(0x1BD3AD40)
#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1BD3B350)
#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1BD3B3E0)
#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_BD4B32A47200DFE2_OFFSET UNITYSDK_OFFSET(0x1BD3B050)
#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1BD3AFF0)
#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1BD3ADC0)
#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1BD3B310)
#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1BD3B480)
#define CLASS_1_E3FF3BB95C719E4A_METHOD_1_F82E236C2DB0E37B_OFFSET UNITYSDK_OFFSET(0x1BD3B180)
#define CLASS_1_E3FF3BB95C719E4A__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD3B890)

inline static constexpr unsigned int Class_1_E3FF3BB95C719E4A_TypeDefinitionIndex = 11355;

class Class_1_E3FF3BB95C719E4A : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3FF3BB95C719E4A_TypeDefinitionIndex)->GetStaticField(0x37D60);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3FF3BB95C719E4A_TypeDefinitionIndex)->GetStaticField(0x37D68);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3FF3BB95C719E4A_TypeDefinitionIndex)->GetStaticField(0x37D70);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3FF3BB95C719E4A_TypeDefinitionIndex)->GetStaticField(0x94A0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E3FF3BB95C719E4A_TypeDefinitionIndex)->GetStaticField(0x94A1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*>* Method_1_4CBD0DD62BBA55AA()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_4CBD0DD62BBA55AA_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*> Method_1_BD4B32A47200DFE2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveSpEquipSlotRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_BD4B32A47200DFE2_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveSpEquipSlotRow* Method_1_F82E236C2DB0E37B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveSpEquipSlotRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_F82E236C2DB0E37B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_30BC5745BE0B3D27(::RPG::GameCore::IdleLiveSpEquipSlotRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveSpEquipSlotRow*))((::PBYTE)hIl2Cpp + CLASS_1_E3FF3BB95C719E4A_METHOD_1_30BC5745BE0B3D27_OFFSET))(a1);
	}
};
