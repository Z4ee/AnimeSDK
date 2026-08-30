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

#define CLASS_1_F468C502480FE502_METHOD_1_05BBC40B28C75E2D_OFFSET UNITYSDK_OFFSET(0x1C7A0010)
#define CLASS_1_F468C502480FE502_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C7A05D0)
#define CLASS_1_F468C502480FE502_METHOD_1_48B1E5BA2514D772_OFFSET UNITYSDK_OFFSET(0x1C79FB90)
#define CLASS_1_F468C502480FE502_METHOD_1_4C26C8B8A2273FD3_OFFSET UNITYSDK_OFFSET(0x1C79FEA0)
#define CLASS_1_F468C502480FE502_METHOD_1_67F279165CA4AA4F_OFFSET UNITYSDK_OFFSET(0x1C7A0620)
#define CLASS_1_F468C502480FE502_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C7A0400)
#define CLASS_1_F468C502480FE502_METHOD_1_9454D07236275726_OFFSET UNITYSDK_OFFSET(0x1C7A0160)
#define CLASS_1_F468C502480FE502_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C7A0490)
#define CLASS_1_F468C502480FE502_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C79FE40)
#define CLASS_1_F468C502480FE502_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C79FC10)
#define CLASS_1_F468C502480FE502_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C7A03C0)
#define CLASS_1_F468C502480FE502_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C7A0530)
#define CLASS_1_F468C502480FE502__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7A0940)

inline static constexpr unsigned int Class_1_F468C502480FE502_TypeDefinitionIndex = 13475;

class Class_1_F468C502480FE502 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F468C502480FE502_TypeDefinitionIndex)->GetStaticField(0x6130);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F468C502480FE502_TypeDefinitionIndex)->GetStaticField(0x6138);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_F468C502480FE502_TypeDefinitionIndex)->GetStaticField(0x6140);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F468C502480FE502_TypeDefinitionIndex)->GetStaticField(0x1B20);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_F468C502480FE502_TypeDefinitionIndex)->GetStaticField(0x1B21);
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

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*> Method_1_4C26C8B8A2273FD3()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightSeasonTraitRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_4C26C8B8A2273FD3_OFFSET))();
	}

	static ::RPG::GameCore::GridFightSeasonTraitRow* Method_1_05BBC40B28C75E2D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightSeasonTraitRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_05BBC40B28C75E2D_OFFSET))(a1);
	}

	static ::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightSeasonTraitRow*>* Method_1_9454D07236275726(::System::UInt32 a1)
	{
		return ((::System::Collections::Generic::IList_1<::RPG::GameCore::GridFightSeasonTraitRow*>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_9454D07236275726_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_F468C502480FE502_METHOD_1_89D1F247B9D324EE_OFFSET))();
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
