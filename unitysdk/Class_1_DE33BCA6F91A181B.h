#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraArrangementPresetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DE33BCA6F91A181B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B631A80)
#define CLASS_1_DE33BCA6F91A181B_METHOD_1_579E7EC3FF26593C_OFFSET UNITYSDK_OFFSET(0x1B631570)
#define CLASS_1_DE33BCA6F91A181B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B6318B0)
#define CLASS_1_DE33BCA6F91A181B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B631940)
#define CLASS_1_DE33BCA6F91A181B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B631510)
#define CLASS_1_DE33BCA6F91A181B_METHOD_1_D23A9314B2500634_OFFSET UNITYSDK_OFFSET(0x1B6316E0)
#define CLASS_1_DE33BCA6F91A181B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B6312E0)
#define CLASS_1_DE33BCA6F91A181B_METHOD_1_E832E182C983A1EF_OFFSET UNITYSDK_OFFSET(0x1B631260)
#define CLASS_1_DE33BCA6F91A181B_METHOD_1_EBBB60DF4B8D47C7_OFFSET UNITYSDK_OFFSET(0x1B631AD0)
#define CLASS_1_DE33BCA6F91A181B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B631870)
#define CLASS_1_DE33BCA6F91A181B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B6319E0)
#define CLASS_1_DE33BCA6F91A181B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B631E40)

inline static constexpr unsigned int Class_1_DE33BCA6F91A181B_TypeDefinitionIndex = 12554;

class Class_1_DE33BCA6F91A181B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE33BCA6F91A181B_TypeDefinitionIndex)->GetStaticField(0x63D50);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE33BCA6F91A181B_TypeDefinitionIndex)->GetStaticField(0x63D58);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE33BCA6F91A181B_TypeDefinitionIndex)->GetStaticField(0x63D60);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE33BCA6F91A181B_TypeDefinitionIndex)->GetStaticField(0x13370);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DE33BCA6F91A181B_TypeDefinitionIndex)->GetStaticField(0x13371);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*>* Method_1_E832E182C983A1EF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_E832E182C983A1EF_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*> Method_1_579E7EC3FF26593C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraArrangementPresetRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_579E7EC3FF26593C_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraArrangementPresetRow* Method_1_D23A9314B2500634(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraArrangementPresetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_D23A9314B2500634_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_EBBB60DF4B8D47C7(::RPG::GameCore::ChimeraArrangementPresetRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraArrangementPresetRow*))((::PBYTE)hIl2Cpp + CLASS_1_DE33BCA6F91A181B_METHOD_1_EBBB60DF4B8D47C7_OFFSET))(a1);
	}
};
