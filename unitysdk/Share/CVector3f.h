#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHARE_CVECTOR3F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C03C320)
#define SHARE_CVECTOR3F_GET_X_OFFSET UNITYSDK_OFFSET(0x1C03C060)
#define SHARE_CVECTOR3F_GET_Y_OFFSET UNITYSDK_OFFSET(0x1C03C080)
#define SHARE_CVECTOR3F_GET_Z_OFFSET UNITYSDK_OFFSET(0x1C03C0A0)
#define SHARE_CVECTOR3F_SET_X_OFFSET UNITYSDK_OFFSET(0x1C03C070)
#define SHARE_CVECTOR3F_SET_Y_OFFSET UNITYSDK_OFFSET(0x1C03C090)
#define SHARE_CVECTOR3F_SET_Z_OFFSET UNITYSDK_OFFSET(0x1C03C0B0)
#define SHARE_CVECTOR3F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C03C0C0)
#define SHARE_CVECTOR3F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C03C330)

namespace Share
{
	inline static constexpr unsigned int CVector3f_TypeDefinitionIndex = 13176;

	class CVector3f : public ::System::Object
	{
	public:
		::System::Double m_X; // 0x10
		::System::Double m_Y; // 0x18
		::System::Double m_Z; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR3F__CTOR_OFFSET))(this);
		}

		::System::Double get_X()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR3F_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CVECTOR3F_SET_X_OFFSET))(this, value);
		}

		::System::Double get_Y()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR3F_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CVECTOR3F_SET_Y_OFFSET))(this, value);
		}

		::System::Double get_Z()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR3F_GET_Z_OFFSET))(this);
		}

		::System::Void set_Z(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CVECTOR3F_SET_Z_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR3F_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR3F_CLEAR_OFFSET))(this);
		}
	};
}
