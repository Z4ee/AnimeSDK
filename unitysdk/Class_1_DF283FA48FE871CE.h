#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightOldRoleConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_DF283FA48FE871CE_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18BBBDA0)
#define CLASS_1_DF283FA48FE871CE_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18BBBBC0)
#define CLASS_1_DF283FA48FE871CE_METHOD_1_47E8E562338D0F47_OFFSET UNITYSDK_OFFSET(0x18BBB7C0)
#define CLASS_1_DF283FA48FE871CE_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18BBB510)
#define CLASS_1_DF283FA48FE871CE_METHOD_1_85F0A917E234A26E_OFFSET UNITYSDK_OFFSET(0x18BBB490)
#define CLASS_1_DF283FA48FE871CE_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18BBBC60)
#define CLASS_1_DF283FA48FE871CE_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18BBB760)
#define CLASS_1_DF283FA48FE871CE_METHOD_1_E844919B4F631966_OFFSET UNITYSDK_OFFSET(0x18BBB970)
#define CLASS_1_DF283FA48FE871CE_METHOD_1_EDC79C02492DA9DA_OFFSET UNITYSDK_OFFSET(0x18BBBDF0)
#define CLASS_1_DF283FA48FE871CE_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18BBBB80)
#define CLASS_1_DF283FA48FE871CE_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18BBBD00)
#define CLASS_1_DF283FA48FE871CE__CCTOR_OFFSET UNITYSDK_OFFSET(0x18BBC1A0)

inline static constexpr unsigned int Class_1_DF283FA48FE871CE_TypeDefinitionIndex = 12834;

class Class_1_DF283FA48FE871CE : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF283FA48FE871CE_TypeDefinitionIndex)->GetStaticField(0x24FD0);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF283FA48FE871CE_TypeDefinitionIndex)->GetStaticField(0x24FD8);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF283FA48FE871CE_TypeDefinitionIndex)->GetStaticField(0x24FE0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF283FA48FE871CE_TypeDefinitionIndex)->GetStaticField(0x9B20);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_DF283FA48FE871CE_TypeDefinitionIndex)->GetStaticField(0x9B21);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*>* Method_1_85F0A917E234A26E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_85F0A917E234A26E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*> Method_1_47E8E562338D0F47()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightOldRoleConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_47E8E562338D0F47_OFFSET))();
	}

	static ::RPG::GameCore::GridFightOldRoleConfigRow* Method_1_E844919B4F631966(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::RPG::GameCore::GridFightOldRoleConfigRow*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_E844919B4F631966_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_EDC79C02492DA9DA(::RPG::GameCore::GridFightOldRoleConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightOldRoleConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_DF283FA48FE871CE_METHOD_1_EDC79C02492DA9DA_OFFSET))(a1);
	}
};
