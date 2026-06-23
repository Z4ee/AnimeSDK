#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_MONOUIMOVERMODE_CLASS_1_739285DE2D0B7F75_METHOD_1_CA6BDDCC5F7CE11E_OFFSET UNITYSDK_OFFSET(0x16CDDBF0)
#define MOLEMOLE_MONOUIMOVERMODE_CLASS_1_739285DE2D0B7F75_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x16CDDC60)
#define MOLEMOLE_MONOUIMOVERMODE_CLASS_1_739285DE2D0B7F75__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDDBE0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIMoverMode_Class_1_739285DE2D0B7F75_TypeDefinitionIndex = 41722;

	class MonoUIMoverMode_Class_1_739285DE2D0B7F75 : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* Field_1_0; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_CLASS_1_739285DE2D0B7F75__CTOR_OFFSET))(this);
		}

		::System::Void Method_1_CA6BDDCC5F7CE11E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_CLASS_1_739285DE2D0B7F75_METHOD_1_CA6BDDCC5F7CE11E_OFFSET))(this, a1);
		}

		::System::Single Method_1_FB4BE762B6186C23()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOUIMOVERMODE_CLASS_1_739285DE2D0B7F75_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
		}
	};
}
