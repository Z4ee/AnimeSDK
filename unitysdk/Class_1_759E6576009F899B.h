#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class IdleLiveAvatarRarityRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_759E6576009F899B_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x1B3C2610)
#define CLASS_1_759E6576009F899B_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x1B3C2440)
#define CLASS_1_759E6576009F899B_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x1B3C24D0)
#define CLASS_1_759E6576009F899B_METHOD_1_BE3105158AC6D44B_OFFSET UNITYSDK_OFFSET(0x1B3C1DF0)
#define CLASS_1_759E6576009F899B_METHOD_1_BFA3D781D69488C8_OFFSET UNITYSDK_OFFSET(0x1B3C2100)
#define CLASS_1_759E6576009F899B_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x1B3C20A0)
#define CLASS_1_759E6576009F899B_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x1B3C1E70)
#define CLASS_1_759E6576009F899B_METHOD_1_EB7AC53C2F247239_OFFSET UNITYSDK_OFFSET(0x1B3C2660)
#define CLASS_1_759E6576009F899B_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x1B3C2400)
#define CLASS_1_759E6576009F899B_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x1B3C2570)
#define CLASS_1_759E6576009F899B_METHOD_1_FD2C76AD1502D27A_OFFSET UNITYSDK_OFFSET(0x1B3C2270)
#define CLASS_1_759E6576009F899B__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3C29D0)

inline static constexpr unsigned int Class_1_759E6576009F899B_TypeDefinitionIndex = 11311;

class Class_1_759E6576009F899B : public ::System::Object
{
public:
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_0()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_759E6576009F899B_TypeDefinitionIndex)->GetStaticField(0x45B30);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_759E6576009F899B_TypeDefinitionIndex)->GetStaticField(0x45B38);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>** StaticGet_Field_1_2()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_759E6576009F899B_TypeDefinitionIndex)->GetStaticField(0x45B40);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_759E6576009F899B_TypeDefinitionIndex)->GetStaticField(0xC4E0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_759E6576009F899B_TypeDefinitionIndex)->GetStaticField(0xC4E1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>* Method_1_BE3105158AC6D44B()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_BE3105158AC6D44B_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*> Method_1_BFA3D781D69488C8()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::IdleLiveAvatarRarityRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_BFA3D781D69488C8_OFFSET))();
	}

	static ::RPG::GameCore::IdleLiveAvatarRarityRow* Method_1_FD2C76AD1502D27A(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::IdleLiveAvatarRarityRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_FD2C76AD1502D27A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_EB7AC53C2F247239(::RPG::GameCore::IdleLiveAvatarRarityRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::IdleLiveAvatarRarityRow*))((::PBYTE)hIl2Cpp + CLASS_1_759E6576009F899B_METHOD_1_EB7AC53C2F247239_OFFSET))(a1);
	}
};
