#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CriWare/CriDisposable.h"

namespace CriWare { class CriFsRequest_DoneDelegate; }
namespace System { class String; }

#define CRIWARE_CRIFSREQUEST_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1E661710)
#define CRIWARE_CRIFSREQUEST_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E661650)
#define CRIWARE_CRIFSREQUEST_DONE_OFFSET UNITYSDK_OFFSET(0x1E661730)
#define CRIWARE_CRIFSREQUEST_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E661C50)
#define CRIWARE_CRIFSREQUEST_GET_DONEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E6615D0)
#define CRIWARE_CRIFSREQUEST_GET_ERROR_OFFSET UNITYSDK_OFFSET(0x1E661610)
#define CRIWARE_CRIFSREQUEST_GET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1E661630)
#define CRIWARE_CRIFSREQUEST_GET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1E6615F0)
#define CRIWARE_CRIFSREQUEST_SET_DONEDELEGATE_OFFSET UNITYSDK_OFFSET(0x1E6615E0)
#define CRIWARE_CRIFSREQUEST_SET_ERROR_OFFSET UNITYSDK_OFFSET(0x1E661620)
#define CRIWARE_CRIFSREQUEST_SET_ISDISPOSED_OFFSET UNITYSDK_OFFSET(0x1E661640)
#define CRIWARE_CRIFSREQUEST_SET_ISDONE_OFFSET UNITYSDK_OFFSET(0x1E661600)
#define CRIWARE_CRIFSREQUEST_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E661720)
#define CRIWARE_CRIFSREQUEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1E661CD0)

namespace CriWare
{
	inline static constexpr unsigned int CriFsRequest_TypeDefinitionIndex = 34311;

	class CriFsRequest : public ::CriWare::CriDisposable
	{
	public:
		::System::String* _error_k__BackingField; // 0x20
		::CriWare::CriFsRequest_DoneDelegate* _doneDelegate_k__BackingField; // 0x28
		::System::Boolean _isDone_k__BackingField; // 0x30
		::System::Boolean _isDisposed_k__BackingField; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST__CTOR_OFFSET))(this);
		}

		::CriWare::CriFsRequest_DoneDelegate* get_doneDelegate()
		{
			return ((::CriWare::CriFsRequest_DoneDelegate*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_GET_DONEDELEGATE_OFFSET))(this);
		}

		::System::Void set_doneDelegate(::CriWare::CriFsRequest_DoneDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriFsRequest_DoneDelegate*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_SET_DONEDELEGATE_OFFSET))(this, value);
		}

		::System::Boolean get_isDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_GET_ISDONE_OFFSET))(this);
		}

		::System::Void set_isDone(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_SET_ISDONE_OFFSET))(this, value);
		}

		::System::String* get_error()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_GET_ERROR_OFFSET))(this);
		}

		::System::Void set_error(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_SET_ERROR_OFFSET))(this, value);
		}

		::System::Boolean get_isDisposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_GET_ISDISPOSED_OFFSET))(this);
		}

		::System::Void set_isDisposed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_SET_ISDISPOSED_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_UPDATE_OFFSET))(this);
		}

		::System::Void Done()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_DONE_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIFSREQUEST_FINALIZE_OFFSET))(this);
		}
	};
}
