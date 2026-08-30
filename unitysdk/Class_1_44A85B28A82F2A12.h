#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightScoreRewardConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_44A85B28A82F2A12_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B4A81C0)
#define CLASS_1_44A85B28A82F2A12_METHOD_1_2CC3821537C6A903_OFFSET UNITYSDK_OFFSET(0x1B4A7E20)
#define CLASS_1_44A85B28A82F2A12_METHOD_1_3C002CC119195AE6_OFFSET UNITYSDK_OFFSET(0x1B4A8210)
#define CLASS_1_44A85B28A82F2A12_METHOD_1_6F2CAE1AA229B78F_OFFSET UNITYSDK_OFFSET(0x1B4A7CB0)
#define CLASS_1_44A85B28A82F2A12_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B4A7FF0)
#define CLASS_1_44A85B28A82F2A12_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B4A8080)
#define CLASS_1_44A85B28A82F2A12_METHOD_1_C3A665CDDE52AB62_OFFSET UNITYSDK_OFFSET(0x1B4A79A0)
#define CLASS_1_44A85B28A82F2A12_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B4A7C50)
#define CLASS_1_44A85B28A82F2A12_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B4A7A20)
#define CLASS_1_44A85B28A82F2A12_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B4A7FB0)
#define CLASS_1_44A85B28A82F2A12_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B4A8120)
#define CLASS_1_44A85B28A82F2A12__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4A8580)

inline static constexpr unsigned int Class_1_44A85B28A82F2A12_TypeDefinitionIndex = 13323;

class Class_1_44A85B28A82F2A12 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44A85B28A82F2A12_TypeDefinitionIndex)->GetStaticField(0x26F30);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44A85B28A82F2A12_TypeDefinitionIndex)->GetStaticField(0x26F38);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_44A85B28A82F2A12_TypeDefinitionIndex)->GetStaticField(0x26F40);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44A85B28A82F2A12_TypeDefinitionIndex)->GetStaticField(0xB8F0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_44A85B28A82F2A12_TypeDefinitionIndex)->GetStaticField(0xB8F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*>* Method_1_C3A665CDDE52AB62()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_C3A665CDDE52AB62_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*> Method_1_6F2CAE1AA229B78F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightScoreRewardConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_6F2CAE1AA229B78F_OFFSET))();
	}

	static ::RPG::GameCore::GridFightScoreRewardConfigRow* Method_1_2CC3821537C6A903(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightScoreRewardConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_2CC3821537C6A903_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C002CC119195AE6(::RPG::GameCore::GridFightScoreRewardConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightScoreRewardConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_44A85B28A82F2A12_METHOD_1_3C002CC119195AE6_OFFSET))(a1);
	}
};
