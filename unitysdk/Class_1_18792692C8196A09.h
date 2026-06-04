#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class HeartDialDialogueRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_18792692C8196A09_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x18F63280)
#define CLASS_1_18792692C8196A09_METHOD_1_6407664FF9DF5765_OFFSET UNITYSDK_OFFSET(0x18F62AA0)
#define CLASS_1_18792692C8196A09_METHOD_1_7945C6DB71FD3600_OFFSET UNITYSDK_OFFSET(0x18F62EE0)
#define CLASS_1_18792692C8196A09_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x18F630B0)
#define CLASS_1_18792692C8196A09_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18F63140)
#define CLASS_1_18792692C8196A09_METHOD_1_AD4A2D9560DCBFE7_OFFSET UNITYSDK_OFFSET(0x18F62DB0)
#define CLASS_1_18792692C8196A09_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18F62D50)
#define CLASS_1_18792692C8196A09_METHOD_1_D39873F5725EDC02_OFFSET UNITYSDK_OFFSET(0x18F632D0)
#define CLASS_1_18792692C8196A09_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x18F62B20)
#define CLASS_1_18792692C8196A09_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18F63070)
#define CLASS_1_18792692C8196A09_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18F631E0)
#define CLASS_1_18792692C8196A09__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F635F0)

inline static constexpr unsigned int Class_1_18792692C8196A09_TypeDefinitionIndex = 13071;

class Class_1_18792692C8196A09 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18792692C8196A09_TypeDefinitionIndex)->GetStaticField(0x36130);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18792692C8196A09_TypeDefinitionIndex)->GetStaticField(0x36138);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_2()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_18792692C8196A09_TypeDefinitionIndex)->GetStaticField(0x36140);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18792692C8196A09_TypeDefinitionIndex)->GetStaticField(0xAC70);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_18792692C8196A09_TypeDefinitionIndex)->GetStaticField(0xAC71);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>* Method_1_6407664FF9DF5765()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_6407664FF9DF5765_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*> Method_1_AD4A2D9560DCBFE7()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::HeartDialDialogueRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_AD4A2D9560DCBFE7_OFFSET))();
	}

	static ::RPG::GameCore::HeartDialDialogueRow* Method_1_7945C6DB71FD3600(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::HeartDialDialogueRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_7945C6DB71FD3600_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_D39873F5725EDC02(::RPG::GameCore::HeartDialDialogueRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::HeartDialDialogueRow*))((::PBYTE)hIl2Cpp + CLASS_1_18792692C8196A09_METHOD_1_D39873F5725EDC02_OFFSET))(a1);
	}
};
