#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveTeamSlotLevelLimitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0C292C47C10144A9_METHOD_1_03E02B2E615E97CD_OFFSET UNITYSDK_OFFSET(0x18222240)
#define CLASS_1_0C292C47C10144A9_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18222B10)
#define CLASS_1_0C292C47C10144A9_METHOD_1_1F0DD32548DD3B5A_OFFSET UNITYSDK_OFFSET(0x18222570)
#define CLASS_1_0C292C47C10144A9_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18222930)
#define CLASS_1_0C292C47C10144A9_METHOD_1_33360271EE613EAB_OFFSET UNITYSDK_OFFSET(0x18222B60)
#define CLASS_1_0C292C47C10144A9_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x182222C0)
#define CLASS_1_0C292C47C10144A9_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x182229D0)
#define CLASS_1_0C292C47C10144A9_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18222510)
#define CLASS_1_0C292C47C10144A9_METHOD_1_EC1A8ACB0C104A2F_OFFSET UNITYSDK_OFFSET(0x18222720)
#define CLASS_1_0C292C47C10144A9_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182228F0)
#define CLASS_1_0C292C47C10144A9_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18222A70)
#define CLASS_1_0C292C47C10144A9__CCTOR_OFFSET UNITYSDK_OFFSET(0x18222EC0)

inline static constexpr unsigned int Class_1_0C292C47C10144A9_TypeDefinitionIndex = 11161;

class Class_1_0C292C47C10144A9 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C292C47C10144A9_TypeDefinitionIndex)->GetStaticField(0x22670);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C292C47C10144A9_TypeDefinitionIndex)->GetStaticField(0x22678);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C292C47C10144A9_TypeDefinitionIndex)->GetStaticField(0x22680);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C292C47C10144A9_TypeDefinitionIndex)->GetStaticField(0x8A90);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0C292C47C10144A9_TypeDefinitionIndex)->GetStaticField(0x8A91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*>* Method_1_03E02B2E615E97CD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_03E02B2E615E97CD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*> Method_1_1F0DD32548DD3B5A()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_1F0DD32548DD3B5A_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow* Method_1_EC1A8ACB0C104A2F(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_EC1A8ACB0C104A2F_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_33360271EE613EAB(::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveTeamSlotLevelLimitRow*))((::PBYTE)hIl2Cpp + CLASS_1_0C292C47C10144A9_METHOD_1_33360271EE613EAB_OFFSET))(a1);
	}
};
