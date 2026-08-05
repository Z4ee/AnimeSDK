#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class ReservedObjectPool___c__DisplayClass28_0; }

#define FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_1__CTOR_OFFSET UNITYSDK_OFFSET(0x11EAE800)
#define FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_1__INIT_B__2_OFFSET UNITYSDK_OFFSET(0x11EAE810)

namespace Foundation
{
	inline static constexpr unsigned int ReservedObjectPool___c__DisplayClass28_1_TypeDefinitionIndex = 86655;

	class ReservedObjectPool___c__DisplayClass28_1 : public ::System::Object
	{
	public:
		::Foundation::AssetRequestHandle handle; // 0x10
		::Foundation::ReservedObjectPool___c__DisplayClass28_0* CS___8__locals1; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_1__CTOR_OFFSET))(this);
		}

		::System::Void _Init_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_RESERVEDOBJECTPOOL___C__DISPLAYCLASS28_1__INIT_B__2_OFFSET))(this);
		}
	};
}
