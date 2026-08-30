#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/PamPlaceType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PamPlaceInfoRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FA8F3E690D918136_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C7182D0)
#define CLASS_1_FA8F3E690D918136_METHOD_1_6D8F81018B6420C8_OFFSET UNITYSDK_OFFSET(0x1C717F30)
#define CLASS_1_FA8F3E690D918136_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C718100)
#define CLASS_1_FA8F3E690D918136_METHOD_1_A8B5A658B46D3AAE_OFFSET UNITYSDK_OFFSET(0x1C717AB0)
#define CLASS_1_FA8F3E690D918136_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C718190)
#define CLASS_1_FA8F3E690D918136_METHOD_1_B6FDFA3CEFDF3A02_OFFSET UNITYSDK_OFFSET(0x1C718320)
#define CLASS_1_FA8F3E690D918136_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C717D60)
#define CLASS_1_FA8F3E690D918136_METHOD_1_D45DC028F8B873FB_OFFSET UNITYSDK_OFFSET(0x1C717DC0)
#define CLASS_1_FA8F3E690D918136_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C717B30)
#define CLASS_1_FA8F3E690D918136_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C7180C0)
#define CLASS_1_FA8F3E690D918136_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C718230)
#define CLASS_1_FA8F3E690D918136__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C718690)

inline static constexpr unsigned int Class_1_FA8F3E690D918136_TypeDefinitionIndex = 14198;

class Class_1_FA8F3E690D918136 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA8F3E690D918136_TypeDefinitionIndex)->GetStaticField(0x490A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA8F3E690D918136_TypeDefinitionIndex)->GetStaticField(0x490A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA8F3E690D918136_TypeDefinitionIndex)->GetStaticField(0x490B0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA8F3E690D918136_TypeDefinitionIndex)->GetStaticField(0x10C60);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA8F3E690D918136_TypeDefinitionIndex)->GetStaticField(0x10C61);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>* Method_1_A8B5A658B46D3AAE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_A8B5A658B46D3AAE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*> Method_1_D45DC028F8B873FB()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_D45DC028F8B873FB_OFFSET))();
	}

	static ::RPG::GameCore::PamPlaceInfoRow* Method_1_6D8F81018B6420C8(::RPG::GameCore::PamPlaceType a1)
	{
		return ((::RPG::GameCore::PamPlaceInfoRow*(*)(::RPG::GameCore::PamPlaceType))((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_6D8F81018B6420C8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_B6FDFA3CEFDF3A02(::RPG::GameCore::PamPlaceInfoRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PamPlaceInfoRow*))((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_B6FDFA3CEFDF3A02_OFFSET))(a1);
	}
};
