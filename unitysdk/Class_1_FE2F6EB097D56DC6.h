#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarEquipRecommendRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x19D66FA0)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_8060F56ACA14B045_OFFSET UNITYSDK_OFFSET(0x19D66C00)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x19D66DD0)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_A65BF4590DEEF22C_OFFSET UNITYSDK_OFFSET(0x19D66FF0)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x19D66E60)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_B92B3B015C919EDC_OFFSET UNITYSDK_OFFSET(0x19D66780)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x19D66A30)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x19D66800)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_DFDE1E156993096D_OFFSET UNITYSDK_OFFSET(0x19D66A90)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x19D66D90)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x19D66F00)
#define CLASS_1_FE2F6EB097D56DC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D67360)

inline static constexpr unsigned int Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex = 12153;

class Class_1_FE2F6EB097D56DC6 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex)->GetStaticField(0x4BF30);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex)->GetStaticField(0x4BF38);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex)->GetStaticField(0x4BF40);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex)->GetStaticField(0xE650);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex)->GetStaticField(0xE651);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>* Method_1_B92B3B015C919EDC()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_B92B3B015C919EDC_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*> Method_1_DFDE1E156993096D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_DFDE1E156993096D_OFFSET))();
	}

	static ::RPG::GameCore::AvatarEquipRecommendRow* Method_1_8060F56ACA14B045(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarEquipRecommendRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_8060F56ACA14B045_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A65BF4590DEEF22C(::RPG::GameCore::AvatarEquipRecommendRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarEquipRecommendRow*))((::PBYTE)hIl2Cpp + CLASS_1_FE2F6EB097D56DC6_METHOD_1_A65BF4590DEEF22C_OFFSET))(a1);
	}
};
