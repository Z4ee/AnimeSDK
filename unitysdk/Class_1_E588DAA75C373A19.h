#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class StoryAtlasRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define CLASS_1_E588DAA75C373A19_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1D0EA200)
#define CLASS_1_E588DAA75C373A19_METHOD_1_2D9851DD0449CCCF_OFFSET UNITYSDK_OFFSET(0x1D0E9D20)
#define CLASS_1_E588DAA75C373A19_METHOD_1_7E19B9E412777CDD_OFFSET UNITYSDK_OFFSET(0x1D0E9A10)
#define CLASS_1_E588DAA75C373A19_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1D0EA030)
#define CLASS_1_E588DAA75C373A19_METHOD_1_A6E3527421820A82_OFFSET UNITYSDK_OFFSET(0x1D0EA5B0)
#define CLASS_1_E588DAA75C373A19_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1D0EA0C0)
#define CLASS_1_E588DAA75C373A19_METHOD_1_C7E0547D2334FF92_OFFSET UNITYSDK_OFFSET(0x1D0EA250)
#define CLASS_1_E588DAA75C373A19_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1D0E9CC0)
#define CLASS_1_E588DAA75C373A19_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1D0E9A90)
#define CLASS_1_E588DAA75C373A19_METHOD_1_E1215D834911D952_OFFSET UNITYSDK_OFFSET(0x1D0E9E50)
#define CLASS_1_E588DAA75C373A19_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1D0E9FF0)
#define CLASS_1_E588DAA75C373A19_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1D0EA160)
#define CLASS_1_E588DAA75C373A19__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0EA600)

inline static constexpr unsigned int Class_1_E588DAA75C373A19_TypeDefinitionIndex = 12598;

class Class_1_E588DAA75C373A19 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E588DAA75C373A19_TypeDefinitionIndex)->GetStaticField(0x17E50);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E588DAA75C373A19_TypeDefinitionIndex)->GetStaticField(0x17E58);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_E588DAA75C373A19_TypeDefinitionIndex)->GetStaticField(0x17E60);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E588DAA75C373A19_TypeDefinitionIndex)->GetStaticField(0x8CA0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_E588DAA75C373A19_TypeDefinitionIndex)->GetStaticField(0x8CA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>* Method_1_7E19B9E412777CDD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_7E19B9E412777CDD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*> Method_1_2D9851DD0449CCCF()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::StoryAtlasRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_2D9851DD0449CCCF_OFFSET))();
	}

	static ::RPG::GameCore::StoryAtlasRow* Method_1_E1215D834911D952(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::StoryAtlasRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_E1215D834911D952_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_C7E0547D2334FF92(::RPG::GameCore::StoryAtlasRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::StoryAtlasRow*))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_C7E0547D2334FF92_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::StoryAtlasRow*>* Method_1_A6E3527421820A82(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::RPG::GameCore::StoryAtlasRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_E588DAA75C373A19_METHOD_1_A6E3527421820A82_OFFSET))(a1);
	}
};
