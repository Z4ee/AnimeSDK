#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class AvatarUltraSkillConfigRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_11FCF7E9F4950A62_OFFSET UNITYSDK_OFFSET(0x195ABB20)
#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x195ABAD0)
#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_4956B91163F01720_OFFSET UNITYSDK_OFFSET(0x195AB600)
#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0x195AB900)
#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x195AB990)
#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x195AB5A0)
#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_CE57377B9D2B4AC0_OFFSET UNITYSDK_OFFSET(0x195AB770)
#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x195AB370)
#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x195AB8C0)
#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x195ABA30)
#define CLASS_1_5D1D287B1D1F9F73_METHOD_1_FDC1914EE6774323_OFFSET UNITYSDK_OFFSET(0x195AB2F0)
#define CLASS_1_5D1D287B1D1F9F73__CCTOR_OFFSET UNITYSDK_OFFSET(0x195ABE40)

inline static constexpr unsigned int Class_1_5D1D287B1D1F9F73_TypeDefinitionIndex = 12133;

class Class_1_5D1D287B1D1F9F73 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D1D287B1D1F9F73_TypeDefinitionIndex)->GetStaticField(0x43910);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_1()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D1D287B1D1F9F73_TypeDefinitionIndex)->GetStaticField(0x43918);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_2()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D1D287B1D1F9F73_TypeDefinitionIndex)->GetStaticField(0x43920);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D1D287B1D1F9F73_TypeDefinitionIndex)->GetStaticField(0xBFD0);
	}
	static ::System::Byte* StaticGet_Field_1_4()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_5D1D287B1D1F9F73_TypeDefinitionIndex)->GetStaticField(0xBFD1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*>* Method_1_FDC1914EE6774323()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_FDC1914EE6774323_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*> Method_1_4956B91163F01720()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::AvatarUltraSkillConfigRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_4956B91163F01720_OFFSET))();
	}

	static ::RPG::GameCore::AvatarUltraSkillConfigRow* Method_1_CE57377B9D2B4AC0(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::AvatarUltraSkillConfigRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_CE57377B9D2B4AC0_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_DE52BD42C4B0B772_OFFSET))();
	}

	static ::System::Void Method_1_89D1F247B9D324EE()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_89D1F247B9D324EE_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_11FCF7E9F4950A62(::RPG::GameCore::AvatarUltraSkillConfigRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::AvatarUltraSkillConfigRow*))((::PBYTE)hIl2Cpp + CLASS_1_5D1D287B1D1F9F73_METHOD_1_11FCF7E9F4950A62_OFFSET))(a1);
	}
};
