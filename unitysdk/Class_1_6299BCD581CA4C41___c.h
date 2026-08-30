#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_96;
namespace RPG::Client { class AudioBundleInfoItem; }
namespace RPG::Client { class VideoBundleInfoItem; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define CLASS_1_6299BCD581CA4C41___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xB7E4810)
#define CLASS_1_6299BCD581CA4C41___C__CTOR_OFFSET UNITYSDK_OFFSET(0xB7E4850)
#define CLASS_1_6299BCD581CA4C41___C__GETNEEDDOWNLOADAUDIOSIZE_B__43_0_OFFSET UNITYSDK_OFFSET(0xB7E48A0)
#define CLASS_1_6299BCD581CA4C41___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_0_OFFSET UNITYSDK_OFFSET(0xB7E4860)
#define CLASS_1_6299BCD581CA4C41___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_1_OFFSET UNITYSDK_OFFSET(0xB7E4880)
#define CLASS_1_6299BCD581CA4C41___C__GETNEEDDOWNLOADVIDEOSIZE_B__44_0_OFFSET UNITYSDK_OFFSET(0xB7E48C0)
#define CLASS_1_6299BCD581CA4C41___C___SAVEVIDEOLIST_B__58_0_OFFSET UNITYSDK_OFFSET(0xB7E48E0)

inline static constexpr unsigned int Class_1_6299BCD581CA4C41___c_TypeDefinitionIndex = 59765;

class Class_1_6299BCD581CA4C41___c : public ::System::Object
{
public:
	static ::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>** StaticGet___9__23_1()
	{
		return (::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41___c_TypeDefinitionIndex)->GetStaticField(0x49570);
	}
	static ::Class_1_6299BCD581CA4C41___c** StaticGet___9()
	{
		return (::Class_1_6299BCD581CA4C41___c**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41___c_TypeDefinitionIndex)->GetStaticField(0x49578);
	}
	static ::System::Func_2<::Class_0_16E4307DCC419505_96*, ::System::String*>** StaticGet___9__58_0()
	{
		return (::System::Func_2<::Class_0_16E4307DCC419505_96*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41___c_TypeDefinitionIndex)->GetStaticField(0x49580);
	}
	static ::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>** StaticGet___9__43_0()
	{
		return (::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41___c_TypeDefinitionIndex)->GetStaticField(0x49588);
	}
	static ::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>** StaticGet___9__44_0()
	{
		return (::System::Func_2<::RPG::Client::VideoBundleInfoItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41___c_TypeDefinitionIndex)->GetStaticField(0x49590);
	}
	static ::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>** StaticGet___9__23_0()
	{
		return (::System::Func_2<::RPG::Client::AudioBundleInfoItem*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_6299BCD581CA4C41___c_TypeDefinitionIndex)->GetStaticField(0x49598);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__CTOR_OFFSET))(this);
	}

	::System::String* _GetNeedDownloadSizeForWhiteList_b__23_0(::RPG::Client::AudioBundleInfoItem* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_0_OFFSET))(this, a1);
	}

	::System::String* _GetNeedDownloadSizeForWhiteList_b__23_1(::RPG::Client::VideoBundleInfoItem* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::VideoBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__GETNEEDDOWNLOADSIZEFORWHITELIST_B__23_1_OFFSET))(this, a1);
	}

	::System::String* _GetNeedDownloadAudioSize_b__43_0(::RPG::Client::AudioBundleInfoItem* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::AudioBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__GETNEEDDOWNLOADAUDIOSIZE_B__43_0_OFFSET))(this, a1);
	}

	::System::String* _GetNeedDownloadVideoSize_b__44_0(::RPG::Client::VideoBundleInfoItem* a1)
	{
		return ((::System::String*(*)(::PVOID, ::RPG::Client::VideoBundleInfoItem*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C__GETNEEDDOWNLOADVIDEOSIZE_B__44_0_OFFSET))(this, a1);
	}

	::System::String* __SaveVideoList_b__58_0(::Class_0_16E4307DCC419505_96* a1)
	{
		return ((::System::String*(*)(::PVOID, ::Class_0_16E4307DCC419505_96*))((::PBYTE)hIl2Cpp + CLASS_1_6299BCD581CA4C41___C___SAVEVIDEOLIST_B__58_0_OFFSET))(this, a1);
	}
};
