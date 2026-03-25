#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueTournWorkbenchRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B6252D25B7440A78_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x16CB7610)
#define CLASS_1_B6252D25B7440A78_METHOD_1_245A0C7076EA8B0A_OFFSET UNITYSDK_OFFSET(0x16CB7220)
#define CLASS_1_B6252D25B7440A78_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16CB7430)
#define CLASS_1_B6252D25B7440A78_METHOD_1_5828A07BB9706860_OFFSET UNITYSDK_OFFSET(0x16CB7660)
#define CLASS_1_B6252D25B7440A78_METHOD_1_6B16C2B37C36900C_OFFSET UNITYSDK_OFFSET(0x16CB6D40)
#define CLASS_1_B6252D25B7440A78_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16CB6DC0)
#define CLASS_1_B6252D25B7440A78_METHOD_1_96EC334C7021EF3D_OFFSET UNITYSDK_OFFSET(0x16CB7070)
#define CLASS_1_B6252D25B7440A78_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16CB74D0)
#define CLASS_1_B6252D25B7440A78_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16CB7010)
#define CLASS_1_B6252D25B7440A78_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16CB73F0)
#define CLASS_1_B6252D25B7440A78_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16CB7570)
#define CLASS_1_B6252D25B7440A78__CCTOR_OFFSET UNITYSDK_OFFSET(0x16CB79C0)

inline static constexpr unsigned int Class_1_B6252D25B7440A78_TypeDefinitionIndex = 13705;

class Class_1_B6252D25B7440A78 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6252D25B7440A78_TypeDefinitionIndex)->GetStaticField(0x7540);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6252D25B7440A78_TypeDefinitionIndex)->GetStaticField(0x7548);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6252D25B7440A78_TypeDefinitionIndex)->GetStaticField(0x7550);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6252D25B7440A78_TypeDefinitionIndex)->GetStaticField(0x3F90);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B6252D25B7440A78_TypeDefinitionIndex)->GetStaticField(0x3F91);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*>* Method_1_6B16C2B37C36900C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_6B16C2B37C36900C_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*> Method_1_96EC334C7021EF3D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueTournWorkbenchRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_96EC334C7021EF3D_OFFSET))();
	}

	static ::RPG::GameCore::RogueTournWorkbenchRow* Method_1_245A0C7076EA8B0A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueTournWorkbenchRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_245A0C7076EA8B0A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_5828A07BB9706860(::RPG::GameCore::RogueTournWorkbenchRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueTournWorkbenchRow*))((::PBYTE)hIl2Cpp + CLASS_1_B6252D25B7440A78_METHOD_1_5828A07BB9706860_OFFSET))(a1);
	}
};
