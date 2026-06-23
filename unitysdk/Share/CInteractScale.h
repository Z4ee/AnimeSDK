#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHARE_CINTERACTSCALE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DAA4ED0)
#define SHARE_CINTERACTSCALE_GET_R_OFFSET UNITYSDK_OFFSET(0x1DAA4B30)
#define SHARE_CINTERACTSCALE_GET_W_OFFSET UNITYSDK_OFFSET(0x1DAA4B10)
#define SHARE_CINTERACTSCALE_GET_X_OFFSET UNITYSDK_OFFSET(0x1DAA4AB0)
#define SHARE_CINTERACTSCALE_GET_Y_OFFSET UNITYSDK_OFFSET(0x1DAA4AD0)
#define SHARE_CINTERACTSCALE_GET_Z_OFFSET UNITYSDK_OFFSET(0x1DAA4AF0)
#define SHARE_CINTERACTSCALE_SET_R_OFFSET UNITYSDK_OFFSET(0x1DAA4B40)
#define SHARE_CINTERACTSCALE_SET_W_OFFSET UNITYSDK_OFFSET(0x1DAA4B20)
#define SHARE_CINTERACTSCALE_SET_X_OFFSET UNITYSDK_OFFSET(0x1DAA4AC0)
#define SHARE_CINTERACTSCALE_SET_Y_OFFSET UNITYSDK_OFFSET(0x1DAA4AE0)
#define SHARE_CINTERACTSCALE_SET_Z_OFFSET UNITYSDK_OFFSET(0x1DAA4B00)
#define SHARE_CINTERACTSCALE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DAA4B50)
#define SHARE_CINTERACTSCALE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA4EF0)

namespace Share
{
	inline static constexpr unsigned int CInteractScale_TypeDefinitionIndex = 11302;

	class CInteractScale : public ::System::Object
	{
	public:
		::System::Double m_W; // 0x10
		::System::Double m_Y; // 0x18
		::System::Double m_X; // 0x20
		::System::Double m_Z; // 0x28
		::System::Double m_R; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE__CTOR_OFFSET))(this);
		}

		::System::Double get_X()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_SET_X_OFFSET))(this, value);
		}

		::System::Double get_Y()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_SET_Y_OFFSET))(this, value);
		}

		::System::Double get_Z()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_GET_Z_OFFSET))(this);
		}

		::System::Void set_Z(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_SET_Z_OFFSET))(this, value);
		}

		::System::Double get_W()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_GET_W_OFFSET))(this);
		}

		::System::Void set_W(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_SET_W_OFFSET))(this, value);
		}

		::System::Double get_R()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_GET_R_OFFSET))(this);
		}

		::System::Void set_R(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_SET_R_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CINTERACTSCALE_CLEAR_OFFSET))(this);
		}
	};
}
