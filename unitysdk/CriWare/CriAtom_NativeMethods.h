#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CRIWARE_CRIATOM_NATIVEMETHODS_CRIATOM_GETTHREADPRIORITY_ANDROID_OFFSET UNITYSDK_OFFSET(0x1CB76080)
#define CRIWARE_CRIATOM_NATIVEMETHODS_CRIATOM_SETTHREADPRIORITY_ANDROID_OFFSET UNITYSDK_OFFSET(0x1CB760A0)
#define CRIWARE_CRIATOM_NATIVEMETHODS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB7BFD0)

namespace CriWare
{
	inline static constexpr unsigned int CriAtom_NativeMethods_TypeDefinitionIndex = 38609;

	class CriAtom_NativeMethods : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_NATIVEMETHODS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 criAtom_GetThreadPriority_ANDROID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_NATIVEMETHODS_CRIATOM_GETTHREADPRIORITY_ANDROID_OFFSET))();
		}

		static ::System::Void criAtom_SetThreadPriority_ANDROID(::System::Int32 a1)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRIATOM_NATIVEMETHODS_CRIATOM_SETTHREADPRIORITY_ANDROID_OFFSET))(a1);
		}
	};
}
