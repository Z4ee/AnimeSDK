#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedMonoBehaviour.h"

#define MOLEMOLE_UICAMPIDLETREE__CTOR_OFFSET UNITYSDK_OFFSET(0x19327C50)

namespace MoleMole
{
	inline static constexpr unsigned int UICampIdleTree_TypeDefinitionIndex = 56284;

	class UICampIdleTree : public ::Sirenix::OdinInspector::SerializedMonoBehaviour
	{
	public:
		::System::Int32 TalentID; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMPIDLETREE__CTOR_OFFSET))(this);
		}
	};
}
