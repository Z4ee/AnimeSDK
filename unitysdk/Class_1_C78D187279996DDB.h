#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PunkLordRewardFinishWayRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_C78D187279996DDB_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1998F720)
#define CLASS_1_C78D187279996DDB_METHOD_1_1ED1B004D44BD8FA_OFFSET UNITYSDK_OFFSET(0x1998F380)
#define CLASS_1_C78D187279996DDB_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1998F550)
#define CLASS_1_C78D187279996DDB_METHOD_1_9788366BCA2457AC_OFFSET UNITYSDK_OFFSET(0x1998F210)
#define CLASS_1_C78D187279996DDB_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1998F5E0)
#define CLASS_1_C78D187279996DDB_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1998F1B0)
#define CLASS_1_C78D187279996DDB_METHOD_1_D5F7A087D9DC2F23_OFFSET UNITYSDK_OFFSET(0x1998EF00)
#define CLASS_1_C78D187279996DDB_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1998EF80)
#define CLASS_1_C78D187279996DDB_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1998F510)
#define CLASS_1_C78D187279996DDB_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1998F680)
#define CLASS_1_C78D187279996DDB_METHOD_1_F849BFB4246A38F9_OFFSET UNITYSDK_OFFSET(0x1998F770)
#define CLASS_1_C78D187279996DDB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1998FAE0)

inline static constexpr unsigned int Class_1_C78D187279996DDB_TypeDefinitionIndex = 11728;

class Class_1_C78D187279996DDB : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_0()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C78D187279996DDB_TypeDefinitionIndex)->GetStaticField(0x47DB0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C78D187279996DDB_TypeDefinitionIndex)->GetStaticField(0x47DB8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C78D187279996DDB_TypeDefinitionIndex)->GetStaticField(0x47DC0);
	}
	static ::System::Byte* StaticGet_Field_1_3()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C78D187279996DDB_TypeDefinitionIndex)->GetStaticField(0xD2B0);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C78D187279996DDB_TypeDefinitionIndex)->GetStaticField(0xD2B1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*>* Method_1_D5F7A087D9DC2F23()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_D5F7A087D9DC2F23_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*> Method_1_9788366BCA2457AC()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PunkLordRewardFinishWayRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_9788366BCA2457AC_OFFSET))();
	}

	static ::RPG::GameCore::PunkLordRewardFinishWayRow* Method_1_1ED1B004D44BD8FA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PunkLordRewardFinishWayRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_1ED1B004D44BD8FA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_F849BFB4246A38F9(::RPG::GameCore::PunkLordRewardFinishWayRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PunkLordRewardFinishWayRow*))((::PBYTE)hIl2Cpp + CLASS_1_C78D187279996DDB_METHOD_1_F849BFB4246A38F9_OFFSET))(a1);
	}
};
