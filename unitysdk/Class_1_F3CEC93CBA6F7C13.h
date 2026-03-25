#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GlobalScheduleDataRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x16C23DA0)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_1A5877AFFEC4CBD3_OFFSET UNITYSDK_OFFSET(0x16C23520)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_29D94D5E623B633C_OFFSET UNITYSDK_OFFSET(0x16C23A00)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16C23BC0)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16C235A0)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_7C852DCB9E9C5CAC_OFFSET UNITYSDK_OFFSET(0x16C23850)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16C23C60)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16C237F0)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_CF54CE9E982F7428_OFFSET UNITYSDK_OFFSET(0x16C23DF0)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16C23B80)
#define CLASS_1_F3CEC93CBA6F7C13_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16C23D00)
#define CLASS_1_F3CEC93CBA6F7C13__CCTOR_OFFSET UNITYSDK_OFFSET(0x16C24100)

inline static constexpr unsigned int Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex = 13829;

class Class_1_F3CEC93CBA6F7C13 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex)->GetStaticField(0x2A700);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex)->GetStaticField(0x2A708);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex)->GetStaticField(0x2A710);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex)->GetStaticField(0xDFA0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F3CEC93CBA6F7C13_TypeDefinitionIndex)->GetStaticField(0xDFA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>* Method_1_1A5877AFFEC4CBD3()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_1A5877AFFEC4CBD3_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*> Method_1_7C852DCB9E9C5CAC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GlobalScheduleDataRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_7C852DCB9E9C5CAC_OFFSET))();
	}

	static ::RPG::GameCore::GlobalScheduleDataRow* Method_1_29D94D5E623B633C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GlobalScheduleDataRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_29D94D5E623B633C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_CF54CE9E982F7428(::RPG::GameCore::GlobalScheduleDataRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GlobalScheduleDataRow*))((::PBYTE)hIl2Cpp + CLASS_1_F3CEC93CBA6F7C13_METHOD_1_CF54CE9E982F7428_OFFSET))(a1);
	}
};
