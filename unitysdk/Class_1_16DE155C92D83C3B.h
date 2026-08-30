#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class NPCSeriesRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_16DE155C92D83C3B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1C8066F0)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_7BD2ACFBD824E233_OFFSET UNITYSDK_OFFSET(0x1C805ED0)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_7F87F1F875CDD4FA_OFFSET UNITYSDK_OFFSET(0x1C806350)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C806520)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_9ACEFB4F978A9BC9_OFFSET UNITYSDK_OFFSET(0x1C806740)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_A5F502F7B9C0013C_OFFSET UNITYSDK_OFFSET(0x1C8061E0)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8065B0)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C806180)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C805F50)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C8064E0)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C806650)
#define CLASS_1_16DE155C92D83C3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C806AB0)

inline static constexpr unsigned int Class_1_16DE155C92D83C3B_TypeDefinitionIndex = 14176;

class Class_1_16DE155C92D83C3B : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16DE155C92D83C3B_TypeDefinitionIndex)->GetStaticField(0xF8E0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16DE155C92D83C3B_TypeDefinitionIndex)->GetStaticField(0xF8E8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16DE155C92D83C3B_TypeDefinitionIndex)->GetStaticField(0xF8F0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_16DE155C92D83C3B_TypeDefinitionIndex)->GetStaticField(0x6C20);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_16DE155C92D83C3B_TypeDefinitionIndex)->GetStaticField(0x6C21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>* Method_1_7BD2ACFBD824E233()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_7BD2ACFBD824E233_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*> Method_1_A5F502F7B9C0013C()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_A5F502F7B9C0013C_OFFSET))();
	}

	static ::RPG::GameCore::NPCSeriesRow* Method_1_7F87F1F875CDD4FA(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::NPCSeriesRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_7F87F1F875CDD4FA_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_9ACEFB4F978A9BC9(::RPG::GameCore::NPCSeriesRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::NPCSeriesRow*))((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_9ACEFB4F978A9BC9_OFFSET))(a1);
	}
};
