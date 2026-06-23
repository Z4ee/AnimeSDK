#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SHARE_CVECTOR2_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B21BFA0)
#define SHARE_CVECTOR2_GET_X_OFFSET UNITYSDK_OFFSET(0x1B21BDA0)
#define SHARE_CVECTOR2_GET_Y_OFFSET UNITYSDK_OFFSET(0x1B21BDC0)
#define SHARE_CVECTOR2_SET_X_OFFSET UNITYSDK_OFFSET(0x1B21BDB0)
#define SHARE_CVECTOR2_SET_Y_OFFSET UNITYSDK_OFFSET(0x1B21BDD0)
#define SHARE_CVECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B21BDE0)
#define SHARE_CVECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21BFB0)

namespace Share
{
	inline static constexpr unsigned int CVector2_TypeDefinitionIndex = 14048;

	class CVector2 : public ::System::Object
	{
	public:
		::System::Int32 m_X; // 0x10
		::System::Int32 m_Y; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR2__CTOR_OFFSET))(this);
		}

		::System::Int32 get_X()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR2_GET_X_OFFSET))(this);
		}

		::System::Void set_X(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CVECTOR2_SET_X_OFFSET))(this, value);
		}

		::System::Int32 get_Y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR2_GET_Y_OFFSET))(this);
		}

		::System::Void set_Y(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SHARE_CVECTOR2_SET_Y_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR2_TOSTRING_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SHARE_CVECTOR2_CLEAR_OFFSET))(this);
		}
	};
}
