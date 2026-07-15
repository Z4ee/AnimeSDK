#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BattleCollegeStageIntroRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_99B9FD0FFD37573C_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B8FEBD0)
#define CLASS_1_99B9FD0FFD37573C_METHOD_1_12A42E5AEAAE7426_OFFSET UNITYSDK_OFFSET(0x1B8FE370)
#define CLASS_1_99B9FD0FFD37573C_METHOD_1_19C29FC7C3FE2AC9_OFFSET UNITYSDK_OFFSET(0x1B8FE7F0)
#define CLASS_1_99B9FD0FFD37573C_METHOD_1_67C9BC6D055871EF_OFFSET UNITYSDK_OFFSET(0x1B8FE680)
#define CLASS_1_99B9FD0FFD37573C_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B8FEA00)
#define CLASS_1_99B9FD0FFD37573C_METHOD_1_9E09D61EE2FBC714_OFFSET UNITYSDK_OFFSET(0x1B8FEC20)
#define CLASS_1_99B9FD0FFD37573C_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B8FEA90)
#define CLASS_1_99B9FD0FFD37573C_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B8FE620)
#define CLASS_1_99B9FD0FFD37573C_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B8FE3F0)
#define CLASS_1_99B9FD0FFD37573C_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B8FE9C0)
#define CLASS_1_99B9FD0FFD37573C_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B8FEB30)
#define CLASS_1_99B9FD0FFD37573C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8FEFC0)

inline static constexpr unsigned int Class_1_99B9FD0FFD37573C_TypeDefinitionIndex = 12356;

class Class_1_99B9FD0FFD37573C : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99B9FD0FFD37573C_TypeDefinitionIndex)->GetStaticField(0x42590);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99B9FD0FFD37573C_TypeDefinitionIndex)->GetStaticField(0x42598);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_99B9FD0FFD37573C_TypeDefinitionIndex)->GetStaticField(0x425A0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_99B9FD0FFD37573C_TypeDefinitionIndex)->GetStaticField(0xB430);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_99B9FD0FFD37573C_TypeDefinitionIndex)->GetStaticField(0xB431);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>* Method_1_12A42E5AEAAE7426()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_12A42E5AEAAE7426_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*> Method_1_67C9BC6D055871EF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::BattleCollegeStageIntroRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_67C9BC6D055871EF_OFFSET))();
	}

	static ::RPG::GameCore::BattleCollegeStageIntroRow* Method_1_19C29FC7C3FE2AC9(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::BattleCollegeStageIntroRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_19C29FC7C3FE2AC9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9E09D61EE2FBC714(::RPG::GameCore::BattleCollegeStageIntroRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::BattleCollegeStageIntroRow*))((::PBYTE)hIl2Cpp + CLASS_1_99B9FD0FFD37573C_METHOD_1_9E09D61EE2FBC714_OFFSET))(a1);
	}
};
