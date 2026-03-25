#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightCombinationBonusConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_9B06FD325C9954D3_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x170C2B40)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_2C9DB4C6E3049AA5_OFFSET UNITYSDK_OFFSET(0x170C2750)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x170C2960)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x170C22F0)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_9529C70308856A50_OFFSET UNITYSDK_OFFSET(0x170C25A0)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x170C2A00)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_BCAE587BC91413E1_OFFSET UNITYSDK_OFFSET(0x170C2B90)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_C144420A46058083_OFFSET UNITYSDK_OFFSET(0x170C2270)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x170C2540)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x170C2920)
#define CLASS_1_9B06FD325C9954D3_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x170C2AA0)
#define CLASS_1_9B06FD325C9954D3__CCTOR_OFFSET UNITYSDK_OFFSET(0x170C2EF0)

inline static constexpr unsigned int Class_1_9B06FD325C9954D3_TypeDefinitionIndex = 12263;

class Class_1_9B06FD325C9954D3 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B06FD325C9954D3_TypeDefinitionIndex)->GetStaticField(0x18A20);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B06FD325C9954D3_TypeDefinitionIndex)->GetStaticField(0x18A28);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B06FD325C9954D3_TypeDefinitionIndex)->GetStaticField(0x18A30);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B06FD325C9954D3_TypeDefinitionIndex)->GetStaticField(0x7030);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_9B06FD325C9954D3_TypeDefinitionIndex)->GetStaticField(0x7031);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>* Method_1_C144420A46058083()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_C144420A46058083_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*> Method_1_9529C70308856A50()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCombinationBonusConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_9529C70308856A50_OFFSET))();
	}

	static ::RPG::GameCore::GridFightCombinationBonusConfigRow* Method_1_2C9DB4C6E3049AA5(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::GridFightCombinationBonusConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_2C9DB4C6E3049AA5_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_BCAE587BC91413E1(::RPG::GameCore::GridFightCombinationBonusConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCombinationBonusConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_9B06FD325C9954D3_METHOD_1_BCAE587BC91413E1_OFFSET))(a1);
	}
};
