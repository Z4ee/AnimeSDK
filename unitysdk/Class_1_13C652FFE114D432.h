#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GameModeFuncEntranceRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_13C652FFE114D432_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1B5A71C0)
#define CLASS_1_13C652FFE114D432_METHOD_1_1A74C3BBA7F8E663_OFFSET UNITYSDK_OFFSET(0x1B5A6CF0)
#define CLASS_1_13C652FFE114D432_METHOD_1_230D7455DA71838A_OFFSET UNITYSDK_OFFSET(0x1B5A69E0)
#define CLASS_1_13C652FFE114D432_METHOD_1_5B52D176D374265D_OFFSET UNITYSDK_OFFSET(0x1B5A6E60)
#define CLASS_1_13C652FFE114D432_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B5A6FF0)
#define CLASS_1_13C652FFE114D432_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B5A7080)
#define CLASS_1_13C652FFE114D432_METHOD_1_CB51F6C63DCA181F_OFFSET UNITYSDK_OFFSET(0x1B5A7210)
#define CLASS_1_13C652FFE114D432_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B5A6C90)
#define CLASS_1_13C652FFE114D432_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B5A6A60)
#define CLASS_1_13C652FFE114D432_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B5A6FB0)
#define CLASS_1_13C652FFE114D432_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B5A7120)
#define CLASS_1_13C652FFE114D432__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B5A7530)

inline static constexpr unsigned int Class_1_13C652FFE114D432_TypeDefinitionIndex = 12816;

class Class_1_13C652FFE114D432 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13C652FFE114D432_TypeDefinitionIndex)->GetStaticField(0x40EF0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_1()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13C652FFE114D432_TypeDefinitionIndex)->GetStaticField(0x40EF8);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_13C652FFE114D432_TypeDefinitionIndex)->GetStaticField(0x40F00);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_13C652FFE114D432_TypeDefinitionIndex)->GetStaticField(0xAEE0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_13C652FFE114D432_TypeDefinitionIndex)->GetStaticField(0xAEE1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*>* Method_1_230D7455DA71838A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_230D7455DA71838A_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*> Method_1_1A74C3BBA7F8E663()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GameModeFuncEntranceRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_1A74C3BBA7F8E663_OFFSET))();
	}

	static ::RPG::GameCore::GameModeFuncEntranceRow* Method_1_5B52D176D374265D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GameModeFuncEntranceRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_5B52D176D374265D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_CB51F6C63DCA181F(::RPG::GameCore::GameModeFuncEntranceRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GameModeFuncEntranceRow*))((::PBYTE)hIl2Cpp + CLASS_1_13C652FFE114D432_METHOD_1_CB51F6C63DCA181F_OFFSET))(a1);
	}
};
