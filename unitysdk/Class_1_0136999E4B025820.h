#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/RPG/GameCore/GridFightTraitSrcType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class GridFightCoreRoleChooseRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_0136999E4B025820_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x16B99EE0)
#define CLASS_1_0136999E4B025820_METHOD_1_2C6A79B84E8D2564_OFFSET UNITYSDK_OFFSET(0x16B99A70)
#define CLASS_1_0136999E4B025820_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x16B99D00)
#define CLASS_1_0136999E4B025820_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x16B99610)
#define CLASS_1_0136999E4B025820_METHOD_1_974FA65AEE66ABB9_OFFSET UNITYSDK_OFFSET(0x16B99590)
#define CLASS_1_0136999E4B025820_METHOD_1_99DFB5F72BB1D936_OFFSET UNITYSDK_OFFSET(0x16B998C0)
#define CLASS_1_0136999E4B025820_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x16B99DA0)
#define CLASS_1_0136999E4B025820_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x16B99860)
#define CLASS_1_0136999E4B025820_METHOD_1_CFC4D8252CD5A257_OFFSET UNITYSDK_OFFSET(0x16B99F30)
#define CLASS_1_0136999E4B025820_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x16B99CC0)
#define CLASS_1_0136999E4B025820_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x16B99E40)
#define CLASS_1_0136999E4B025820__CCTOR_OFFSET UNITYSDK_OFFSET(0x16B9A300)

inline static constexpr unsigned int Class_1_0136999E4B025820_TypeDefinitionIndex = 12527;

class Class_1_0136999E4B025820 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0136999E4B025820_TypeDefinitionIndex)->GetStaticField(0x2BB40);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0136999E4B025820_TypeDefinitionIndex)->GetStaticField(0x2BB48);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_0136999E4B025820_TypeDefinitionIndex)->GetStaticField(0x2BB50);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0136999E4B025820_TypeDefinitionIndex)->GetStaticField(0xE8C0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_0136999E4B025820_TypeDefinitionIndex)->GetStaticField(0xE8C1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>* Method_1_974FA65AEE66ABB9()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_974FA65AEE66ABB9_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*> Method_1_99DFB5F72BB1D936()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::GridFightCoreRoleChooseRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_99DFB5F72BB1D936_OFFSET))();
	}

	static ::RPG::GameCore::GridFightCoreRoleChooseRow* Method_1_2C6A79B84E8D2564(::System::UInt32 a1, ::RPG::GameCore::GridFightTraitSrcType a2, ::System::UInt32 a3)
	{
		return ((::RPG::GameCore::GridFightCoreRoleChooseRow*(*)(::System::UInt32, ::RPG::GameCore::GridFightTraitSrcType, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_2C6A79B84E8D2564_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_CFC4D8252CD5A257(::RPG::GameCore::GridFightCoreRoleChooseRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::GridFightCoreRoleChooseRow*))((::PBYTE)hIl2Cpp + CLASS_1_0136999E4B025820_METHOD_1_CFC4D8252CD5A257_OFFSET))(a1);
	}
};
