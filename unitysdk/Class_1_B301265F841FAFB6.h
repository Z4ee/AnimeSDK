#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightPlayerLevelConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_B301265F841FAFB6_METHOD_1_056C9CB380465F3B_OFFSET UNITYSDK_OFFSET(0x18316790)
#define CLASS_1_B301265F841FAFB6_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x18316D30)
#define CLASS_1_B301265F841FAFB6_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18316B50)
#define CLASS_1_B301265F841FAFB6_METHOD_1_3E8C6390B7EF8B6C_OFFSET UNITYSDK_OFFSET(0x18316940)
#define CLASS_1_B301265F841FAFB6_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x183164E0)
#define CLASS_1_B301265F841FAFB6_METHOD_1_A944A71FD3FA1612_OFFSET UNITYSDK_OFFSET(0x18316D80)
#define CLASS_1_B301265F841FAFB6_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18316BF0)
#define CLASS_1_B301265F841FAFB6_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18316730)
#define CLASS_1_B301265F841FAFB6_METHOD_1_D307C0ACEE6CB55E_OFFSET UNITYSDK_OFFSET(0x18316460)
#define CLASS_1_B301265F841FAFB6_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18316B10)
#define CLASS_1_B301265F841FAFB6_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18316C90)
#define CLASS_1_B301265F841FAFB6__CCTOR_OFFSET UNITYSDK_OFFSET(0x183170E0)

inline static constexpr unsigned int Class_1_B301265F841FAFB6_TypeDefinitionIndex = 12687;

class Class_1_B301265F841FAFB6 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B301265F841FAFB6_TypeDefinitionIndex)->GetStaticField(0x26430);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B301265F841FAFB6_TypeDefinitionIndex)->GetStaticField(0x26438);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_B301265F841FAFB6_TypeDefinitionIndex)->GetStaticField(0x26440);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B301265F841FAFB6_TypeDefinitionIndex)->GetStaticField(0xA140);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_B301265F841FAFB6_TypeDefinitionIndex)->GetStaticField(0xA141);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>* Method_1_D307C0ACEE6CB55E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_D307C0ACEE6CB55E_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*> Method_1_056C9CB380465F3B()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightPlayerLevelConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_056C9CB380465F3B_OFFSET))();
	}

	static ::RPG::GameCore::GridFightPlayerLevelConfigRow* Method_1_3E8C6390B7EF8B6C(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightPlayerLevelConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_3E8C6390B7EF8B6C_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_A944A71FD3FA1612(::RPG::GameCore::GridFightPlayerLevelConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightPlayerLevelConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_B301265F841FAFB6_METHOD_1_A944A71FD3FA1612_OFFSET))(a1);
	}
};
