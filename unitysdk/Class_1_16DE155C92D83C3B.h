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

#define CLASS_1_16DE155C92D83C3B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x17937090)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x17936EB0)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x17936840)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_7BD2ACFBD824E233_OFFSET UNITYSDK_OFFSET(0x179367C0)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_93D589BE01A9D34D_OFFSET UNITYSDK_OFFSET(0x17936CA0)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_9ACEFB4F978A9BC9_OFFSET UNITYSDK_OFFSET(0x179370E0)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x17936F50)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x17936A90)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_EB2AD4F50925C3F0_OFFSET UNITYSDK_OFFSET(0x17936AF0)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x17936E70)
#define CLASS_1_16DE155C92D83C3B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x17936FF0)
#define CLASS_1_16DE155C92D83C3B__CCTOR_OFFSET UNITYSDK_OFFSET(0x17937440)

inline static constexpr unsigned int Class_1_16DE155C92D83C3B_TypeDefinitionIndex = 13080;

class Class_1_16DE155C92D83C3B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16DE155C92D83C3B_TypeDefinitionIndex)->GetStaticField(0x230A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16DE155C92D83C3B_TypeDefinitionIndex)->GetStaticField(0x230A8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_16DE155C92D83C3B_TypeDefinitionIndex)->GetStaticField(0x230B0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_16DE155C92D83C3B_TypeDefinitionIndex)->GetStaticField(0x9290);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_16DE155C92D83C3B_TypeDefinitionIndex)->GetStaticField(0x9291);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*> Method_1_EB2AD4F50925C3F0()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::NPCSeriesRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_EB2AD4F50925C3F0_OFFSET))();
	}

	static ::RPG::GameCore::NPCSeriesRow* Method_1_93D589BE01A9D34D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::NPCSeriesRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_93D589BE01A9D34D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_16DE155C92D83C3B_METHOD_1_30D1209326FA87FC_OFFSET))();
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
