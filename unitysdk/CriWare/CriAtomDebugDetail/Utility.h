#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CRIWARE_CRIATOMDEBUGDETAIL_UTILITY_PTRTOSTRINGAUTOORNULL_OFFSET UNITYSDK_OFFSET(0x164A6DC0)
#define CRIWARE_CRIATOMDEBUGDETAIL_UTILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x164A6DF0)

namespace CriWare::CriAtomDebugDetail
{
	inline static constexpr unsigned int Utility_TypeDefinitionIndex = 38907;

	class Utility : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMDEBUGDETAIL_UTILITY__CTOR_OFFSET))(this);
		}

		static ::System::String* PtrToStringAutoOrNull(::System::IntPtr a1)
		{
			return ((::System::String*(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOMDEBUGDETAIL_UTILITY_PTRTOSTRINGAUTOORNULL_OFFSET))(a1);
		}
	};
}
