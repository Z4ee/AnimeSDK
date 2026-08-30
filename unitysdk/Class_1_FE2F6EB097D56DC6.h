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

#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1D0CA530)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_8060F56ACA14B045_OFFSET UNITYSDK_OFFSET(0x1D0CA190)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D0CA360)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_A65BF4590DEEF22C_OFFSET UNITYSDK_OFFSET(0x1D0CA580)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D0CA3F0)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_B92B3B015C919EDC_OFFSET UNITYSDK_OFFSET(0x1D0C9D10)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D0C9FC0)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D0C9D90)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_DFDE1E156993096D_OFFSET UNITYSDK_OFFSET(0x1D0CA020)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D0CA320)
#define CLASS_1_FE2F6EB097D56DC6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D0CA490)
#define CLASS_1_FE2F6EB097D56DC6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0CA8F0)

inline static constexpr unsigned int Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex = 12674;

class Class_1_FE2F6EB097D56DC6 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex)->GetStaticField(0x16B60);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex)->GetStaticField(0x16B68);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarEquipRecommendRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex)->GetStaticField(0x16B70);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex)->GetStaticField(0x8900);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FE2F6EB097D56DC6_TypeDefinitionIndex)->GetStaticField(0x8901);
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
