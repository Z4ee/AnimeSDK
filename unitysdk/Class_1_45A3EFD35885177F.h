#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PSTrophyGroupRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_45A3EFD35885177F_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18365B80)
#define CLASS_1_45A3EFD35885177F_METHOD_1_0DD887187CD67AB8_OFFSET UNITYSDK_OFFSET(0x183655E0)
#define CLASS_1_45A3EFD35885177F_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x183659A0)
#define CLASS_1_45A3EFD35885177F_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18365330)
#define CLASS_1_45A3EFD35885177F_METHOD_1_962C0FC31D5511AF_OFFSET UNITYSDK_OFFSET(0x183652B0)
#define CLASS_1_45A3EFD35885177F_METHOD_1_A5055F5862120461_OFFSET UNITYSDK_OFFSET(0x18365790)
#define CLASS_1_45A3EFD35885177F_METHOD_1_A573AB266E4E2215_OFFSET UNITYSDK_OFFSET(0x18365BD0)
#define CLASS_1_45A3EFD35885177F_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18365A40)
#define CLASS_1_45A3EFD35885177F_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18365580)
#define CLASS_1_45A3EFD35885177F_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18365960)
#define CLASS_1_45A3EFD35885177F_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18365AE0)
#define CLASS_1_45A3EFD35885177F__CCTOR_OFFSET UNITYSDK_OFFSET(0x18365F30)

inline static constexpr unsigned int Class_1_45A3EFD35885177F_TypeDefinitionIndex = 12362;

class Class_1_45A3EFD35885177F : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45A3EFD35885177F_TypeDefinitionIndex)->GetStaticField(0x2A6D0);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45A3EFD35885177F_TypeDefinitionIndex)->GetStaticField(0x2A6D8);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_45A3EFD35885177F_TypeDefinitionIndex)->GetStaticField(0x2A6E0);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_45A3EFD35885177F_TypeDefinitionIndex)->GetStaticField(0xB580);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_45A3EFD35885177F_TypeDefinitionIndex)->GetStaticField(0xB581);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*>* Method_1_962C0FC31D5511AF()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_962C0FC31D5511AF_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*> Method_1_0DD887187CD67AB8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PSTrophyGroupRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_0DD887187CD67AB8_OFFSET))();
	}

	static ::RPG::GameCore::PSTrophyGroupRow* Method_1_A5055F5862120461(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PSTrophyGroupRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_A5055F5862120461_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_A573AB266E4E2215(::RPG::GameCore::PSTrophyGroupRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PSTrophyGroupRow*))((::PBYTE)hIl2Cpp + CLASS_1_45A3EFD35885177F_METHOD_1_A573AB266E4E2215_OFFSET))(a1);
	}
};
