#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightSeasonTraitRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define CLASS_1_F468C502480FE502_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1896C150)
#define CLASS_1_F468C502480FE502_METHOD_1_14F7DBBF35F3F9E7_OFFSET UNITYSDK_OFFSET(0x1896BD90)
#define CLASS_1_F468C502480FE502_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1896BF70)
#define CLASS_1_F468C502480FE502_METHOD_1_48B1E5BA2514D772_OFFSET UNITYSDK_OFFSET(0x1896B730)
#define CLASS_1_F468C502480FE502_METHOD_1_4F6EEEC0379D433F_OFFSET UNITYSDK_OFFSET(0x1896BA60)
#define CLASS_1_F468C502480FE502_METHOD_1_554CDB3A728C07F1_OFFSET UNITYSDK_OFFSET(0x1896BC10)
#define CLASS_1_F468C502480FE502_METHOD_1_67F279165CA4AA4F_OFFSET UNITYSDK_OFFSET(0x1896C1A0)
#define CLASS_1_F468C502480FE502_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1896B7B0)
#define CLASS_1_F468C502480FE502_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1896C010)
#define CLASS_1_F468C502480FE502_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1896BA00)
#define CLASS_1_F468C502480FE502_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1896BF30)
#define CLASS_1_F468C502480FE502_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1896C0B0)
#define CLASS_1_F468C502480FE502__CCTOR_OFFSET UNITYSDK_OFFSET(0x1896C4B0)

inline static constexpr unsigned int Class_1_F468C502480FE502_TypeDefinitionIndex = 12851;

class Class_1_F468C502480FE502 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F468C502480FE502_TypeDefinitionIndex)->GetStaticField(0x20D10);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F468C502480FE502_TypeDefinitionIndex)->GetStaticField(0x20D18);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F468C502480FE502_TypeDefinitionIndex)->GetStaticField(0x20D20);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F468C502480FE502_TypeDefinitionIndex)->GetStaticField(0x8030);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F468C502480FE502_TypeDefinitionIndex)->GetStaticField(0x8031);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>* Method_1_48B1E5BA2514D772()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_48B1E5BA2514D772_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*> Method_1_4F6EEEC0379D433F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_4F6EEEC0379D433F_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSeasonTraitRow* Method_1_554CDB3A728C07F1(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightSeasonTraitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_554CDB3A728C07F1_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightSeasonTraitRow*>* Method_1_14F7DBBF35F3F9E7(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightSeasonTraitRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_14F7DBBF35F3F9E7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_67F279165CA4AA4F(::RPG::GameCore::GridFightSeasonTraitRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightSeasonTraitRow*))((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_67F279165CA4AA4F_OFFSET))(a1);
	}
};
