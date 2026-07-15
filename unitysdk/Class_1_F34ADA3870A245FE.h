#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengePeakRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F34ADA3870A245FE_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1B8104D0)
#define CLASS_1_F34ADA3870A245FE_METHOD_1_119937F52D0C1757_OFFSET UNITYSDK_OFFSET(0x1B810520)
#define CLASS_1_F34ADA3870A245FE_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B810300)
#define CLASS_1_F34ADA3870A245FE_METHOD_1_8F5FF01B41251CEB_OFFSET UNITYSDK_OFFSET(0x1B810130)
#define CLASS_1_F34ADA3870A245FE_METHOD_1_9FFD9CE12051C534_OFFSET UNITYSDK_OFFSET(0x1B810000)
#define CLASS_1_F34ADA3870A245FE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B810390)
#define CLASS_1_F34ADA3870A245FE_METHOD_1_BB42303C0751604C_OFFSET UNITYSDK_OFFSET(0x1B80FCF0)
#define CLASS_1_F34ADA3870A245FE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B80FFA0)
#define CLASS_1_F34ADA3870A245FE_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B80FD70)
#define CLASS_1_F34ADA3870A245FE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B8102C0)
#define CLASS_1_F34ADA3870A245FE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B810430)
#define CLASS_1_F34ADA3870A245FE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B810840)

inline static constexpr unsigned int Class_1_F34ADA3870A245FE_TypeDefinitionIndex = 12488;

class Class_1_F34ADA3870A245FE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F34ADA3870A245FE_TypeDefinitionIndex)->GetStaticField(0x65370);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F34ADA3870A245FE_TypeDefinitionIndex)->GetStaticField(0x65378);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F34ADA3870A245FE_TypeDefinitionIndex)->GetStaticField(0x65380);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F34ADA3870A245FE_TypeDefinitionIndex)->GetStaticField(0x13780);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F34ADA3870A245FE_TypeDefinitionIndex)->GetStaticField(0x13781);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*>* Method_1_BB42303C0751604C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_BB42303C0751604C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*> Method_1_9FFD9CE12051C534()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengePeakRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_9FFD9CE12051C534_OFFSET))();
	}

	static ::RPG::GameCore::ChallengePeakRewardRow* Method_1_8F5FF01B41251CEB(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChallengePeakRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_8F5FF01B41251CEB_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_119937F52D0C1757(::RPG::GameCore::ChallengePeakRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengePeakRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_F34ADA3870A245FE_METHOD_1_119937F52D0C1757_OFFSET))(a1);
	}
};
