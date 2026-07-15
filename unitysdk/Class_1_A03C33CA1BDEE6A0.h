#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1AF9B1E0)
#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_4A127289C556FCB8_OFFSET UNITYSDK_OFFSET(0x1AF9B230)
#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_5964CC14BEC806B4_OFFSET UNITYSDK_OFFSET(0x1AF9A980)
#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_6EE0A33FDBB69EFD_OFFSET UNITYSDK_OFFSET(0x1AF9AE00)
#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_794F9A69BBCFC261_OFFSET UNITYSDK_OFFSET(0x1AF9AC90)
#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AF9B010)
#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AF9B0A0)
#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AF9AC30)
#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AF9AA00)
#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AF9AFD0)
#define CLASS_1_A03C33CA1BDEE6A0_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AF9B140)
#define CLASS_1_A03C33CA1BDEE6A0__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF9B5D0)

inline static constexpr unsigned int Class_1_A03C33CA1BDEE6A0_TypeDefinitionIndex = 13144;

class Class_1_A03C33CA1BDEE6A0 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A03C33CA1BDEE6A0_TypeDefinitionIndex)->GetStaticField(0x674A0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A03C33CA1BDEE6A0_TypeDefinitionIndex)->GetStaticField(0x674A8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A03C33CA1BDEE6A0_TypeDefinitionIndex)->GetStaticField(0x674B0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A03C33CA1BDEE6A0_TypeDefinitionIndex)->GetStaticField(0x13F90);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_A03C33CA1BDEE6A0_TypeDefinitionIndex)->GetStaticField(0x13F91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*>* Method_1_5964CC14BEC806B4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_5964CC14BEC806B4_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*> Method_1_794F9A69BBCFC261()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_794F9A69BBCFC261_OFFSET))();
	}

	static ::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* Method_1_6EE0A33FDBB69EFD(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_6EE0A33FDBB69EFD_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_4A127289C556FCB8(::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_A03C33CA1BDEE6A0_METHOD_1_4A127289C556FCB8_OFFSET))(a1);
	}
};
