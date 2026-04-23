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

#define CLASS_1_FA8F3E690D918136_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x182733C0)
#define CLASS_1_FA8F3E690D918136_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x182731E0)
#define CLASS_1_FA8F3E690D918136_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18272B70)
#define CLASS_1_FA8F3E690D918136_METHOD_1_8D03C7C54B9A1DD7_OFFSET UNITYSDK_OFFSET(0x18272FD0)
#define CLASS_1_FA8F3E690D918136_METHOD_1_A8B5A658B46D3AAE_OFFSET UNITYSDK_OFFSET(0x18272AF0)
#define CLASS_1_FA8F3E690D918136_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18273280)
#define CLASS_1_FA8F3E690D918136_METHOD_1_B6FDFA3CEFDF3A02_OFFSET UNITYSDK_OFFSET(0x18273410)
#define CLASS_1_FA8F3E690D918136_METHOD_1_C6D7B2F1AEE814A7_OFFSET UNITYSDK_OFFSET(0x18272E20)
#define CLASS_1_FA8F3E690D918136_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18272DC0)
#define CLASS_1_FA8F3E690D918136_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x182731A0)
#define CLASS_1_FA8F3E690D918136_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18273320)
#define CLASS_1_FA8F3E690D918136__CCTOR_OFFSET UNITYSDK_OFFSET(0x18273770)

inline static constexpr unsigned int Class_1_FA8F3E690D918136_TypeDefinitionIndex = 13563;

class Class_1_FA8F3E690D918136 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA8F3E690D918136_TypeDefinitionIndex)->GetStaticField(0x1C590);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA8F3E690D918136_TypeDefinitionIndex)->GetStaticField(0x1C598);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA8F3E690D918136_TypeDefinitionIndex)->GetStaticField(0x1C5A0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA8F3E690D918136_TypeDefinitionIndex)->GetStaticField(0x74C0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FA8F3E690D918136_TypeDefinitionIndex)->GetStaticField(0x74C1);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*> Method_1_C6D7B2F1AEE814A7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamPlaceInfoRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_C6D7B2F1AEE814A7_OFFSET))();
	}

	static ::RPG::GameCore::PamPlaceInfoRow* Method_1_8D03C7C54B9A1DD7(::RPG::GameCore::PamPlaceType a1)
	{
		return ((::RPG::GameCore::PamPlaceInfoRow*(*)(::RPG::GameCore::PamPlaceType))((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_8D03C7C54B9A1DD7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FA8F3E690D918136_METHOD_1_30D1209326FA87FC_OFFSET))();
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
