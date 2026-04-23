#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class MusicRhythmPresetSongRow; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_007A95301D61C197_OFFSET UNITYSDK_OFFSET(0x183CE100)
#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_13696A527CD9CA86_OFFSET UNITYSDK_OFFSET(0x183CE650)
#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x183CE470)
#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_3C57A93F68642313_OFFSET UNITYSDK_OFFSET(0x183CE6A0)
#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x183CDE50)
#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_70830D3F4420F88D_OFFSET UNITYSDK_OFFSET(0x183CE2B0)
#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_AD31DD9682084C83_OFFSET UNITYSDK_OFFSET(0x183CE510)
#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0x183CE0A0)
#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_EFED30E37F6D4BAE_OFFSET UNITYSDK_OFFSET(0x183CDDD0)
#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_F0E307B84478A272_OFFSET UNITYSDK_OFFSET(0x183CE430)
#define CLASS_1_D8D9E8475B9CAE6E_METHOD_1_F2E1599CBB58B20F_OFFSET UNITYSDK_OFFSET(0x183CE5B0)
#define CLASS_1_D8D9E8475B9CAE6E__CCTOR_OFFSET UNITYSDK_OFFSET(0x183CE9B0)

inline static constexpr unsigned int Class_1_D8D9E8475B9CAE6E_TypeDefinitionIndex = 13533;

class Class_1_D8D9E8475B9CAE6E : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8D9E8475B9CAE6E_TypeDefinitionIndex)->GetStaticField(0x23D70);
	}
	static ::Il2CppArray<::System::String*>** StaticGet_Field_1_4()
	{
		return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8D9E8475B9CAE6E_TypeDefinitionIndex)->GetStaticField(0x23D78);
	}
	static ::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>** StaticGet_Field_1_3()
	{
		return (::System::Action_1<::Class_1_7A22A3DBEEDD1F80*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8D9E8475B9CAE6E_TypeDefinitionIndex)->GetStaticField(0x23D80);
	}
	static ::System::Boolean* StaticGet_Field_1_1()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8D9E8475B9CAE6E_TypeDefinitionIndex)->GetStaticField(0x93F0);
	}
	static ::System::Byte* StaticGet_Field_1_2()
	{
		return (::System::Byte*)Il2CppClass::FromTypeDefinitionIndex(Class_1_D8D9E8475B9CAE6E_TypeDefinitionIndex)->GetStaticField(0x93F1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>* Method_1_EFED30E37F6D4BAE()
	{
		return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>*(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_EFED30E37F6D4BAE_OFFSET))();
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_CE34EA208837238D_OFFSET))();
	}

	static ::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*> Method_1_007A95301D61C197()
	{
		return ((::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::MusicRhythmPresetSongRow*>(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_007A95301D61C197_OFFSET))();
	}

	static ::RPG::GameCore::MusicRhythmPresetSongRow* Method_1_70830D3F4420F88D(::System::UInt32 a1)
	{
		return ((::RPG::GameCore::MusicRhythmPresetSongRow*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_70830D3F4420F88D_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_F0E307B84478A272()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_F0E307B84478A272_OFFSET))();
	}

	static ::System::Void Method_1_6B72D4EE8C6E907F()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_6B72D4EE8C6E907F_OFFSET))();
	}

	static ::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_30D1209326FA87FC_OFFSET))();
	}

	static ::System::Void Method_1_AD31DD9682084C83(::System::String* a1)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_AD31DD9682084C83_OFFSET))(a1);
	}

	static ::System::Void Method_1_F2E1599CBB58B20F(::System::String* a1, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* a2, ::System::Boolean& a3)
	{
		return ((::System::Void(*)(::System::String*, ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*, ::System::Boolean&))((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_F2E1599CBB58B20F_OFFSET))(a1, a2, a3);
	}

	static ::System::Void Method_1_13696A527CD9CA86(::Class_1_7A22A3DBEEDD1F80* a1)
	{
		return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*))((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_13696A527CD9CA86_OFFSET))(a1);
	}

	static ::System::Void Method_1_3C57A93F68642313(::RPG::GameCore::MusicRhythmPresetSongRow* a1)
	{
		return ((::System::Void(*)(::RPG::GameCore::MusicRhythmPresetSongRow*))((::PBYTE)hIl2Cpp + CLASS_1_D8D9E8475B9CAE6E_METHOD_1_3C57A93F68642313_OFFSET))(a1);
	}
};
