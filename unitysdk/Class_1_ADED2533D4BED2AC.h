#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChallengeMazeRewardLineRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_ADED2533D4BED2AC_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18FA5640)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_392471F16746829A_OFFSET UNITYSDK_OFFSET(0x18FA5130)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_8607D1BFC7D5E83D_OFFSET UNITYSDK_OFFSET(0x18FA5690)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18FA5470)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_9AE1E1A3768C853A_OFFSET UNITYSDK_OFFSET(0x18FA4E20)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18FA5500)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_B50BC0E1E27E3825_OFFSET UNITYSDK_OFFSET(0x18FA5260)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18FA50D0)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18FA4EA0)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18FA5430)
#define CLASS_1_ADED2533D4BED2AC_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18FA55A0)
#define CLASS_1_ADED2533D4BED2AC__CCTOR_OFFSET UNITYSDK_OFFSET(0x18FA59F0)

inline static constexpr unsigned int Class_1_ADED2533D4BED2AC_TypeDefinitionIndex = 12346;

class Class_1_ADED2533D4BED2AC : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADED2533D4BED2AC_TypeDefinitionIndex)->GetStaticField(0x39170);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADED2533D4BED2AC_TypeDefinitionIndex)->GetStaticField(0x39178);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADED2533D4BED2AC_TypeDefinitionIndex)->GetStaticField(0x39180);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADED2533D4BED2AC_TypeDefinitionIndex)->GetStaticField(0xB5F0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_ADED2533D4BED2AC_TypeDefinitionIndex)->GetStaticField(0xB5F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>* Method_1_9AE1E1A3768C853A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_9AE1E1A3768C853A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*> Method_1_392471F16746829A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChallengeMazeRewardLineRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_392471F16746829A_OFFSET))();
	}

	static ::RPG::GameCore::ChallengeMazeRewardLineRow* Method_1_B50BC0E1E27E3825(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::ChallengeMazeRewardLineRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_B50BC0E1E27E3825_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_8607D1BFC7D5E83D(::RPG::GameCore::ChallengeMazeRewardLineRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChallengeMazeRewardLineRow*))((::PBYTE)hIl2Cpp + CLASS_1_ADED2533D4BED2AC_METHOD_1_8607D1BFC7D5E83D_OFFSET))(a1);
	}
};
