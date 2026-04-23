#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class PlayerReturnLoginRewardRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_08649C2797B37F9D_OFFSET UNITYSDK_OFFSET(0x18D9BA90)
#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_19920D3D2B9D50F4_OFFSET UNITYSDK_OFFSET(0x18D9BAE0)
#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x18D9B8B0)
#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_492868D068210638_OFFSET UNITYSDK_OFFSET(0x18D9B1C0)
#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x18D9B240)
#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x18D9B950)
#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x18D9B490)
#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_D2BAB8548DC15B2D_OFFSET UNITYSDK_OFFSET(0x18D9B4F0)
#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x18D9B870)
#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x18D9B9F0)
#define CLASS_1_3E657FE8FD5B6B24_METHOD_1_FE356889BEA93B86_OFFSET UNITYSDK_OFFSET(0x18D9B6A0)
#define CLASS_1_3E657FE8FD5B6B24__CCTOR_OFFSET UNITYSDK_OFFSET(0x18D9BE40)

inline static constexpr unsigned int Class_1_3E657FE8FD5B6B24_TypeDefinitionIndex = 13735;

class Class_1_3E657FE8FD5B6B24 : public ::System::Object
{
public:
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E657FE8FD5B6B24_TypeDefinitionIndex)->GetStaticField(0x26F70);
	}
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E657FE8FD5B6B24_TypeDefinitionIndex)->GetStaticField(0x26F78);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E657FE8FD5B6B24_TypeDefinitionIndex)->GetStaticField(0x26F80);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E657FE8FD5B6B24_TypeDefinitionIndex)->GetStaticField(0xA4F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_3E657FE8FD5B6B24_TypeDefinitionIndex)->GetStaticField(0xA4F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*>* Method_1_492868D068210638()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_492868D068210638_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*> Method_1_D2BAB8548DC15B2D()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PlayerReturnLoginRewardRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_D2BAB8548DC15B2D_OFFSET))();
	}

	static ::RPG::GameCore::PlayerReturnLoginRewardRow* Method_1_FE356889BEA93B86(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::PlayerReturnLoginRewardRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_FE356889BEA93B86_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_08649C2797B37F9D(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_08649C2797B37F9D_OFFSET))(a1);
	}

	static ::System::Void Method_1_19920D3D2B9D50F4(::RPG::GameCore::PlayerReturnLoginRewardRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::PlayerReturnLoginRewardRow*))((::PBYTE)hIl2Cpp + CLASS_1_3E657FE8FD5B6B24_METHOD_1_19920D3D2B9D50F4_OFFSET))(a1);
	}
};
