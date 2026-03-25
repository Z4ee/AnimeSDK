#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/RTIDHandle.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define RPG_CUSTOMRP_RPGDEPTHOFFIELD_COCDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x16AAEA60)

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RPGDepthOfField_CoCDescriptor_TypeDefinitionIndex = 29410;

	class RPGDepthOfField_CoCDescriptor : public ::System::Object
	{
	public:
		::UnityEngine::Vector4 RenderTargetSize; // 0x10
		::RPG::CustomRP::RTIDHandle rtID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CUSTOMRP_RPGDEPTHOFFIELD_COCDESCRIPTOR__CTOR_OFFSET))(this);
		}
	};
}
