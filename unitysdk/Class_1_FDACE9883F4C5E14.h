#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class SwordTrainingUnlockRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_FDACE9883F4C5E14_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1896E1E0)
#define CLASS_1_FDACE9883F4C5E14_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x1896E000)
#define CLASS_1_FDACE9883F4C5E14_METHOD_1_323720F6545D3576_OFFSET UNITYSDK_OFFSET(0x1896DDF0)
#define CLASS_1_FDACE9883F4C5E14_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1896D990)
#define CLASS_1_FDACE9883F4C5E14_METHOD_1_832EEF76B4DF8BBD_OFFSET UNITYSDK_OFFSET(0x1896DC40)
#define CLASS_1_FDACE9883F4C5E14_METHOD_1_A2DCE0579B454448_OFFSET UNITYSDK_OFFSET(0x1896D910)
#define CLASS_1_FDACE9883F4C5E14_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1896E0A0)
#define CLASS_1_FDACE9883F4C5E14_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1896DBE0)
#define CLASS_1_FDACE9883F4C5E14_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1896DFC0)
#define CLASS_1_FDACE9883F4C5E14_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1896E140)
#define CLASS_1_FDACE9883F4C5E14_METHOD_1_FE156C5B470A4D24_OFFSET UNITYSDK_OFFSET(0x1896E230)
#define CLASS_1_FDACE9883F4C5E14__CCTOR_OFFSET UNITYSDK_OFFSET(0x1896E590)

inline static constexpr unsigned int Class_1_FDACE9883F4C5E14_TypeDefinitionIndex = 11791;

class Class_1_FDACE9883F4C5E14 : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDACE9883F4C5E14_TypeDefinitionIndex)->GetStaticField(0x20E70);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDACE9883F4C5E14_TypeDefinitionIndex)->GetStaticField(0x20E78);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDACE9883F4C5E14_TypeDefinitionIndex)->GetStaticField(0x20E80);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDACE9883F4C5E14_TypeDefinitionIndex)->GetStaticField(0x8080);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_FDACE9883F4C5E14_TypeDefinitionIndex)->GetStaticField(0x8081);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*>* Method_1_A2DCE0579B454448()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_A2DCE0579B454448_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*> Method_1_832EEF76B4DF8BBD()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::SwordTrainingUnlockRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_832EEF76B4DF8BBD_OFFSET))();
	}

	static ::RPG::GameCore::SwordTrainingUnlockRow* Method_1_323720F6545D3576(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::SwordTrainingUnlockRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_323720F6545D3576_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_FE156C5B470A4D24(::RPG::GameCore::SwordTrainingUnlockRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::SwordTrainingUnlockRow*))((::PBYTE)hIl2Cpp + CLASS_1_FDACE9883F4C5E14_METHOD_1_FE156C5B470A4D24_OFFSET))(a1);
	}
};
