#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightNodeType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightStageNodeDisplayConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_6B253281269AA4E1_METHOD_1_0B2F5A228C5DD862_OFFSET UNITYSDK_OFFSET(0x1C874E80)
#define CLASS_1_6B253281269AA4E1_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1C875220)
#define CLASS_1_6B253281269AA4E1_METHOD_1_59501112C3D2AACD_OFFSET UNITYSDK_OFFSET(0x1C874A00)
#define CLASS_1_6B253281269AA4E1_METHOD_1_5E9B66AAFAE5ACF2_OFFSET UNITYSDK_OFFSET(0x1C874D10)
#define CLASS_1_6B253281269AA4E1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1C875050)
#define CLASS_1_6B253281269AA4E1_METHOD_1_99C4F2FD3BD86F83_OFFSET UNITYSDK_OFFSET(0x1C875270)
#define CLASS_1_6B253281269AA4E1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1C8750E0)
#define CLASS_1_6B253281269AA4E1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1C874CB0)
#define CLASS_1_6B253281269AA4E1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1C874A80)
#define CLASS_1_6B253281269AA4E1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1C875010)
#define CLASS_1_6B253281269AA4E1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1C875180)
#define CLASS_1_6B253281269AA4E1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8755E0)

inline static constexpr unsigned int Class_1_6B253281269AA4E1_TypeDefinitionIndex = 13531;

class Class_1_6B253281269AA4E1 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_MPCODIGIBGL()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B253281269AA4E1_TypeDefinitionIndex)->GetStaticField(0x176A0);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*>** StaticGet_EHNHPCGDOIO()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B253281269AA4E1_TypeDefinitionIndex)->GetStaticField(0x176A8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_JHPLPOEEIFE()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B253281269AA4E1_TypeDefinitionIndex)->GetStaticField(0x176B0);
	}
	static ::System::Byte* StaticGet_GDMLAIBCKIP()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B253281269AA4E1_TypeDefinitionIndex)->GetStaticField(0x8C80);
	}
	static ::System::Boolean* StaticGet_AHBLLGCADBB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_6B253281269AA4E1_TypeDefinitionIndex)->GetStaticField(0x8C81);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*>* Method_1_59501112C3D2AACD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_59501112C3D2AACD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*> Method_1_5E9B66AAFAE5ACF2()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightStageNodeDisplayConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_5E9B66AAFAE5ACF2_OFFSET))();
	}

	static ::RPG::GameCore::GridFightStageNodeDisplayConfigRow* Method_1_0B2F5A228C5DD862(::RPG::GameCore::GridFightNodeType a1)
	{
		return ((::RPG::GameCore::GridFightStageNodeDisplayConfigRow*(*)(::RPG::GameCore::GridFightNodeType))((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_0B2F5A228C5DD862_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_99C4F2FD3BD86F83(::RPG::GameCore::GridFightStageNodeDisplayConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightStageNodeDisplayConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_6B253281269AA4E1_METHOD_1_99C4F2FD3BD86F83_OFFSET))(a1);
	}
};
