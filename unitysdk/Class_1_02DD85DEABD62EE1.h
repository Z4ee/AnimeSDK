#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class RogueDLCAeonCabinetRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_02DD85DEABD62EE1_METHOD_1_08164A05B6931DCA_OFFSET UNITYSDK_OFFSET(0x1AF0ACE0)
#define CLASS_1_02DD85DEABD62EE1_METHOD_1_0BCFEDF16A5EAFBD_OFFSET UNITYSDK_OFFSET(0x1AF0A4F0)
#define CLASS_1_02DD85DEABD62EE1_METHOD_1_0C7CBCE710B3F112_OFFSET UNITYSDK_OFFSET(0x1AF0AC90)
#define CLASS_1_02DD85DEABD62EE1_METHOD_1_29090EDDD2632508_OFFSET UNITYSDK_OFFSET(0x1AF0A930)
#define CLASS_1_02DD85DEABD62EE1_METHOD_1_783B98CB235B8D9F_OFFSET UNITYSDK_OFFSET(0x1AF0A800)
#define CLASS_1_02DD85DEABD62EE1_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1AF0AAC0)
#define CLASS_1_02DD85DEABD62EE1_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1AF0AB50)
#define CLASS_1_02DD85DEABD62EE1_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1AF0A7A0)
#define CLASS_1_02DD85DEABD62EE1_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1AF0A570)
#define CLASS_1_02DD85DEABD62EE1_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1AF0AA80)
#define CLASS_1_02DD85DEABD62EE1_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1AF0ABF0)
#define CLASS_1_02DD85DEABD62EE1__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF0B000)

inline static constexpr unsigned int Class_1_02DD85DEABD62EE1_TypeDefinitionIndex = 14169;

class Class_1_02DD85DEABD62EE1 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02DD85DEABD62EE1_TypeDefinitionIndex)->GetStaticField(0x3EA0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02DD85DEABD62EE1_TypeDefinitionIndex)->GetStaticField(0x3EA8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_02DD85DEABD62EE1_TypeDefinitionIndex)->GetStaticField(0x3EB0);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_02DD85DEABD62EE1_TypeDefinitionIndex)->GetStaticField(0x2910);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_02DD85DEABD62EE1_TypeDefinitionIndex)->GetStaticField(0x2911);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>* Method_1_0BCFEDF16A5EAFBD()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_0BCFEDF16A5EAFBD_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*> Method_1_783B98CB235B8D9F()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::RogueDLCAeonCabinetRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_783B98CB235B8D9F_OFFSET))();
	}

	static ::RPG::GameCore::RogueDLCAeonCabinetRow* Method_1_29090EDDD2632508(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::RogueDLCAeonCabinetRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_29090EDDD2632508_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_0C7CBCE710B3F112(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_0C7CBCE710B3F112_OFFSET))(a1);
	}

	static ::System::Void Method_1_08164A05B6931DCA(::RPG::GameCore::RogueDLCAeonCabinetRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::RogueDLCAeonCabinetRow*))((::PBYTE)hIl2Cpp + CLASS_1_02DD85DEABD62EE1_METHOD_1_08164A05B6931DCA_OFFSET))(a1);
	}
};
