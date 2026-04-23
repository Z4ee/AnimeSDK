#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveQuestionSpEquipRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_1A87493DB26FBDA2_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x182463B0)
#define CLASS_1_1A87493DB26FBDA2_METHOD_1_16CA949288ECFC68_OFFSET UNITYSDK_OFFSET(0x18245FC0)
#define CLASS_1_1A87493DB26FBDA2_METHOD_1_2A56929CC39B0F2B_OFFSET UNITYSDK_OFFSET(0x18245E10)
#define CLASS_1_1A87493DB26FBDA2_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182461D0)
#define CLASS_1_1A87493DB26FBDA2_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18245B60)
#define CLASS_1_1A87493DB26FBDA2_METHOD_1_84B265E9CBD15022_OFFSET UNITYSDK_OFFSET(0x18245AE0)
#define CLASS_1_1A87493DB26FBDA2_METHOD_1_94AB8F457BDFD9D6_OFFSET UNITYSDK_OFFSET(0x18246400)
#define CLASS_1_1A87493DB26FBDA2_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18246270)
#define CLASS_1_1A87493DB26FBDA2_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18245DB0)
#define CLASS_1_1A87493DB26FBDA2_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18246190)
#define CLASS_1_1A87493DB26FBDA2_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18246310)
#define CLASS_1_1A87493DB26FBDA2__CCTOR_OFFSET UNITYSDK_OFFSET(0x18246760)

inline static constexpr unsigned int Class_1_1A87493DB26FBDA2_TypeDefinitionIndex = 11275;

class Class_1_1A87493DB26FBDA2 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1A87493DB26FBDA2_TypeDefinitionIndex)->GetStaticField(0x240C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1A87493DB26FBDA2_TypeDefinitionIndex)->GetStaticField(0x240C8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_1A87493DB26FBDA2_TypeDefinitionIndex)->GetStaticField(0x240D0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1A87493DB26FBDA2_TypeDefinitionIndex)->GetStaticField(0x9590);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_1A87493DB26FBDA2_TypeDefinitionIndex)->GetStaticField(0x9591);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*>* Method_1_84B265E9CBD15022()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_84B265E9CBD15022_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*> Method_1_2A56929CC39B0F2B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveQuestionSpEquipRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_2A56929CC39B0F2B_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveQuestionSpEquipRow* Method_1_16CA949288ECFC68(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveQuestionSpEquipRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_16CA949288ECFC68_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_94AB8F457BDFD9D6(::RPG::GameCore::IdleLiveQuestionSpEquipRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveQuestionSpEquipRow*))((::PBYTE)hIl2Cpp + CLASS_1_1A87493DB26FBDA2_METHOD_1_94AB8F457BDFD9D6_OFFSET))(a1);
	}
};
