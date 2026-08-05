#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriManaMovieMaterial.h"

namespace System { class String; }

#define MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_CLEARPLAYINFO_OFFSET UNITYSDK_OFFSET(0x16276AD0)
#define MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_GET_FILEURL_OFFSET UNITYSDK_OFFSET(0x16276A60)
#define MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_GET_ISMONOBEHAVIOURSTARTCALLED_OFFSET UNITYSDK_OFFSET(0x16276AC0)
#define MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_GET_VIDEOHEIGHT_OFFSET UNITYSDK_OFFSET(0x16276AA0)
#define MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_GET_VIDEOWIDTH_OFFSET UNITYSDK_OFFSET(0x16276A80)
#define MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_SET_FILEURL_OFFSET UNITYSDK_OFFSET(0x16276A70)
#define MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_SET_VIDEOHEIGHT_OFFSET UNITYSDK_OFFSET(0x16276AB0)
#define MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_SET_VIDEOWIDTH_OFFSET UNITYSDK_OFFSET(0x16276A90)
#define MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP__CTOR_OFFSET UNITYSDK_OFFSET(0x16276B20)

namespace MoleMole
{
	inline static constexpr unsigned int CriManaMovieControllerForNap_TypeDefinitionIndex = 47158;

	class CriManaMovieControllerForNap : public ::CriWare::CriManaMovieMaterial
	{
	public:
		::System::String* Field_8_1; // 0x98
		::System::UInt32 Field_8_0; // 0xA0
		::System::UInt32 Field_8_7; // 0xA4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP__CTOR_OFFSET))(this);
		}

		::System::String* get_FileUrl()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_GET_FILEURL_OFFSET))(this);
		}

		::System::Void set_FileUrl(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_SET_FILEURL_OFFSET))(this, a1);
		}

		::System::UInt32 get_VideoWidth()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_GET_VIDEOWIDTH_OFFSET))(this);
		}

		::System::Void set_VideoWidth(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_SET_VIDEOWIDTH_OFFSET))(this, a1);
		}

		::System::UInt32 get_VideoHeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_GET_VIDEOHEIGHT_OFFSET))(this);
		}

		::System::Void set_VideoHeight(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_SET_VIDEOHEIGHT_OFFSET))(this, a1);
		}

		::System::Boolean get_IsMonoBehaviourStartCalled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_GET_ISMONOBEHAVIOURSTARTCALLED_OFFSET))(this);
		}

		::System::Void ClearPlayInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CRIMANAMOVIECONTROLLERFORNAP_CLEARPLAYINFO_OFFSET))(this);
		}
	};
}
