#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightRandomBonusPoolConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C3B77A165BDFAE75_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16C42B80)
#define CLASS_1_C3B77A165BDFAE75_METHOD_1_154BED00532E938B_OFFSET UNITYSDK_OFFSET(0x16C42790)
#define CLASS_1_C3B77A165BDFAE75_METHOD_1_2635541607025F1F_OFFSET UNITYSDK_OFFSET(0x16C42BD0)
#define CLASS_1_C3B77A165BDFAE75_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C429A0)
#define CLASS_1_C3B77A165BDFAE75_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C42330)
#define CLASS_1_C3B77A165BDFAE75_METHOD_1_7286F69681FD6A79_OFFSET UNITYSDK_OFFSET(0x16C422B0)
#define CLASS_1_C3B77A165BDFAE75_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C42A40)
#define CLASS_1_C3B77A165BDFAE75_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C42580)
#define CLASS_1_C3B77A165BDFAE75_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C42960)
#define CLASS_1_C3B77A165BDFAE75_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C42AE0)
#define CLASS_1_C3B77A165BDFAE75_METHOD_1_FC0B3E94CA28C17E_OFFSET UNITYSDK_OFFSET(0x16C425E0)
#define CLASS_1_C3B77A165BDFAE75__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C42F30)

inline static constexpr unsigned int Class_1_C3B77A165BDFAE75_TypeDefinitionIndex = 12261;

class Class_1_C3B77A165BDFAE75 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3B77A165BDFAE75_TypeDefinitionIndex)->GetStaticField(0x2B730);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3B77A165BDFAE75_TypeDefinitionIndex)->GetStaticField(0x2B738);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3B77A165BDFAE75_TypeDefinitionIndex)->GetStaticField(0x2B740);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3B77A165BDFAE75_TypeDefinitionIndex)->GetStaticField(0xE710);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C3B77A165BDFAE75_TypeDefinitionIndex)->GetStaticField(0xE711);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*>* Method_1_7286F69681FD6A79()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_7286F69681FD6A79_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*> Method_1_FC0B3E94CA28C17E()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightRandomBonusPoolConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_FC0B3E94CA28C17E_OFFSET))();
	}

	static ::RPG::GameCore::GridFightRandomBonusPoolConfigRow* Method_1_154BED00532E938B(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightRandomBonusPoolConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_154BED00532E938B_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_2635541607025F1F(::RPG::GameCore::GridFightRandomBonusPoolConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightRandomBonusPoolConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_C3B77A165BDFAE75_METHOD_1_2635541607025F1F_OFFSET))(a1);
	}
};
