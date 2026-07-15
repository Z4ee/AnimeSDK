#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/ZLinq/FromFixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZLinq/ValueEnumerable_2.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MazeBuffRow; }
namespace RPG::GameCore { class RogueMagicScepterRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_0879960F8BC54C16_OFFSET UNITYSDK_OFFSET(0x1B2849F0)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B284F50)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_60842E075CD9FD9B_OFFSET UNITYSDK_OFFSET(0x1B284FA0)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_7013D851478F747F_OFFSET UNITYSDK_OFFSET(0x1B284B20)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_741C3FA1FB37DB8E_OFFSET UNITYSDK_OFFSET(0x1B2846E0)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B284D80)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_8CCA9E762DC3BDC4_OFFSET UNITYSDK_OFFSET(0x1B285300)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_A630EB181458F5E5_OFFSET UNITYSDK_OFFSET(0x1B284BA0)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B284E10)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B284990)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B284760)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B284D40)
#define CLASS_1_4C23F31E14C8A3D6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B284EB0)
#define CLASS_1_4C23F31E14C8A3D6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2853F0)

inline static constexpr unsigned int Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex = 14296;

class Class_1_4C23F31E14C8A3D6 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex)->GetStaticField(0x100E0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex)->GetStaticField(0x100E8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex)->GetStaticField(0x100F0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex)->GetStaticField(0x56E0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4C23F31E14C8A3D6_TypeDefinitionIndex)->GetStaticField(0x56E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>* Method_1_741C3FA1FB37DB8E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_741C3FA1FB37DB8E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*> Method_1_0879960F8BC54C16()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_0879960F8BC54C16_OFFSET))();
	}

	static ::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>, ::RPG::GameCore::RogueMagicScepterRow*> Method_1_7013D851478F747F()
	{
		return ((::ZLinq::ValueEnumerable_2<::RPG::ZLinq::FromFixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueMagicScepterRow*>, ::RPG::GameCore::RogueMagicScepterRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_7013D851478F747F_OFFSET))();
	}

	static ::RPG::GameCore::RogueMagicScepterRow* Method_1_A630EB181458F5E5(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::RogueMagicScepterRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_A630EB181458F5E5_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_60842E075CD9FD9B(::RPG::GameCore::RogueMagicScepterRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueMagicScepterRow*))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_60842E075CD9FD9B_OFFSET))(a1);
	}

	static ::RPG::GameCore::MazeBuffRow* Method_1_8CCA9E762DC3BDC4(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::MazeBuffRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4C23F31E14C8A3D6_METHOD_1_8CCA9E762DC3BDC4_OFFSET))(a1, a2);
	}
};
