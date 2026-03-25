#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class ChimeraMotionRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_73F7FDF533DAEE10_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x179CB4B0)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x179CB2D0)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_401A12C1CE409994_OFFSET UNITYSDK_OFFSET(0x179CB500)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_58CCC4F8817DFDD6_OFFSET UNITYSDK_OFFSET(0x179CB0C0)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x179CAC60)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_922E25619639B027_OFFSET UNITYSDK_OFFSET(0x179CAF10)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_A5ABE3EA0B1CE172_OFFSET UNITYSDK_OFFSET(0x179CABE0)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x179CB370)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x179CAEB0)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x179CB290)
#define CLASS_1_73F7FDF533DAEE10_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x179CB410)
#define CLASS_1_73F7FDF533DAEE10__CCTOR_OFFSET UNITYSDK_OFFSET(0x179CB860)

inline static constexpr unsigned int Class_1_73F7FDF533DAEE10_TypeDefinitionIndex = 11890;

class Class_1_73F7FDF533DAEE10 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F7FDF533DAEE10_TypeDefinitionIndex)->GetStaticField(0x26790);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F7FDF533DAEE10_TypeDefinitionIndex)->GetStaticField(0x26798);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F7FDF533DAEE10_TypeDefinitionIndex)->GetStaticField(0x267A0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F7FDF533DAEE10_TypeDefinitionIndex)->GetStaticField(0xC8D0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_73F7FDF533DAEE10_TypeDefinitionIndex)->GetStaticField(0xC8D1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>* Method_1_A5ABE3EA0B1CE172()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_A5ABE3EA0B1CE172_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*> Method_1_922E25619639B027()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::ChimeraMotionRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_922E25619639B027_OFFSET))();
	}

	static ::RPG::GameCore::ChimeraMotionRow* Method_1_58CCC4F8817DFDD6(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::ChimeraMotionRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_58CCC4F8817DFDD6_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_401A12C1CE409994(::RPG::GameCore::ChimeraMotionRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::ChimeraMotionRow*))((::PBYTE)hIl2Cpp + CLASS_1_73F7FDF533DAEE10_METHOD_1_401A12C1CE409994_OFFSET))(a1);
	}
};
