#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MapEntranceUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x1D350860)
#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_35B092FAA6096FA1_OFFSET UNITYSDK_OFFSET(0x1D350080)
#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D350690)
#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_9DF8B3A92DBEAB3E_OFFSET UNITYSDK_OFFSET(0x1D3508B0)
#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D350720)
#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_CC8B92ED5AED5634_OFFSET UNITYSDK_OFFSET(0x1D3504C0)
#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D350330)
#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D350100)
#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_E4FB03E5BF035D5F_OFFSET UNITYSDK_OFFSET(0x1D350390)
#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D350650)
#define CLASS_1_4ACBD02C6A58BCAD_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D3507C0)
#define CLASS_1_4ACBD02C6A58BCAD__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D350BD0)

inline static constexpr unsigned int Class_1_4ACBD02C6A58BCAD_TypeDefinitionIndex = 13960;

class Class_1_4ACBD02C6A58BCAD : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ACBD02C6A58BCAD_TypeDefinitionIndex)->GetStaticField(0x12FA0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ACBD02C6A58BCAD_TypeDefinitionIndex)->GetStaticField(0x12FA8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ACBD02C6A58BCAD_TypeDefinitionIndex)->GetStaticField(0x12FB0);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ACBD02C6A58BCAD_TypeDefinitionIndex)->GetStaticField(0x7C20);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_4ACBD02C6A58BCAD_TypeDefinitionIndex)->GetStaticField(0x7C21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*>* Method_1_35B092FAA6096FA1()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_35B092FAA6096FA1_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*> Method_1_E4FB03E5BF035D5F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MapEntranceUnlockRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_E4FB03E5BF035D5F_OFFSET))();
	}

	static ::RPG::GameCore::MapEntranceUnlockRow* Method_1_CC8B92ED5AED5634(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MapEntranceUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_CC8B92ED5AED5634_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_9DF8B3A92DBEAB3E(::RPG::GameCore::MapEntranceUnlockRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MapEntranceUnlockRow*))((::PBYTE)hIl2Cpp + CLASS_1_4ACBD02C6A58BCAD_METHOD_1_9DF8B3A92DBEAB3E_OFFSET))(a1);
	}
};
