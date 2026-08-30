#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ImgDanmuContentRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B8BCAC9B4E929386_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1CB950B0)
#define CLASS_1_B8BCAC9B4E929386_METHOD_1_1E8831028ADD3762_OFFSET UNITYSDK_OFFSET(0x1CB95100)
#define CLASS_1_B8BCAC9B4E929386_METHOD_1_29B3D8C61AE79D07_OFFSET UNITYSDK_OFFSET(0x1CB95550)
#define CLASS_1_B8BCAC9B4E929386_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1CB94EE0)
#define CLASS_1_B8BCAC9B4E929386_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1CB94F70)
#define CLASS_1_B8BCAC9B4E929386_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1CB954F0)
#define CLASS_1_B8BCAC9B4E929386_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1CB94CB0)
#define CLASS_1_B8BCAC9B4E929386_METHOD_1_E81DF225B47E64B7_OFFSET UNITYSDK_OFFSET(0x1CB956C0)
#define CLASS_1_B8BCAC9B4E929386_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1CB94C70)
#define CLASS_1_B8BCAC9B4E929386_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1CB95010)
#define CLASS_1_B8BCAC9B4E929386_METHOD_1_F7AA2B194D4F3F96_OFFSET UNITYSDK_OFFSET(0x1CB95470)
#define CLASS_1_B8BCAC9B4E929386__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB95850)

inline static constexpr unsigned int Class_1_B8BCAC9B4E929386_TypeDefinitionIndex = 15025;

class Class_1_B8BCAC9B4E929386 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8BCAC9B4E929386_TypeDefinitionIndex)->GetStaticField(0x28A20);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8BCAC9B4E929386_TypeDefinitionIndex)->GetStaticField(0x28A28);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8BCAC9B4E929386_TypeDefinitionIndex)->GetStaticField(0x28A30);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8BCAC9B4E929386_TypeDefinitionIndex)->GetStaticField(0xBF20);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B8BCAC9B4E929386_TypeDefinitionIndex)->GetStaticField(0xBF21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386__CCTOR_OFFSET))();
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_1E8831028ADD3762(::RPG::GameCore::ImgDanmuContentRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ImgDanmuContentRow*))((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_1E8831028ADD3762_OFFSET))(a1);
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*>* Method_1_F7AA2B194D4F3F96()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_F7AA2B194D4F3F96_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*> Method_1_29B3D8C61AE79D07()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ImgDanmuContentRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_29B3D8C61AE79D07_OFFSET))();
	}

	static ::RPG::GameCore::ImgDanmuContentRow* Method_1_E81DF225B47E64B7(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ImgDanmuContentRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B8BCAC9B4E929386_METHOD_1_E81DF225B47E64B7_OFFSET))(a1);
	}
};
