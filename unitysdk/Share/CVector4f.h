#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHARE_CVECTOR4F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C03C6B0)
#define SHARE_CVECTOR4F_GET_W_OFFSET UNITYSDK_OFFSET(0x1C03C3A0)
#define SHARE_CVECTOR4F_GET_X_OFFSET UNITYSDK_OFFSET(0x1C03C340)
#define SHARE_CVECTOR4F_GET_Y_OFFSET UNITYSDK_OFFSET(0x1C03C360)
#define SHARE_CVECTOR4F_GET_Z_OFFSET UNITYSDK_OFFSET(0x1C03C380)
#define SHARE_CVECTOR4F_SET_W_OFFSET UNITYSDK_OFFSET(0x1C03C3B0)
#define SHARE_CVECTOR4F_SET_X_OFFSET UNITYSDK_OFFSET(0x1C03C350)
#define SHARE_CVECTOR4F_SET_Y_OFFSET UNITYSDK_OFFSET(0x1C03C370)
#define SHARE_CVECTOR4F_SET_Z_OFFSET UNITYSDK_OFFSET(0x1C03C390)
#define SHARE_CVECTOR4F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1C03C3C0)
#define SHARE_CVECTOR4F__CTOR_OFFSET UNITYSDK_OFFSET(0x1C03C6C0)

namespace Share
{
	inline static constexpr unsigned int CVector4f_TypeDefinitionIndex = 14952;

	class CVector4f : public ::System::Object
	{
	public:
		::System::Double m_W; // 0x10
		::System::Double m_Z; // 0x18
		::System::Double m_Y; // 0x20
		::System::Double m_X; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F__CTOR_OFFSET))(this);
		}

		::System::Double get_X()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F_SET_X_OFFSET))(this, value);
		}

		::System::Double get_Y()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F_SET_Y_OFFSET))(this, value);
		}

		::System::Double get_Z()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F_GET_Z_OFFSET))(this);
		}

		::System::Void set_Z(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F_SET_Z_OFFSET))(this, value);
		}

		::System::Double get_W()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F_GET_W_OFFSET))(this);
		}

		::System::Void set_W(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F_SET_W_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR4F_CLEAR_OFFSET))(this);
		}
	};
}
