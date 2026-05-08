#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHARE_CVECTOR4F_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A9460C0)
#define SHARE_CVECTOR4F_GET_W_OFFSET UNITYSDK_OFFSET(0x1A945DB0)
#define SHARE_CVECTOR4F_GET_X_OFFSET UNITYSDK_OFFSET(0x1A945D50)
#define SHARE_CVECTOR4F_GET_Y_OFFSET UNITYSDK_OFFSET(0x1A945D70)
#define SHARE_CVECTOR4F_GET_Z_OFFSET UNITYSDK_OFFSET(0x1A945D90)
#define SHARE_CVECTOR4F_SET_W_OFFSET UNITYSDK_OFFSET(0x1A945DC0)
#define SHARE_CVECTOR4F_SET_X_OFFSET UNITYSDK_OFFSET(0x1A945D60)
#define SHARE_CVECTOR4F_SET_Y_OFFSET UNITYSDK_OFFSET(0x1A945D80)
#define SHARE_CVECTOR4F_SET_Z_OFFSET UNITYSDK_OFFSET(0x1A945DA0)
#define SHARE_CVECTOR4F_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1A945DD0)
#define SHARE_CVECTOR4F__CTOR_OFFSET UNITYSDK_OFFSET(0x1A9460D0)

namespace Share
{
	inline static constexpr unsigned int CVector4f_TypeDefinitionIndex = 10024;

	class CVector4f : public ::System::Object
	{
	public:
		::System::Double m_Z; // 0x10
		::System::Double m_W; // 0x18
		::System::Double m_X; // 0x20
		::System::Double m_Y; // 0x28

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
